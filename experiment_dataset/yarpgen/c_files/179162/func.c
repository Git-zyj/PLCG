/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179162
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
    var_10 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), ((short)4768))))) : ((+(8847254054558443212ULL)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */long long int) arr_4 [i_1])), (((((/* implicit */long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) (_Bool)0))))) + (1453336009100813596LL)))));
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                var_11 = ((((((/* implicit */_Bool) ((short) arr_5 [i_0]))) ? ((~(arr_2 [i_1 - 2] [i_0]))) : (((/* implicit */unsigned long long int) arr_4 [i_1 - 3])))) & (arr_2 [i_1 - 1] [i_1]));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_16 [i_3 - 1] [i_3] [i_3] [i_3 - 1] = ((/* implicit */unsigned long long int) (short)28422);
                                arr_17 [i_0] [i_3 - 2] [i_2] [i_0] [i_3] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 2])) ? (arr_9 [i_0] [i_1 - 2]) : (arr_9 [i_0] [i_1 - 2])))));
                                var_12 = ((/* implicit */unsigned long long int) var_1);
                                arr_18 [i_0] [i_3] [i_1] [i_3] [i_4] |= ((/* implicit */short) max(((unsigned char)3), (((/* implicit */unsigned char) (signed char)-117))));
                                var_13 = min((min((arr_2 [(short)6] [(unsigned short)13]), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_3 [i_0])), (-6323228042999727492LL)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_8), ((signed char)(-127 - 1)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
