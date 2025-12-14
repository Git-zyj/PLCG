/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125176
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
    var_17 *= ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_11 [i_0] = ((/* implicit */unsigned char) ((arr_6 [i_0 - 1] [i_0] [i_0 - 1]) << (((/* implicit */int) ((((/* implicit */int) (unsigned short)32640)) >= (((int) (unsigned char)100)))))));
                        var_18 -= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_1] [i_1] [i_1] [i_3]) ? ((~((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)155)))))))), (((((/* implicit */_Bool) ((signed char) (short)-3071))) ? (((unsigned long long int) (short)-4638)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1] [2LL]))))))))));
                    }
                    var_19 = ((/* implicit */unsigned int) arr_9 [8LL] [i_1] [i_1] [6LL] [i_2]);
                }
                for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_5 = 3; i_5 < 9; i_5 += 1) 
                    {
                        var_20 *= ((/* implicit */long long int) ((int) (unsigned char)0));
                        var_21 *= ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [(unsigned short)8]))));
                        var_22 *= ((/* implicit */unsigned long long int) ((var_15) == (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0 + 1] [2ULL] [i_0 - 1])))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                arr_21 [i_0 - 1] [i_1] [i_4] [i_6] [i_0] = ((/* implicit */signed char) var_13);
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_6]))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        arr_25 [i_8] [i_0] [i_0] [(unsigned char)3] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)0))));
                        arr_26 [i_0 + 2] [i_0 + 1] [i_0] [i_0] [i_0 + 2] = ((/* implicit */long long int) var_10);
                    }
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
                    {
                        arr_29 [i_0] [i_1] [i_4] [i_4] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)17))));
                        var_24 += ((/* implicit */unsigned int) ((unsigned char) arr_1 [(short)4]));
                        arr_30 [i_0 + 2] [i_1] [i_4] [(unsigned short)6] [i_4] [i_0] = ((/* implicit */long long int) ((short) (unsigned char)100));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (var_8) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) | (arr_17 [i_0 + 2] [i_0])))));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((3727997813870377268LL) * (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned char)6]))))))));
                    }
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 1; i_11 < 9; i_11 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)26262))));
                            var_28 = ((/* implicit */signed char) (-((-(((/* implicit */int) var_3))))));
                        }
                        for (long long int i_12 = 2; i_12 < 9; i_12 += 4) 
                        {
                            var_29 *= ((/* implicit */signed char) arr_17 [8ULL] [i_12]);
                            var_30 = ((/* implicit */unsigned short) (~((+(-7391762680911385334LL)))));
                            arr_40 [i_12 - 1] [i_0] [i_4] [i_10] [i_12 - 1] = ((/* implicit */unsigned char) ((unsigned int) (-(((/* implicit */int) (short)8059)))));
                            var_31 &= ((/* implicit */long long int) ((arr_14 [i_0 - 1] [i_12] [i_0 - 1] [i_0 + 2]) < (((/* implicit */int) arr_0 [i_12]))));
                            var_32 = (+((~(var_4))));
                        }
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) (~(var_12))))));
                        var_34 = ((/* implicit */unsigned short) (short)11852);
                        var_35 = ((((/* implicit */_Bool) (short)3076)) ? (arr_6 [i_0 + 2] [i_0] [i_0 + 2]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)3071))))));
                    }
                    /* LoopNest 2 */
                    for (short i_13 = 1; i_13 < 9; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 3) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) arr_44 [i_0])))));
                                arr_46 [i_0] [0] [i_1] [i_4] [0] [i_0] &= ((/* implicit */unsigned char) (+(min((arr_33 [i_13 - 1] [8]), (((/* implicit */unsigned int) (unsigned char)236))))));
                            }
                        } 
                    } 
                    var_37 &= ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)114)), ((-2147483647 - 1))));
                }
                for (unsigned long long int i_15 = 1; i_15 < 9; i_15 += 1) 
                {
                    arr_49 [i_0 - 1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) max((arr_37 [i_0]), (((/* implicit */short) var_13))))))) >> (((8120416682963682795ULL) - (8120416682963682778ULL)))));
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 4; i_16 < 6; i_16 += 1) 
                    {
                        for (unsigned int i_17 = 1; i_17 < 7; i_17 += 1) 
                        {
                            {
                                arr_56 [i_0] [i_1] = (i_0 % 2 == 0) ? (((/* implicit */short) min((((arr_12 [(signed char)5] [8U] [i_15] [i_0]) << ((((+(arr_6 [i_0] [i_0] [i_0 + 1]))) - (15841802854851609216ULL))))), (((/* implicit */long long int) ((min((12919263481858669338ULL), (((/* implicit */unsigned long long int) (unsigned char)18)))) < (((/* implicit */unsigned long long int) ((int) arr_24 [i_0 - 1] [6U] [(unsigned short)0] [i_0 + 2] [i_0] [i_0]))))))))) : (((/* implicit */short) min((((((arr_12 [(signed char)5] [8U] [i_15] [i_0]) + (9223372036854775807LL))) << ((((((+(arr_6 [i_0] [i_0] [i_0 + 1]))) - (15841802854851609216ULL))) - (11916414337246579967ULL))))), (((/* implicit */long long int) ((min((12919263481858669338ULL), (((/* implicit */unsigned long long int) (unsigned char)18)))) < (((/* implicit */unsigned long long int) ((int) arr_24 [i_0 - 1] [6U] [(unsigned short)0] [i_0 + 2] [i_0] [i_0])))))))));
                                var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1400096492U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((/* implicit */int) arr_41 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_16])) : (((((/* implicit */int) var_0)) / (((/* implicit */int) var_16))))))) && (((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned char)184)))))))));
                            }
                        } 
                    } 
                }
                var_39 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_43 [i_0]))))) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) arr_43 [i_0])))));
                /* LoopNest 2 */
                for (long long int i_18 = 0; i_18 < 10; i_18 += 3) 
                {
                    for (unsigned short i_19 = 0; i_19 < 10; i_19 += 1) 
                    {
                        {
                            var_40 -= ((/* implicit */unsigned int) max(((unsigned short)18450), (((/* implicit */unsigned short) (short)-19141))));
                            var_41 ^= arr_33 [(signed char)8] [(signed char)8];
                            var_42 = ((/* implicit */unsigned char) arr_35 [i_0 + 2] [i_1] [i_18] [i_19] [i_0 + 1]);
                        }
                    } 
                } 
                var_43 = ((/* implicit */unsigned char) arr_57 [i_0 + 1] [i_0] [i_0] [i_1]);
                var_44 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)200)) >= (((/* implicit */int) (unsigned short)39273)))))));
            }
        } 
    } 
}
