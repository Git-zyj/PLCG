/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119118
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
    var_15 = ((/* implicit */int) var_12);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [i_2] [(signed char)14] = ((/* implicit */_Bool) max((arr_2 [i_2]), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_4] = (+((~(160663951U))));
                                var_16 &= ((/* implicit */short) (signed char)127);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)3))))))));
}
