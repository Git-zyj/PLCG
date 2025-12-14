/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12658
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) arr_0 [i_0]);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (signed char i_4 = 4; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (((!((_Bool)0))) && (((/* implicit */_Bool) max((68685922304ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))))));
                                arr_15 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_6);
                                var_17 = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned long long int) var_11);
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((short) var_4)))));
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) (_Bool)1))) / (((/* implicit */int) ((((var_15) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) <= (17851280892853758266ULL)))))))));
}
