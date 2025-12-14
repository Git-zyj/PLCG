/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127781
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
    var_11 = ((/* implicit */int) var_9);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)121)) ? (arr_6 [i_2 + 2] [i_2] [i_2 + 3] [i_2 - 3]) : (arr_6 [i_2 - 2] [i_2] [i_2 + 2] [i_2 - 2])))));
                    var_12 = ((/* implicit */unsigned char) (((~(18446744073709551612ULL))) / (((/* implicit */unsigned long long int) min((var_6), (arr_4 [i_2 - 1] [i_0] [(short)13]))))));
                    var_13 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) ? (arr_6 [i_1] [i_1] [i_1] [i_1]) : (18446744073709551605ULL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) : (2826855092U)))), (var_10)));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */int) var_7);
                        var_15 *= ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (((_Bool)0) || (((/* implicit */_Bool) arr_6 [i_3] [i_0] [i_0] [i_0]))))))));
                        var_16 = ((/* implicit */signed char) var_5);
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */int) ((unsigned int) ((2826855080U) << (((((/* implicit */int) arr_3 [i_0] [i_4] [i_5 - 1])) - (134))))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_9 [i_2] [i_2] [i_2] [i_2 - 2]) : (((/* implicit */unsigned long long int) 2970274951355913780LL))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_6 [i_2 + 3] [i_2 - 2] [i_2 - 3] [i_2 - 2]))))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [10LL] [10LL] = ((/* implicit */_Bool) 14U);
                        }
                        arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_2 - 2] [i_2 + 2] [i_2 - 2]);
                    }
                    for (short i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((var_10), (((8333852393757675093LL) & (((/* implicit */long long int) ((/* implicit */int) (short)17364))))))))));
                            arr_26 [i_1] [i_1] [i_1] [i_0] [i_8] [i_1] = ((/* implicit */_Bool) max((((max((((/* implicit */int) (short)22066)), (var_1))) * (((/* implicit */int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (((/* implicit */int) arr_16 [i_0] [(short)9] [i_1] [i_0] [i_1] [i_7] [i_8]))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_30 [i_0] [i_1] [i_2] [i_1] [i_0] [i_9] [(unsigned char)24] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) arr_21 [i_0] [i_7] [i_1] [i_0]))))) ? (((/* implicit */long long int) arr_28 [i_1] [i_2 - 2] [i_2 - 2] [i_2 - 3])) : (var_9)))));
                            arr_31 [i_0] [(signed char)14] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2970274951355913780LL)) ? (((/* implicit */int) (short)22074)) : (((int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)50232))) / (-4735361549168842472LL))))));
                            var_21 = ((/* implicit */unsigned char) ((unsigned int) (+(var_9))));
                            arr_32 [i_1] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (unsigned char)226);
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_22 *= (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(1392377589U))))))));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (-(var_8))))));
                        }
                        var_24 = ((/* implicit */unsigned int) ((_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_11 = 1; i_11 < 23; i_11 += 3) 
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7] [i_1] [i_1] [i_0] [i_11] [i_1] [i_1]))) + (var_6)));
                            var_26 = ((/* implicit */_Bool) min((var_26), (((max((var_5), (((/* implicit */long long int) arr_25 [i_2] [i_2 + 2] [i_2] [11LL] [i_11 + 2])))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)17516)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_25 [i_1] [i_2 + 2] [(short)19] [i_2] [i_11 + 2])))))))));
                        }
                        for (unsigned short i_12 = 2; i_12 < 23; i_12 += 4) 
                        {
                            arr_43 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)122))))), ((unsigned short)0)));
                            var_27 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned short)7)), (-176647048981908757LL)));
                        }
                        for (unsigned short i_13 = 1; i_13 < 24; i_13 += 3) 
                        {
                            var_28 = ((((/* implicit */_Bool) (+((+(var_4)))))) ? (((/* implicit */unsigned long long int) (-(var_5)))) : (((((/* implicit */_Bool) 8900049817758764477ULL)) ? (arr_11 [i_7] [i_13 - 1] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))))));
                            arr_46 [i_2] [i_0] [i_2] [i_0] [(_Bool)1] = ((/* implicit */int) min((3165846368113600754LL), (((/* implicit */long long int) (+(((((/* implicit */int) (unsigned short)3)) / (((/* implicit */int) (unsigned short)65532)))))))));
                            arr_47 [i_0] = ((/* implicit */long long int) 9546694255950787147ULL);
                        }
                    }
                    /* vectorizable */
                    for (short i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) var_5);
                        var_30 = ((/* implicit */int) arr_35 [i_2 - 2] [i_2 - 2] [i_0] [i_0]);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_15 = 4; i_15 < 9; i_15 += 3) 
    {
        /* LoopNest 2 */
        for (short i_16 = 4; i_16 < 10; i_16 += 1) 
        {
            for (unsigned int i_17 = 1; i_17 < 8; i_17 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_18 = 1; i_18 < 9; i_18 += 1) 
                    {
                        for (unsigned int i_19 = 1; i_19 < 8; i_19 += 3) 
                        {
                            {
                                var_31 *= ((/* implicit */unsigned char) -8333852393757675118LL);
                                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((_Bool) 8900049817758764488ULL)))));
                                arr_64 [i_15] [(_Bool)1] [i_15] [i_15] = (short)-31271;
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */long long int) ((((unsigned long long int) ((((/* implicit */_Bool) (short)21572)) ? (16076393675222633769ULL) : (((/* implicit */unsigned long long int) var_1))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-6638))))) || (((/* implicit */_Bool) var_3))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
        {
            for (long long int i_21 = 0; i_21 < 11; i_21 += 3) 
            {
                {
                    var_34 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_29 [i_15 + 1] [i_20 + 1] [i_20] [i_20 + 1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_15 - 1] [i_20 + 1] [6U] [i_20 + 1])) ? (((/* implicit */int) arr_13 [i_15 - 3] [i_20 + 1] [i_20 + 1] [4LL])) : (((/* implicit */int) arr_13 [i_15 - 1] [i_20 + 1] [i_20 + 1] [2U]))))) : ((+(var_3)))));
                    arr_70 [i_15] = ((/* implicit */unsigned char) ((long long int) (signed char)-79));
                    var_35 *= (-((+(((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17542))))))));
                    /* LoopNest 2 */
                    for (short i_22 = 2; i_22 < 10; i_22 += 4) 
                    {
                        for (short i_23 = 0; i_23 < 11; i_23 += 4) 
                        {
                            {
                                arr_75 [i_15] [i_15] [i_15] [i_15] [i_23] [i_23] = ((/* implicit */_Bool) ((unsigned int) (~((-9223372036854775807LL - 1LL)))));
                                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)12606)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)800))));
                                var_37 *= ((/* implicit */_Bool) ((unsigned long long int) ((int) arr_63 [i_15 - 3] [i_15 - 3] [i_15 - 2] [i_20 + 1] [i_22 - 1] [i_23])));
                                var_38 *= ((/* implicit */_Bool) (((-(arr_9 [(_Bool)1] [i_22] [(_Bool)1] [i_15 - 1]))) % (arr_9 [i_15] [i_20] [i_21] [i_23])));
                                var_39 = ((/* implicit */_Bool) (+(((arr_13 [i_15] [i_20 + 1] [i_21] [i_15]) ? (arr_38 [i_15] [i_15] [i_21] [17LL] [i_23]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_15] [i_15] [i_21] [i_15])))))));
                            }
                        } 
                    } 
                    arr_76 [i_15] [i_15] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_6)) : (arr_55 [i_21] [i_20] [i_15])))))) ? (((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */long long int) max((var_1), (1457983769)))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_10) : (((/* implicit */long long int) 894799942)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) arr_52 [i_20 + 1] [i_20] [i_15])) : ((~(-2142486131))))))));
                }
            } 
        } 
        var_40 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((15), (-1457983769)))) ? (((((/* implicit */_Bool) var_5)) ? (var_4) : (9223372036854775801LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15 - 1])))))));
        var_41 *= ((/* implicit */signed char) (+(((((((/* implicit */_Bool) arr_72 [i_15])) || (((/* implicit */_Bool) 17557826306048ULL)))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
        var_42 = ((/* implicit */_Bool) (-(((/* implicit */int) var_0))));
    }
}
