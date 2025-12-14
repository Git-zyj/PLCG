/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102364
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_11 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 + 2] [i_1] [i_2])) | (((/* implicit */int) min((arr_5 [i_0]), (((/* implicit */unsigned short) (short)32761)))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) arr_4 [i_1] [i_1] [i_0 + 2])))))))) : (max((arr_3 [i_0] [(unsigned short)12] [i_0 - 1]), (arr_1 [i_0])))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_11 [i_4] [i_3 - 1] [i_3] [(short)10] [i_3] [i_3] = ((((/* implicit */_Bool) 2147483632)) ? (min((arr_9 [i_0] [12U] [i_2] [i_0] [i_4 + 1] [i_4] [11U]), (((/* implicit */unsigned int) arr_5 [i_0 - 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)0)), (2430113618U)))) || ((!(((/* implicit */_Bool) arr_0 [(signed char)16])))))))));
                                arr_12 [i_0 + 2] [i_1] [i_4] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_4 - 1]))))) ? (((/* implicit */int) ((unsigned short) (signed char)-20))) : (((/* implicit */int) min((arr_4 [i_4 - 2] [i_4 + 1] [i_0 + 2]), (((/* implicit */short) arr_10 [i_4 + 2])))))));
                                var_12 *= ((/* implicit */unsigned short) arr_9 [i_4] [i_4] [i_4] [1U] [i_4 - 2] [i_4] [i_4 - 2]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 1; i_5 < 15; i_5 += 3) 
                    {
                        var_13 = ((unsigned int) ((((((/* implicit */_Bool) -2147483615)) ? (2614507003U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) != (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)9)), ((unsigned short)55753)))))));
                        var_14 = ((/* implicit */long long int) ((signed char) min((((((/* implicit */_Bool) (unsigned short)24)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) arr_5 [i_0])))), (((/* implicit */int) (signed char)-5)))));
                        var_15 &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_0] [i_0 - 1] [i_0] [i_0 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0])) == (-3362338001555758956LL))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) - (268435455LL)))))), (((((/* implicit */unsigned long long int) 2070576523U)) - (arr_6 [i_5] [i_5 - 1] [(unsigned char)5] [(unsigned char)5])))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        for (int i_7 = 1; i_7 < 23; i_7 += 4) 
        {
            for (short i_8 = 1; i_8 < 23; i_8 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)236))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((((/* implicit */_Bool) (unsigned short)16383)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_6])))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)20))))) ? (((/* implicit */unsigned long long int) (+(1680460292U)))) : (max((((/* implicit */unsigned long long int) arr_19 [i_8] [i_7])), (arr_15 [i_6])))))));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 23; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            {
                                var_17 -= ((((/* implicit */long long int) ((arr_21 [i_10] [i_10] [i_10]) - (((/* implicit */int) (short)31125))))) - (max((arr_26 [i_9] [i_10]), (((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967278U))))))));
                                arr_28 [i_6] = (+(((((/* implicit */_Bool) arr_23 [i_6] [i_7] [i_7] [i_6] [i_8 - 1])) ? (arr_21 [i_6] [i_7] [i_6]) : (((/* implicit */int) (unsigned char)255)))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        arr_31 [i_6] [i_7] [i_6] = ((/* implicit */unsigned short) (~(max((arr_17 [i_6] [i_6] [i_11]), (((/* implicit */int) (signed char)-124))))));
                        arr_32 [i_6] [i_6] = ((/* implicit */unsigned char) min((min((arr_15 [i_6]), (((/* implicit */unsigned long long int) arr_30 [i_7] [i_7 + 1] [i_7] [i_7] [i_7] [i_6])))), (((/* implicit */unsigned long long int) max((arr_26 [i_6] [i_8 + 1]), (arr_26 [i_6] [i_8 - 1]))))));
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 3) 
                    {
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_25 [7LL] [i_7] [i_8] [i_12] [i_7])))))));
                        /* LoopSeq 1 */
                        for (int i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) min((min((((/* implicit */long long int) ((_Bool) (signed char)126))), (max((((/* implicit */long long int) (signed char)(-127 - 1))), (arr_26 [i_13] [i_13]))))), (((/* implicit */long long int) ((signed char) ((long long int) -9159330781378995122LL)))))))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_17 [i_6] [i_6] [(signed char)3])), (arr_36 [i_6] [(signed char)14] [i_6] [i_6] [i_6] [(signed char)8] [i_13])))))), ((!(((/* implicit */_Bool) arr_34 [i_6])))))))));
                            arr_37 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_36 [i_7] [i_7 + 1] [i_7] [i_8 - 1] [i_13] [(unsigned char)16] [i_6]), (arr_36 [i_6] [i_7 + 1] [i_7] [i_8 - 1] [i_8 - 1] [i_7] [i_6])))) ? (max((arr_36 [i_6] [i_7 - 1] [17U] [i_8 - 1] [i_8 - 1] [i_8] [i_6]), (((/* implicit */unsigned int) (signed char)-9)))) : (min((((/* implicit */unsigned int) (_Bool)1)), (arr_36 [i_7] [i_7 + 1] [2U] [i_8 + 1] [(unsigned char)5] [i_13] [i_6])))));
                        }
                        var_21 = min((max((min((688988148), (((/* implicit */int) (unsigned short)29579)))), (((/* implicit */int) (short)0)))), (((((arr_16 [i_12]) & (((/* implicit */int) (signed char)9)))) >> (((((/* implicit */int) max(((unsigned char)212), (((/* implicit */unsigned char) (signed char)-1))))) - (227))))));
                    }
                    /* vectorizable */
                    for (signed char i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_15 = 2; i_15 < 23; i_15 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned int) arr_22 [i_6] [i_7 - 1] [i_14]);
                            arr_44 [i_6] [i_15] [i_6] [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((long long int) arr_23 [20] [i_7 - 1] [i_8 + 1] [i_6] [i_15]));
                        }
                        for (long long int i_16 = 2; i_16 < 23; i_16 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18219))) : (-957519823891692017LL))));
                            var_24 = ((/* implicit */_Bool) (unsigned char)44);
                        }
                        for (unsigned long long int i_17 = 4; i_17 < 22; i_17 += 1) 
                        {
                            arr_51 [i_6] [i_7] [i_7] [i_7] = ((/* implicit */int) (+(((unsigned int) arr_36 [i_6] [i_14] [i_14] [i_8] [(signed char)19] [i_7] [i_6]))));
                            var_25 = ((/* implicit */unsigned short) arr_25 [i_6] [i_7] [i_8 - 1] [i_8 - 1] [i_17]);
                        }
                        arr_52 [i_7 - 1] [i_8] [i_6] = ((/* implicit */unsigned int) (~(arr_21 [i_6] [i_7 + 1] [i_6])));
                        var_26 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) arr_41 [i_6] [i_6] [i_6] [i_6] [(signed char)3] [(signed char)3] [i_6])) | (((/* implicit */int) (signed char)14)))));
                        /* LoopSeq 2 */
                        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                        {
                            var_27 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_34 [i_18])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)13)))));
                            arr_56 [(signed char)7] [i_7] [i_6] [i_6] [i_18] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)43))));
                        }
                        for (short i_19 = 1; i_19 < 22; i_19 += 3) 
                        {
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)33096)) * (((/* implicit */int) arr_27 [i_7 + 1] [i_8 - 1] [i_8 + 1] [i_19 - 1])))))));
                            arr_59 [(signed char)8] [i_7] [i_8 + 1] [i_6] [i_19 - 1] = ((/* implicit */unsigned char) arr_39 [i_19] [i_19] [i_19] [i_14]);
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [i_7] [i_7 - 1] [i_8 - 1] [i_8] [i_6])) ? (((/* implicit */int) (short)8)) : (((/* implicit */int) arr_45 [i_6] [i_7 - 1] [i_8 + 1] [i_19] [i_6]))));
                            var_30 = ((/* implicit */unsigned short) 18446744073709551609ULL);
                        }
                    }
                    for (int i_20 = 1; i_20 < 22; i_20 += 3) 
                    {
                        var_31 = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_6]))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min(((unsigned char)38), ((unsigned char)36)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((3883860235U), (((/* implicit */unsigned int) (signed char)53))))))))));
                        var_32 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_46 [i_20] [i_20 + 1] [i_20] [i_20] [(signed char)6])) ? (arr_43 [i_8] [(unsigned char)21] [i_8] [i_8 + 1] [i_20]) : (((/* implicit */unsigned long long int) (+(2831305554U))))))));
                    }
                }
            } 
        } 
    } 
}
