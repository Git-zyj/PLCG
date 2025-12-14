/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185043
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (_Bool)0)) / (1837364131)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 3) 
                {
                    arr_10 [i_0] [i_1] [i_2] [i_0 + 3] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)62))));
                    var_13 |= ((/* implicit */short) min((((min((((/* implicit */unsigned long long int) arr_8 [i_2] [i_1 + 1] [i_0] [i_0])), (var_7))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) max((var_11), ((-(3732663961902244563LL))))))));
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    var_14 = ((/* implicit */short) (~(((/* implicit */int) var_5))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 4; i_5 < 22; i_5 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_1] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_1 + 2] [i_1 + 2] [i_5 - 3] [i_5 - 4])) * (((/* implicit */int) arr_11 [i_0 + 1] [i_1 + 1] [i_1 - 1] [i_0 + 3]))));
                                arr_20 [i_1] [i_4] [4LL] [i_5] = ((/* implicit */signed char) (((_Bool)1) ? (var_11) : ((-9223372036854775807LL - 1LL))));
                                var_15 = ((/* implicit */unsigned int) (((+(var_4))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 1])))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_6 = 1; i_6 < 23; i_6 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        arr_27 [i_6] = ((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned short)6219)))), (((((/* implicit */int) arr_0 [i_0 + 2])) * ((-(((/* implicit */int) arr_24 [i_0] [11LL] [i_6] [i_7]))))))));
                        arr_28 [i_6] [i_1] [i_6 - 1] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_4), (var_3)))) ? (((/* implicit */int) (unsigned short)58712)) : (-11)));
                        /* LoopSeq 2 */
                        for (short i_8 = 2; i_8 < 21; i_8 += 2) /* same iter space */
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_6] [i_0 + 2] = ((/* implicit */unsigned long long int) arr_8 [i_8 + 2] [i_0] [i_6] [i_0]);
                            var_16 = arr_31 [i_6] [i_6 + 1] [i_0 + 3] [i_1 - 1] [i_6];
                            var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_12)) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_8 - 2] [i_8 + 2]))) & (var_4)))));
                            var_18 = ((/* implicit */_Bool) max((((var_12) >> (((18446744073709551603ULL) - (18446744073709551574ULL))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)6242)) + (((/* implicit */int) (signed char)-63)))))));
                        }
                        for (short i_9 = 2; i_9 < 21; i_9 += 2) /* same iter space */
                        {
                            var_19 -= ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) arr_26 [i_1 + 2] [i_0 + 3] [i_6] [i_9 + 1] [i_6 + 1]))))));
                            arr_37 [i_6] [i_1] [i_6 - 1] [i_7] [i_7] [i_9] = ((/* implicit */short) max(((((+(929300949))) >> (((max((arr_14 [i_1 + 3] [i_1 - 1] [i_1 - 1] [i_1 + 2]), (((/* implicit */unsigned int) (unsigned char)76)))) - (754156946U))))), (((/* implicit */int) arr_17 [i_0] [i_1 + 2] [i_1 + 3] [i_6 - 1] [i_6 - 1]))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) max((arr_6 [i_7] [i_6 - 1] [i_9]), (arr_6 [i_7] [i_7] [i_7]))))));
                            arr_38 [i_6] [i_7] [i_6 + 1] [i_6] = ((/* implicit */long long int) max((min((var_4), (((/* implicit */unsigned long long int) ((16889205949379757306ULL) > (((/* implicit */unsigned long long int) var_1))))))), (((/* implicit */unsigned long long int) arr_2 [i_0 + 2]))));
                            arr_39 [i_6] [i_6] [i_7] [i_6] [i_6] = ((/* implicit */short) min((min((var_7), (((/* implicit */unsigned long long int) arr_34 [i_1 + 2] [i_6] [i_6] [i_6] [i_6 + 1])))), (var_3)));
                        }
                        arr_40 [i_6] = ((/* implicit */int) max((4597935994036199254LL), (arr_2 [i_6 - 1])));
                    }
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        arr_43 [i_10] [i_10] [i_10] [i_10] [i_10] &= ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32096)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_10] [i_6] [i_1 - 1] [i_0 + 2])))))) + (min((((/* implicit */unsigned long long int) (unsigned short)33225)), (9450153499415527716ULL))))), (max((((/* implicit */unsigned long long int) var_5)), (((6816967511205698255ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2774)))))))));
                        var_21 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_6 - 1] [i_0] [i_6 - 1] [i_0] [i_10]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6 - 1] [i_1 - 1] [i_6] [i_6 + 1] [i_10]))) | (var_7)))));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max((11629776562503853360ULL), (((((/* implicit */_Bool) (unsigned short)33225)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))) : (17313229463674485265ULL))))))));
                        var_23 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)42583)) ? (((/* implicit */int) arr_36 [i_6 + 1] [i_6 + 1] [i_1 + 2] [i_1 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) var_6)))), (((((/* implicit */int) arr_34 [i_0] [i_0 + 3] [i_0 - 1] [i_1 + 2] [i_6 - 1])) + (((/* implicit */int) (_Bool)0))))));
                    }
                    var_24 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)250))))), (min((((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) -2075663715))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [i_0] [i_0 + 3] [i_0] [i_0 - 1] [i_0] [i_0]))) - (var_7)))))));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) min((((unsigned char) var_5)), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 929300949)) || (((/* implicit */_Bool) arr_42 [(_Bool)1] [(_Bool)1] [i_0] [0ULL] [i_1 - 1] [(unsigned short)10])))))))), ((unsigned short)65525))))));
                }
                var_26 = min(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_9)));
                var_27 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0 + 3])) : (((/* implicit */int) arr_3 [i_0 - 1]))))), (((arr_21 [i_0 + 2] [i_0 + 2] [i_0 + 2] [(_Bool)1]) / (var_4)))));
                /* LoopNest 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 2; i_12 < 22; i_12 += 3) 
                    {
                        for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            {
                                var_28 = ((((/* implicit */_Bool) (unsigned short)27410)) && (((/* implicit */_Bool) -1293505299684987736LL)));
                                arr_55 [i_13] [i_12] [(signed char)8] &= ((/* implicit */_Bool) var_12);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
    var_30 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)62761))));
    var_31 &= ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_7)))))));
}
