/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134701
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((unsigned char) var_10)), (((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) (short)12281)))))))) ? (max((((long long int) arr_3 [i_0])), (((/* implicit */long long int) max((arr_2 [i_1]), (arr_2 [i_1])))))) : (((/* implicit */long long int) var_5))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_18 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_4 [i_2] [i_2] [i_0] [i_0])), (((var_6) << (((((/* implicit */int) var_9)) - (4940))))))) << (((var_7) + (1885086261)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_4] [i_4 - 2])) - (((/* implicit */int) arr_6 [i_0] [i_4] [i_1] [i_4 + 3])))));
                                var_20 = arr_1 [i_0];
                                var_21 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_15)) + (2147483647))) << (((((var_7) + (1885086218))) - (2)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32761))))) : (((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) ((int) max(((short)-17375), ((short)7))));
                }
                for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    var_23 *= ((/* implicit */short) (!(((/* implicit */_Bool) (short)-17))));
                    arr_13 [i_0] [(unsigned short)15] [i_5] = ((/* implicit */signed char) arr_10 [i_5] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    arr_14 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [(unsigned char)13]);
                }
                var_24 |= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) var_4);
}
