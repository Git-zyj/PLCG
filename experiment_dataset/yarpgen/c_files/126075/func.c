/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126075
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
    var_19 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_14) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_5)))))))));
    var_20 = ((/* implicit */signed char) var_7);
    var_21 = ((/* implicit */long long int) max((var_6), (((/* implicit */unsigned char) ((var_8) >= (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */signed char) var_11);
                var_23 += ((((/* implicit */_Bool) min(((~(var_13))), (((/* implicit */long long int) max(((short)-8689), (var_3))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((signed char) (short)8689))), (((614991698U) >> (((16383U) - (16379U)))))))) : (min((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) (unsigned char)244)))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 13; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) arr_12 [i_3 - 2] [i_3] [i_4] [i_3] [(unsigned char)8])))));
                                arr_14 [i_4] [(unsigned char)9] [i_2] [i_1] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [(signed char)5])) || (((/* implicit */_Bool) -1LL))))), (((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */unsigned long long int) 614991698U)) : (arr_3 [(unsigned char)5] [1LL] [i_2])))));
                                var_25 += ((/* implicit */unsigned long long int) max((((((unsigned int) var_4)) + (4294967295U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((4004402476U), (((/* implicit */unsigned int) arr_1 [7ULL]))))))))));
                                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((long long int) ((((/* implicit */int) arr_10 [(unsigned char)3] [i_3 - 2] [i_3 - 2] [(short)2] [(short)11])) % (((/* implicit */int) arr_10 [i_3 - 3] [i_3 + 1] [i_3 + 1] [0ULL] [(signed char)9]))))))));
                                arr_15 [2LL] [i_4] [i_2] [i_4] [4U] [(signed char)11] = ((/* implicit */unsigned int) (unsigned char)25);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-8689))))), (((((/* implicit */_Bool) (-(9223372036854775793LL)))) ? (((((/* implicit */_Bool) (unsigned char)10)) ? (arr_3 [5U] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [12U] [(signed char)9] [13LL]))))) : (((/* implicit */unsigned long long int) ((long long int) arr_3 [i_0] [1ULL] [13ULL])))))));
                }
                for (signed char i_5 = 2; i_5 < 13; i_5 += 3) 
                {
                    var_28 = ((/* implicit */unsigned int) min((var_28), ((+(var_1)))));
                    var_29 -= ((/* implicit */short) (-(max((((/* implicit */long long int) (short)-8689)), (-8513983885177330743LL)))));
                }
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_7 = 3; i_7 < 13; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            {
                                var_30 = (signed char)127;
                                arr_26 [i_6] [i_6] [i_7] [(unsigned char)11] [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) 10237378174739348764ULL)))));
                                var_31 = (-(((unsigned long long int) var_7)));
                                var_32 = ((/* implicit */short) arr_23 [i_7] [(signed char)10] [13ULL] [0U] [13ULL]);
                                var_33 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_0 [i_7 + 1] [i_7 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7 - 3] [i_7 - 1]))) : (var_15))), (((/* implicit */unsigned long long int) (short)-8689))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */signed char) max((6875025654117991115ULL), (((/* implicit */unsigned long long int) 1756443478U))));
                }
            }
        } 
    } 
    var_35 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (short)14969)) && (((/* implicit */_Bool) 1756443478U))))));
}
