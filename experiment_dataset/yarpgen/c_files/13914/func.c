/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13914
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
    var_16 = ((/* implicit */unsigned char) var_15);
    var_17 = ((/* implicit */unsigned int) var_6);
    var_18 = var_8;
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) var_6);
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_2 [i_0] [i_2 - 1])))) != (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_2 [i_1 - 1] [i_2]))))));
                    arr_13 [i_0 + 1] [i_1] [i_2] = ((/* implicit */short) var_10);
                }
            } 
        } 
    }
}
