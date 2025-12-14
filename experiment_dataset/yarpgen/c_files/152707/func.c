/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152707
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
    var_15 |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */short) var_9)), (var_13)))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 9223372036854775807LL)))))), (min((((/* implicit */unsigned int) var_6)), (min((((/* implicit */unsigned int) (unsigned char)7)), (var_14)))))));
    var_16 |= ((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_8)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))) : (var_8))) < (min((((/* implicit */unsigned int) (unsigned char)249)), (323649335U))))))) : (max((min((((/* implicit */unsigned int) var_4)), (var_0))), (((/* implicit */unsigned int) (unsigned char)14))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_6), (var_6)))), (arr_1 [i_0] [i_0])))) ? (((long long int) min((arr_3 [10U] [i_1 - 1] [i_1]), (((/* implicit */long long int) (signed char)-111))))) : (((/* implicit */long long int) ((((var_14) == (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) ? (min((var_2), (var_14))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) >> (((3862751303U) - (3862751298U))))))))))))));
                var_19 = ((arr_0 [i_0]) - (((unsigned int) ((arr_3 [i_1] [i_1] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((var_13), (((/* implicit */short) arr_10 [i_1 + 3] [i_2 - 1] [i_1 + 1])))))) * ((((!(((/* implicit */_Bool) var_11)))) ? (min((((/* implicit */long long int) (short)-24176)), (var_1))) : (min((((/* implicit */long long int) var_7)), (771232945518042674LL)))))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_11 [i_4] [i_3] [i_0] [i_0] [i_0]))));
                                arr_12 [i_0] [i_1] [i_2 - 1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) arr_8 [i_2] [i_2 + 1] [i_2 - 1] [(signed char)11] [(signed char)11] [i_2 + 1])), (9223372036854775807LL))) << (((max((((/* implicit */long long int) var_4)), (var_1))) - (1231376852574082383LL)))));
                            }
                            arr_13 [i_0] [i_1] [i_2] = ((/* implicit */short) max((min(((+(var_14))), (((/* implicit */unsigned int) (_Bool)0)))), (min((((/* implicit */unsigned int) var_3)), (arr_8 [i_1] [i_1 + 1] [i_1 + 3] [i_1] [i_1] [i_0])))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) 4294967280U);
            }
        } 
    } 
}
