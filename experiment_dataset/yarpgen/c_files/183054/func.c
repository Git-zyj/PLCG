/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183054
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_18 -= ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((((/* implicit */int) var_14)), (-621246796)))) ? (((/* implicit */int) min((var_13), (((/* implicit */unsigned short) (unsigned char)4))))) : (arr_1 [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
        arr_3 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) (short)7218)), (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (((/* implicit */int) (unsigned short)37063))))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (long long int i_4 = 4; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_3] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_10 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */int) arr_5 [i_1] [i_3])) - (((/* implicit */int) (short)11274)))) : ((~(((/* implicit */int) var_4)))))));
                                arr_15 [i_0] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((arr_10 [i_4] [i_1]), (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_4]))))) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_2] [i_4 + 1])) : (((((/* implicit */int) var_3)) * (((/* implicit */int) var_3)))))) & (arr_8 [i_0] [i_1] [i_2] [i_3] [i_4])));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) (short)-31387))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1 + 2] [i_2] [i_2] [i_3] [i_4 - 4])))))));
                                arr_16 [i_1] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_14)), (((((long long int) var_2)) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-31394))))))))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((/* implicit */int) arr_4 [i_3] [i_2] [i_0])), ((+(((((/* implicit */int) (short)31399)) * (((/* implicit */int) var_4)))))))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((unsigned short) (short)-31394))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-32400)), (var_17)))))), ((!(((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (arr_13 [i_0] [i_1] [i_2] [i_0] [i_2]))))))));
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_21 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 3; i_6 < 8; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            {
                                var_22 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) var_11)) + (2147483647))) >> (((((((/* implicit */int) var_0)) << (((((/* implicit */int) var_11)) + (89))))) - (9306104)))));
                                arr_32 [i_5] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) + (2147483647))) << (((arr_31 [i_6] [i_6] [i_6] [i_6 + 3] [i_8]) - (2488526421608604343ULL)))))) ? (min((arr_31 [i_6] [i_6] [i_6] [i_6 - 3] [i_7]), (1281829096778197247ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_5] [i_5] [i_5] [i_6 - 1] [i_7]))))))));
                                var_23 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_6 + 4] [i_6])) ? (((/* implicit */int) arr_20 [i_6 + 4] [i_6])) : (var_1)))), (((arr_10 [i_5] [i_6 - 3]) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                            }
                        } 
                    } 
                    arr_33 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */long long int) var_2);
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
                    {
                        arr_38 [i_6] [i_7] [i_10] &= (+(min((min((((/* implicit */int) arr_18 [i_10])), (var_1))), (var_10))));
                        /* LoopSeq 3 */
                        for (long long int i_11 = 1; i_11 < 9; i_11 += 4) 
                        {
                            arr_42 [i_11] [i_10] [i_7] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) var_15)))) ? (((/* implicit */int) arr_22 [i_10])) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-31376)), ((unsigned short)8192)))) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) var_6))))))));
                            var_24 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((-989351537) - (((/* implicit */int) var_5))))))) * (((((/* implicit */_Bool) ((unsigned short) arr_22 [i_6]))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_6)))))))));
                            var_25 = ((/* implicit */unsigned long long int) 3182898041U);
                            var_26 = ((/* implicit */int) min((((((/* implicit */_Bool) (short)-2424)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), ((short)31397))))) : (1281829096778197244ULL))), (((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned long long int) (+(arr_10 [i_5] [i_11])))) : (min((arr_31 [i_5] [i_6] [i_7] [i_10] [i_11]), (((/* implicit */unsigned long long int) (short)13263))))))));
                        }
                        for (int i_12 = 2; i_12 < 8; i_12 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_5] [i_5] [i_5] [i_6] [i_7] [i_10] [i_12]))))), (max((((/* implicit */int) (signed char)71)), ((-(((/* implicit */int) (short)0)))))))))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((unsigned int) max((((/* implicit */int) arr_44 [i_5] [i_5] [i_5])), (((((/* implicit */_Bool) 2539010983U)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) arr_5 [i_6] [i_7]))))))))));
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((var_15) ? (((/* implicit */int) (short)-32409)) : (((/* implicit */int) var_5))))))))))));
                            var_30 = var_4;
                            arr_45 [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_1 [i_7]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-31544)))))))) : ((+(((/* implicit */int) (signed char)-44))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) 
                        {
                            arr_48 [i_5] [i_6] [i_7] [i_10] [i_10] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_6] [i_13] [i_7])) - (((/* implicit */int) var_13))))) ? (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_17))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28477)))));
                            var_31 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6] [i_6] [i_6]))));
                        }
                    }
                    for (unsigned int i_14 = 0; i_14 < 12; i_14 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_15 = 2; i_15 < 9; i_15 += 4) 
                        {
                            var_32 += ((/* implicit */unsigned char) ((signed char) var_12));
                            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
                        }
                        for (unsigned int i_16 = 3; i_16 < 11; i_16 += 3) 
                        {
                            var_34 = ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_5 [i_5] [i_5]))) * (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_7] [i_14] [i_16])), (var_5))))));
                            arr_58 [i_5] [i_6] [i_7] [i_14] [i_16] = ((/* implicit */unsigned char) max((max((((long long int) var_2)), (((/* implicit */long long int) ((((/* implicit */int) (short)-31403)) >= (var_10)))))), (((/* implicit */long long int) min((arr_53 [i_6 - 2] [i_16 + 1]), (((/* implicit */unsigned int) min((-1533957228), (var_8)))))))));
                        }
                        arr_59 [i_6] = ((/* implicit */unsigned int) -1533957228);
                        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) min((((/* implicit */int) var_0)), (((var_10) << ((+(((/* implicit */int) arr_35 [i_5] [i_6] [i_7] [i_14])))))))))));
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) 2113929216)), (1281829096778197244ULL)))))) ? ((+(max((((/* implicit */int) var_3)), (arr_1 [i_7]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32420))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_0))))))))));
                    }
                    for (signed char i_17 = 3; i_17 < 9; i_17 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_18 = 0; i_18 < 12; i_18 += 4) 
                        {
                            arr_67 [i_5] [i_6] [i_7] [i_17] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)134)) ? (var_16) : (((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned short)65521)))) & (((/* implicit */int) arr_57 [i_5] [i_5])))))));
                            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) max((((/* implicit */unsigned char) var_15)), ((unsigned char)134)))))) : ((+(((/* implicit */int) arr_25 [i_17 - 2] [i_6 + 4] [i_6 + 2] [i_6 + 4]))))));
                            arr_68 [i_5] [i_6] [i_7] [i_17] [i_18] = ((/* implicit */short) ((((/* implicit */int) (short)31383)) == ((-(((/* implicit */int) min((var_0), (((/* implicit */unsigned char) arr_37 [i_18] [i_17] [i_7] [i_6])))))))));
                        }
                        var_38 = ((/* implicit */int) 6856592081301428907LL);
                        var_39 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_41 [i_5] [i_5] [i_6] [i_7] [i_7] [i_7] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))))) ? (-1084835335892425085LL) : (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_63 [i_17] [i_7] [i_6] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_17))), (((/* implicit */unsigned int) ((var_14) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) var_7))))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_19 = 0; i_19 < 12; i_19 += 3) 
                    {
                        for (signed char i_20 = 0; i_20 < 12; i_20 += 3) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned short) min((var_40), ((unsigned short)36136)));
                                arr_75 [i_6] [i_19] [i_5] [i_19] [i_6] = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) (short)32375)))));
                                var_41 = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-56))) : (var_12))), (((/* implicit */unsigned int) arr_5 [i_5] [i_6 + 2]))))) != (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_4))))) ? (max((5508550385214337884LL), (4436513405633375172LL))) : (((/* implicit */long long int) (+(-1328944275))))))));
                                arr_76 [i_5] [i_19] [i_7] [i_19] [i_20] = ((/* implicit */signed char) arr_1 [i_7]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_21 = 0; i_21 < 12; i_21 += 3) 
                    {
                        for (signed char i_22 = 0; i_22 < 12; i_22 += 4) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) min((var_10), (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) arr_8 [i_22] [i_6] [i_7] [i_5] [i_22])) ? (var_16) : (((/* implicit */unsigned int) var_10)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-820948749218960510LL)))))))));
                                arr_82 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) (!((_Bool)1)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((((-794730230793322179LL) % (-345194900451301714LL))) + (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)77)) << (((((/* implicit */int) (unsigned char)161)) - (158)))))))))));
}
