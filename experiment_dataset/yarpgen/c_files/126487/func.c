/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126487
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */int) max((var_12), ((((((~(2147483647))) | (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])) ? (536870911) : (2147483647))))) + (((((/* implicit */_Bool) 536870930)) ? (arr_4 [i_0 - 1] [i_2 + 1] [i_2 + 1]) : (-2147483636)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_13 &= ((arr_2 [i_0 + 2] [0]) / (584909576));
                        arr_12 [i_2] [i_2] = 2147483617;
                    }
                    var_14 = ((/* implicit */int) max((var_14), (((var_5) - (-39881630)))));
                }
            } 
        } 
    } 
    var_15 ^= var_0;
    var_16 &= 578847724;
    var_17 ^= var_8;
}
