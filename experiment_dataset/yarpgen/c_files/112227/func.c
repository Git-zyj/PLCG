/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112227
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_0 + 1] [i_0] [i_2] = ((/* implicit */signed char) (unsigned short)51186);
                    arr_9 [i_0] = ((/* implicit */unsigned char) var_13);
                    arr_10 [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) min(((-(((((/* implicit */int) arr_1 [(_Bool)1])) * (((/* implicit */int) var_5)))))), (((/* implicit */int) var_0))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_0]))))));
    }
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_14))));
    var_16 = 7687045981083775023ULL;
}
