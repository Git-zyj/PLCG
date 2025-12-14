/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154962
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
    var_14 = ((/* implicit */int) min((var_14), ((+(var_12)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((int) var_9))) ? ((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))))));
                    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-10635)) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-11347)) : (((/* implicit */int) (signed char)-42)))))))), (max((max((((/* implicit */unsigned short) var_4)), (var_10))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [3ULL] [i_1] [i_2] [i_2])) || (((/* implicit */_Bool) (signed char)104)))))))));
                    var_16 = ((/* implicit */int) arr_4 [i_0] [i_0] [6]);
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) var_5)) : (53167787)))) ? (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */int) var_4)))) : (((/* implicit */int) max((var_10), (var_10)))))), (((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_4))))));
    }
    for (short i_3 = 4; i_3 < 14; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_5)), ((-(((/* implicit */int) var_7))))))) ? (((((/* implicit */int) ((short) var_1))) * (((/* implicit */int) var_3)))) : ((((!(((/* implicit */_Bool) (signed char)104)))) ? (((((/* implicit */int) (signed char)99)) * (((/* implicit */int) (short)10609)))) : (((/* implicit */int) (signed char)41))))));
        arr_13 [i_3] = ((/* implicit */signed char) var_12);
    }
    var_17 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (unsigned int i_4 = 1; i_4 < 23; i_4 += 2) 
    {
        for (unsigned int i_5 = 1; i_5 < 22; i_5 += 1) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    arr_22 [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)100))))) ? (((/* implicit */int) (signed char)100)) : (1987235042)));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 3; i_8 < 24; i_8 += 1) 
                        {
                            {
                                arr_30 [(short)8] [i_5] [i_5] [i_5] [i_6] [i_5 + 1] [(unsigned short)10] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) (unsigned short)25808)) * (((/* implicit */int) arr_24 [i_4])))));
                                arr_31 [(short)3] [i_7] [i_6] [i_5 + 2] [i_4] = ((arr_20 [i_8 + 1] [i_8 - 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5 + 2] [i_4 - 1]))));
                                arr_32 [(short)20] [i_5] [i_6] [i_7] [i_8 + 1] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (var_13)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((_Bool) var_5)))));
                                arr_38 [i_4] [i_5] [i_6] = (unsigned short)56622;
                            }
                        } 
                    } 
                    arr_39 [i_4 - 1] [i_5] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_11))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_42 [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (arr_36 [i_11] [i_11] [i_5] [i_5 + 1] [i_5] [i_5 + 2] [i_5]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) / (var_12))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 3; i_12 < 24; i_12 += 1) 
                    {
                        var_19 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-41))));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        var_21 = ((/* implicit */signed char) arr_41 [i_12]);
                    }
                }
                for (unsigned char i_13 = 3; i_13 < 21; i_13 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                arr_52 [i_15] [7U] [i_5] [i_13] [i_5] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)100)) * (((/* implicit */int) (signed char)42))));
                                arr_53 [i_4] [22ULL] [i_5] [i_5] [i_13] [i_14] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (min((((/* implicit */unsigned short) (signed char)-42)), (var_9)))))) ? (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) arr_15 [i_4] [i_4 - 1])))) | (((/* implicit */int) (unsigned short)22326)))) : (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (unsigned char)1)))))));
                                arr_54 [16ULL] [i_5] [i_5] [i_5] [i_15] = ((/* implicit */signed char) 3151320901766118404ULL);
                                var_22 = ((/* implicit */unsigned short) (signed char)-47);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 25; i_16 += 4) 
                    {
                        for (int i_17 = 4; i_17 < 23; i_17 += 3) 
                        {
                            {
                                var_23 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_28 [i_17] [i_17 + 1] [i_17] [i_17] [3LL])) : (((/* implicit */int) var_5)))) * (((((/* implicit */int) var_2)) - (((/* implicit */int) arr_28 [i_17] [i_17 - 4] [(signed char)10] [i_17] [i_17 - 4]))))));
                                var_24 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 1987235042)) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (unsigned char)198)) ? (-1987235038) : (((/* implicit */int) (unsigned char)198))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_18 = 3; i_18 < 24; i_18 += 1) 
                    {
                        for (int i_19 = 1; i_19 < 24; i_19 += 1) 
                        {
                            {
                                arr_66 [i_18] [i_13] [(_Bool)1] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [i_4 + 2] [i_5 + 2] [i_13] [i_19 - 1] [20ULL])))))));
                                arr_67 [i_4 - 1] [i_5 + 2] [i_13 - 2] [i_18] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) | (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) var_7))))));
                                arr_68 [i_4] [i_4] [i_4 + 1] [(_Bool)1] [i_4] = ((/* implicit */short) ((unsigned short) (unsigned short)5));
                                var_25 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) var_7)))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_20 = 3; i_20 < 24; i_20 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (unsigned int i_22 = 0; i_22 < 25; i_22 += 3) 
                        {
                            {
                                arr_77 [i_4] [i_5 + 2] [i_4] [i_21] [i_4] [i_20] [i_20] = ((/* implicit */unsigned long long int) var_7);
                                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */unsigned int) arr_72 [i_4 - 1] [(_Bool)1] [24ULL] [i_21] [i_22])))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)36))))))) | (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-30))))))))))));
                                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) var_11)) | (((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)9)))) << (((((/* implicit */int) arr_61 [i_4] [i_21])) + (17539))))))))));
                                arr_78 [i_4] [i_20] [i_20] [i_21] [(signed char)4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((min((4294967295U), (4294967295U))) | (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4186112)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (short)-21368)))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_41 [i_4 + 2])) : (((/* implicit */int) arr_48 [i_20] [i_20])))))))));
                                arr_79 [i_4] [(signed char)9] [i_20] [i_21] [i_22] [i_20] = ((/* implicit */unsigned char) ((((min((-2985289898688032085LL), (((/* implicit */long long int) var_10)))) | (((/* implicit */long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) (signed char)39))))))) | (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_23 = 0; i_23 < 25; i_23 += 2) 
                    {
                        for (long long int i_24 = 0; i_24 < 25; i_24 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (signed char)-104)))) * (((((/* implicit */int) arr_76 [i_5 - 1] [i_4 - 1])) * (((/* implicit */int) (_Bool)1))))));
                                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) var_3))));
                                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_69 [i_4 + 1] [i_5] [i_24])), (var_10))))))))))));
                            }
                        } 
                    } 
                }
                var_31 = ((/* implicit */unsigned char) min((((/* implicit */int) var_10)), ((~(((/* implicit */int) arr_69 [i_4] [i_5 + 3] [20LL]))))));
                var_32 = ((/* implicit */unsigned short) max((((/* implicit */int) var_6)), ((-(((var_12) | (((/* implicit */int) var_7))))))));
            }
        } 
    } 
    var_33 = var_5;
}
