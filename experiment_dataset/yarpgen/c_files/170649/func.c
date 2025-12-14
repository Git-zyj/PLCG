/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170649
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [14U] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                    arr_7 [i_0] [i_1] [2ULL] [i_2] = ((/* implicit */unsigned int) arr_0 [i_0]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) ((long long int) 11162865201490693175ULL));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (short i_6 = 1; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) arr_14 [i_5] [i_4]);
                                var_14 = ((/* implicit */signed char) (short)-6074);
                                arr_18 [i_0] [i_3] [i_4] [i_5] [i_6] &= ((/* implicit */signed char) ((7283878872218858442ULL) * (((/* implicit */unsigned long long int) arr_15 [i_0] [(unsigned char)4] [(unsigned char)4] [i_6 + 1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_0] [3ULL] [i_3] [i_3] [i_3] [i_7] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                            var_16 = ((/* implicit */unsigned long long int) var_0);
                            var_17 = ((/* implicit */unsigned int) var_5);
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((short) (signed char)125)))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-8411)))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned char) arr_14 [i_3] [i_10])))));
                            arr_27 [i_0] [i_0] [6ULL] [i_0] [i_7] [i_7] [i_10] |= ((/* implicit */signed char) ((unsigned char) (short)17261));
                        }
                        var_21 = ((/* implicit */_Bool) var_9);
                        /* LoopSeq 2 */
                        for (int i_11 = 0; i_11 < 18; i_11 += 1) 
                        {
                            var_22 -= ((/* implicit */unsigned char) var_3);
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1))))))));
                            var_24 = ((/* implicit */unsigned short) (short)8398);
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (+(-1407506268))))));
                        }
                        for (signed char i_12 = 0; i_12 < 18; i_12 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) -8943504588074586825LL);
                            arr_33 [8LL] [i_3] [8LL] [i_7] [i_12] = ((/* implicit */_Bool) var_11);
                        }
                    }
                    for (unsigned short i_13 = 3; i_13 < 14; i_13 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned short) (~(10044389760894523899ULL)));
                        var_28 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)32748))) / (arr_14 [i_0] [i_0])));
                        var_29 = ((/* implicit */unsigned short) (short)-32755);
                    }
                    for (unsigned short i_14 = 3; i_14 < 14; i_14 += 1) /* same iter space */
                    {
                        arr_38 [i_14] &= ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_30 [i_0] [i_3] [i_3] [i_4] [i_0])))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (signed char)-117))));
                    }
                    var_31 &= ((/* implicit */unsigned short) ((signed char) arr_37 [i_0] [i_3] [i_3] [i_4] [i_3]));
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 18; i_15 += 2) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 18; i_16 += 1) 
                        {
                            {
                                arr_44 [i_0] [i_3] [i_4] [2LL] [i_15] [i_16] [(unsigned short)15] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 7283878872218858429ULL)))) <= (arr_11 [i_16] [i_3] [i_0])));
                                var_32 |= ((/* implicit */unsigned short) (short)3513);
                                var_33 = ((/* implicit */short) var_11);
                                var_34 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32757))) * (var_1)));
                                arr_45 [i_0] [i_3] [i_4] [i_4] [i_15] [i_16] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_16] [i_3] [(_Bool)1] [(_Bool)1] [i_16]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_17 = 0; i_17 < 18; i_17 += 4) 
        {
            for (signed char i_18 = 0; i_18 < 18; i_18 += 4) 
            {
                {
                    var_35 = ((/* implicit */unsigned short) arr_34 [i_0] [i_17] [i_18] [i_17] [i_18] [i_18]);
                    var_36 = ((/* implicit */long long int) (~(arr_19 [i_18])));
                    var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((short) (~(((/* implicit */int) var_4))))))));
                }
            } 
        } 
    }
    for (signed char i_19 = 0; i_19 < 18; i_19 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 3) 
        {
            for (short i_21 = 0; i_21 < 18; i_21 += 4) 
            {
                {
                    arr_57 [i_19] [i_20] [i_21] |= ((/* implicit */int) var_4);
                    /* LoopNest 2 */
                    for (short i_22 = 0; i_22 < 18; i_22 += 1) 
                    {
                        for (long long int i_23 = 0; i_23 < 18; i_23 += 4) 
                        {
                            {
                                arr_63 [i_19] [i_20] [i_21] [i_22] [i_19] = ((/* implicit */short) ((unsigned short) (signed char)24));
                                var_38 = ((/* implicit */signed char) max((((/* implicit */long long int) (-(((/* implicit */int) var_8))))), (((((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (2340758326U)))) ^ (-7993308506594473881LL)))));
                                arr_64 [i_23] [6ULL] [i_21] [i_21] [i_21] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (short)4598))) < (((/* implicit */int) max((var_3), (((/* implicit */short) (unsigned char)54)))))))), (min(((unsigned char)45), (arr_48 [i_19] [i_19] [i_21] [i_22])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_24 = 0; i_24 < 18; i_24 += 2) 
                    {
                        arr_68 [i_19] [i_21] [i_20] [i_19] = ((/* implicit */unsigned char) max((min((((unsigned long long int) (unsigned short)65531)), (((/* implicit */unsigned long long int) max(((short)-6807), (((/* implicit */short) (signed char)-5))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)122)))))));
                        var_39 &= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) % (((/* implicit */int) (signed char)74))))), ((~(var_1))))) - ((-(var_1)))));
                    }
                    for (short i_25 = 4; i_25 < 16; i_25 += 4) 
                    {
                        arr_71 [i_19] [i_20] [i_21] [i_19] = ((/* implicit */unsigned int) var_6);
                        var_40 |= ((/* implicit */short) (signed char)-118);
                        var_41 = ((/* implicit */_Bool) max((3288239393984124171ULL), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))))))))));
                    }
                    var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)68))))))))));
                }
            } 
        } 
        arr_72 [(signed char)6] |= ((/* implicit */short) -31LL);
        /* LoopSeq 1 */
        for (short i_26 = 0; i_26 < 18; i_26 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_27 = 0; i_27 < 18; i_27 += 2) 
            {
                for (short i_28 = 0; i_28 < 18; i_28 += 2) 
                {
                    {
                        var_43 = ((/* implicit */unsigned long long int) ((min((max((8287576569485176297LL), (((/* implicit */long long int) (signed char)-61)))), (((/* implicit */long long int) 4294967271U)))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_62 [i_26] [i_27] [i_28])) || (((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))))))));
                        arr_80 [i_19] [(short)1] [i_19] [(short)2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((short) arr_75 [i_27] [i_27] [i_26] [i_19])), (((/* implicit */short) (!(((/* implicit */_Bool) arr_21 [(signed char)0] [i_19] [i_26] [i_27] [i_27] [i_28] [i_27]))))))))));
                        arr_81 [i_19] = ((/* implicit */int) (+(4180621590998239621ULL)));
                        arr_82 [i_19] = ((/* implicit */unsigned int) (short)0);
                    }
                } 
            } 
            arr_83 [i_19] [i_26] [i_19] = (-(((/* implicit */int) ((signed char) (~(((/* implicit */int) (short)4307)))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) 
            {
                arr_86 [i_19] [i_19] [i_29] [i_19] = ((signed char) var_5);
                arr_87 [i_26] [(short)8] [i_26] &= ((/* implicit */long long int) (+((-(arr_41 [i_26] [i_26] [i_26] [i_19] [i_26])))));
            }
            for (signed char i_30 = 0; i_30 < 18; i_30 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_31 = 0; i_31 < 18; i_31 += 3) 
                {
                    for (unsigned char i_32 = 1; i_32 < 16; i_32 += 2) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned char) ((-4152308324995566226LL) != (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (signed char)126)) / (((/* implicit */int) var_8)))) >= (((/* implicit */int) arr_84 [i_31] [i_30] [i_26] [i_19]))))))));
                            var_45 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) min((((/* implicit */unsigned char) arr_47 [i_26])), (arr_61 [i_19] [i_26] [i_31])))) / (((/* implicit */int) var_11)))), ((~(((((/* implicit */int) arr_79 [i_32] [i_19] [i_19] [12U])) % (((/* implicit */int) (unsigned char)84))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
                {
                    var_46 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)47813))))), (6932127581717812030ULL)));
                    var_47 = ((/* implicit */unsigned int) arr_91 [i_19] [i_26] [16U] [i_33 - 1] [i_33]);
                }
                var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)34))))) || (((/* implicit */_Bool) (-(-360157321))))));
            }
            for (signed char i_34 = 0; i_34 < 18; i_34 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_35 = 0; i_35 < 18; i_35 += 2) 
                {
                    for (short i_36 = 0; i_36 < 18; i_36 += 3) 
                    {
                        {
                            arr_107 [i_26] [i_19] = ((/* implicit */signed char) (-(((/* implicit */int) min((var_8), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)1329)) && (((/* implicit */_Bool) (unsigned short)43082))))))))));
                            var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) min((((/* implicit */short) min((arr_0 [i_34]), (arr_0 [i_36])))), (((short) arr_0 [i_36])))))));
                            arr_108 [i_19] [i_26] [i_34] [i_36] = ((/* implicit */unsigned char) var_11);
                            var_50 &= var_3;
                        }
                    } 
                } 
                arr_109 [1ULL] [1ULL] [i_19] = ((/* implicit */_Bool) min((min((((/* implicit */int) (unsigned char)179)), (arr_13 [i_19] [i_19] [i_26] [i_34]))), (((arr_13 [i_19] [i_26] [i_34] [i_34]) | (arr_13 [i_19] [i_19] [i_34] [14LL])))));
            }
        }
    }
    var_51 = ((/* implicit */unsigned char) var_11);
}
