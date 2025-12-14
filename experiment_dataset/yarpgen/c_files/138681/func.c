/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138681
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((int) (-(((/* implicit */int) (_Bool)0)))));
        var_18 ^= ((short) arr_0 [i_0] [i_0]);
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
        arr_4 [(short)2] &= ((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((2093784304) >= ((+(((/* implicit */int) arr_3 [(short)6])))))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)-32725)))))))));
        /* LoopSeq 2 */
        for (short i_2 = 3; i_2 < 8; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (short i_4 = 2; i_4 < 7; i_4 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) (+(arr_10 [i_2] [i_2] [i_4])));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((unsigned char) (short)16503)))));
                        var_24 -= ((/* implicit */short) ((long long int) ((unsigned long long int) 421058491)));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_25 = ((/* implicit */short) -2492514575349937433LL);
                            var_26 = ((/* implicit */unsigned short) (-(arr_9 [i_1] [i_4 + 3])));
                        }
                        for (int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_27 = ((/* implicit */short) (+(((/* implicit */int) arr_11 [i_2 - 3] [i_2 - 3] [i_2 - 3]))));
                            arr_25 [i_6] [i_6] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)214));
                            var_28 = ((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                        }
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned int) ((arr_0 [i_2 - 3] [i_2]) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_1] [i_2] [i_2 - 1] [i_2]))));
            arr_26 [i_1] [i_2 + 1] = ((/* implicit */int) 6398861716237262283LL);
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (short i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        arr_35 [i_1] [i_9] [i_9] [i_8] [i_9] |= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)0)))));
                        var_30 = ((/* implicit */unsigned char) ((((_Bool) var_3)) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_32 [i_1] [i_2 + 1] [i_2] [i_1] [i_8] [i_9])) : (((/* implicit */int) var_1))))) : (((long long int) 6U))));
                        var_31 = ((/* implicit */short) ((var_14) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_2 - 3] [i_9] [i_9])))));
                        arr_36 [i_1] [(short)9] [(short)9] [i_8] [i_9] = ((/* implicit */unsigned char) (!((_Bool)1)));
                    }
                    for (int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) var_10))));
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_12)) ? (arr_31 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (short)-32759))));
                    }
                    for (unsigned char i_11 = 4; i_11 < 8; i_11 += 3) 
                    {
                        var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_2 - 1] [i_11 - 1]))));
                        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((unsigned int) var_16)) & (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_2] [i_2] [i_2 - 2] [(unsigned short)6] [i_2]))))))));
                        var_36 *= ((/* implicit */_Bool) ((arr_14 [i_1] [i_7] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)7896))))));
                    }
                    for (short i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        arr_47 [(short)8] [i_2] [i_1] [(short)8] [i_2 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [1U] [1U] [i_7] [i_8] [i_12] [i_12] [i_12])) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [i_1]))))));
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_6 [i_12]))))))));
                        arr_48 [i_1] [i_12] = arr_21 [i_1] [i_1] [i_1];
                    }
                    var_38 ^= ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_46 [2LL] [i_2] [i_7] [i_7] [i_8] [i_2] [i_2]))) + ((~(((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_7] [i_1] [i_8]))))));
                }
                for (unsigned short i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_1]))));
                    var_40 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [i_13])) ? (((/* implicit */int) arr_8 [i_1] [i_2 - 3])) : (2147483647)))));
                }
                var_41 = ((/* implicit */short) var_2);
                var_42 = ((/* implicit */unsigned long long int) arr_21 [i_1] [i_1] [(_Bool)1]);
                var_43 = ((/* implicit */long long int) arr_21 [i_1] [i_2 - 2] [i_1]);
            }
            for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 3) 
            {
                var_44 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)116))));
                arr_53 [i_1] [i_1] [2LL] &= ((/* implicit */unsigned short) ((short) arr_49 [i_2 + 2] [i_2 - 1] [i_2 - 3] [(unsigned short)2] [i_2 - 3] [i_2 - 3]));
                var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((arr_21 [5] [5] [i_14]) ? ((~(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_14 [i_1] [(_Bool)1] [(unsigned short)7])) ? (((/* implicit */int) var_11)) : (arr_31 [i_1] [i_2 - 1] [i_1] [i_14] [i_14] [i_14]))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    for (short i_16 = 3; i_16 < 8; i_16 += 2) 
                    {
                        {
                            var_46 ^= ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                            arr_59 [i_16] [i_1] [i_16] = ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) arr_18 [i_1] [i_1] [i_2] [i_14] [i_15] [i_16 - 2] [i_14])))));
                            var_47 += ((/* implicit */unsigned short) arr_49 [i_1] [i_2] [i_14] [i_15] [i_2] [i_2]);
                            var_48 &= ((/* implicit */short) ((((/* implicit */int) (short)-19798)) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_1] [i_1] [i_14] [i_15])))))));
                        }
                    } 
                } 
            }
        }
        for (int i_17 = 0; i_17 < 10; i_17 += 4) 
        {
            var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_13 [i_1] [i_17] [i_17] [i_17]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_17])))))) ? (((var_2) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [i_1] [i_1])))) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_17]))));
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 10; i_18 += 4) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        var_50 = ((/* implicit */short) ((((/* implicit */_Bool) arr_65 [i_18])) ? (arr_51 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_17])))));
                        arr_70 [i_1] [i_1] [i_19] = ((/* implicit */unsigned char) ((2475507746U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)118)))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_20 = 0; i_20 < 10; i_20 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_21 = 0; i_21 < 10; i_21 += 3) 
                {
                    var_51 = ((/* implicit */unsigned int) (_Bool)0);
                    var_52 ^= (~(((/* implicit */int) var_11)));
                    var_53 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 3) 
                {
                    for (short i_23 = 0; i_23 < 10; i_23 += 4) 
                    {
                        {
                            var_54 = ((/* implicit */_Bool) max((var_54), (((/* implicit */_Bool) (short)-23710))));
                            var_55 = ((/* implicit */long long int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_1] [i_1] [i_1] [i_1]))) ^ (14450869953342843546ULL))));
                            var_56 = ((/* implicit */unsigned int) var_3);
                            var_57 = ((/* implicit */_Bool) max((var_57), (((/* implicit */_Bool) ((unsigned short) var_3)))));
                        }
                    } 
                } 
                var_58 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_1] [i_1])) ? (((/* implicit */int) arr_30 [i_1] [i_1])) : (((/* implicit */int) arr_30 [i_1] [i_1]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_24 = 0; i_24 < 10; i_24 += 4) /* same iter space */
                {
                    var_59 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-7495))));
                    var_60 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_39 [i_1] [i_24] [i_20] [i_17] [i_24])) : (((/* implicit */int) arr_39 [i_1] [i_17] [i_17] [i_20] [i_24]))));
                }
                for (unsigned long long int i_25 = 0; i_25 < 10; i_25 += 4) /* same iter space */
                {
                    arr_87 [i_1] [i_1] [(short)6] [(short)6] [i_25] = ((/* implicit */_Bool) var_9);
                    var_61 = ((/* implicit */_Bool) (-(arr_16 [i_1] [i_17] [i_20] [i_20] [i_25] [i_25])));
                }
            }
            for (short i_26 = 2; i_26 < 9; i_26 += 3) 
            {
                var_62 = ((/* implicit */unsigned char) min((var_62), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_11 [i_1] [i_17] [i_26 - 2])))))));
                var_63 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_49 [i_26] [i_26 - 1] [i_26 - 1] [i_1] [i_26 - 1] [i_26 - 1]) : (arr_49 [i_26 + 1] [i_26 + 1] [i_26 + 1] [i_1] [i_26] [i_26 + 1])));
            }
            /* LoopSeq 2 */
            for (unsigned char i_27 = 0; i_27 < 10; i_27 += 3) 
            {
                var_64 = ((unsigned int) ((_Bool) (_Bool)1));
                var_65 = ((/* implicit */int) arr_18 [(_Bool)1] [i_1] [i_27] [i_17] [(_Bool)1] [i_1] [i_27]);
                var_66 &= ((/* implicit */short) ((((/* implicit */_Bool) -4500250678581151841LL)) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (1725106586U))))));
            }
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                arr_99 [i_1] [i_17] [i_1] &= ((/* implicit */unsigned long long int) (unsigned char)163);
                var_67 = ((short) (-(var_9)));
            }
        }
        var_68 = ((/* implicit */long long int) ((arr_74 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_1] [i_1] [i_1] [i_1] [i_1])))));
        arr_100 [(unsigned short)6] [i_1] = ((/* implicit */_Bool) ((((_Bool) var_0)) ? ((+(((/* implicit */int) arr_76 [i_1] [(short)9] [i_1] [(unsigned short)5] [i_1] [i_1])))) : (((/* implicit */int) ((3500137210022764278LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41798))))))));
    }
    var_69 ^= ((/* implicit */short) ((int) ((unsigned int) var_8)));
    var_70 = ((/* implicit */unsigned int) var_13);
}
