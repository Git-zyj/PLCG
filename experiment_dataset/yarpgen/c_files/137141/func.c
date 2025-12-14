/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137141
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
    var_18 *= ((/* implicit */_Bool) (short)25909);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */int) ((unsigned char) arr_5 [3U] [3U] [i_0]))) >> (((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 1]))))));
                var_19 -= ((/* implicit */unsigned char) (~(9223372036854775807LL)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 1489860719U)) && (((/* implicit */_Bool) var_0)))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)25914)) ? (2805106556U) : (3590666510U)))), (arr_11 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) max((max((1489860719U), (1489860736U))), (((/* implicit */unsigned int) arr_0 [i_0])))))));
                            var_21 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [(short)0] [i_1] [i_1])) ? (arr_3 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) ((arr_11 [i_0] [i_0] [10ULL] [(unsigned short)10]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [7LL])))))))))));
                            /* LoopSeq 2 */
                            for (short i_4 = 1; i_4 < 12; i_4 += 3) 
                            {
                                arr_15 [i_0] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_1] [i_1])) << (((arr_5 [i_2 + 4] [i_2 + 3] [i_2 + 2]) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_2 + 2] [i_4 + 1] [i_4 + 1]))))));
                                var_22 = (-(((0ULL) >> (((((/* implicit */int) (short)-25909)) + (25947))))));
                            }
                            for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                            {
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_0 [i_2]))));
                                arr_18 [i_0] [i_1] [i_2 + 4] [i_3 + 1] [i_5] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)57311)) ? (((/* implicit */unsigned long long int) 1489860719U)) : (9ULL)))));
                                var_24 -= ((/* implicit */long long int) (~((~(((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 2] [i_2 - 1]))))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = arr_14 [i_1];
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) var_3);
    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (short)25920))))))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)63))))), ((-(var_13))))) : (((/* implicit */unsigned long long int) ((498542126) >> (((/* implicit */int) max(((short)-25920), (((/* implicit */short) var_11)))))))))))));
}
