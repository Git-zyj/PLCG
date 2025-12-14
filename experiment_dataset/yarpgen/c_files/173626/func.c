/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173626
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_15 = ((/* implicit */signed char) var_13);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_10 [i_1] [i_1] [i_1] = (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1])) != (((/* implicit */int) var_11))))));
                    arr_11 [i_1] = ((/* implicit */unsigned short) min(((unsigned char)118), (min(((unsigned char)118), ((unsigned char)137)))));
                }
            } 
        } 
        var_16 = ((/* implicit */short) ((unsigned char) max((arr_3 [i_0]), (((/* implicit */short) (unsigned char)0)))));
        arr_12 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) var_9)))));
    }
}
