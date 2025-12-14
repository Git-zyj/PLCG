/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16214
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
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_16 = (-((~((~(-3386055070329670834LL))))));
                    arr_8 [i_1] [(short)14] [i_1] [i_2] = ((/* implicit */_Bool) (~((~(arr_3 [i_1 - 3] [i_1 - 3])))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0 + 1] [i_1] [18LL] [i_1] [i_1] = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_1 [i_1 - 3]))))));
                                var_17 ^= (-((~(5LL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) (~((-(-4959183230493140776LL)))));
                                arr_24 [i_0 + 2] [i_0 + 2] [i_2] [i_5] [i_1] = ((/* implicit */short) (-((~(((/* implicit */int) arr_10 [i_0 + 2] [i_0 + 4] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 2]))))));
                                arr_25 [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_1] [i_0] = (~((~(-4058739002452368888LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) var_3);
}
