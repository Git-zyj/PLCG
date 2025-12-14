/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16968
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
    var_14 = ((/* implicit */unsigned char) var_5);
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_7))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) max(((~(11U))), (((((/* implicit */_Bool) arr_1 [(unsigned short)9] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (11U)))))) ? (((/* implicit */unsigned int) (~((-(((/* implicit */int) (unsigned char)41))))))) : (max((((/* implicit */unsigned int) (unsigned short)30648)), (4294967289U)))));
        /* LoopSeq 3 */
        for (short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_2)))) * ((-(((/* implicit */int) arr_2 [i_1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) (signed char)29)))))) <= (((4294967289U) / (4294967289U))))))) : (var_12)));
            var_17 = ((/* implicit */short) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_0))));
            /* LoopSeq 2 */
            for (short i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                arr_7 [i_1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) arr_1 [i_0 + 3] [i_1 - 2]);
                arr_8 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned char) ((((0) * (((/* implicit */int) (_Bool)1)))) + ((((_Bool)1) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_0 - 2] [i_0] [i_0] [i_0 + 2])), (var_0)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_1]))))))));
                var_18 = max((((((/* implicit */int) arr_6 [i_2 + 2] [i_2 + 1] [i_1 - 1] [i_0 - 1])) * (((((/* implicit */_Bool) (unsigned short)60808)) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_2])) : (((/* implicit */int) (short)32767)))))), ((+(((/* implicit */int) var_13)))));
                var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-720))));
                arr_9 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_2])) + ((+(((/* implicit */int) var_7))))))) ? (((/* implicit */int) arr_2 [i_1])) : ((~(((/* implicit */int) var_13))))));
            }
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                arr_12 [i_3] [i_1] [i_1] [i_0] = (~(4294967285U));
                var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_6 [(_Bool)1] [i_1 + 1] [i_1 - 1] [i_3 - 1])) + (arr_0 [i_3 - 1])))) + ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_3 - 1]))) : (var_6)))));
            }
            var_21 |= ((/* implicit */unsigned int) (unsigned short)11445);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_4 = 2; i_4 < 16; i_4 += 3) 
            {
                var_22 = ((/* implicit */unsigned short) var_8);
                var_23 = ((/* implicit */_Bool) ((short) arr_14 [i_0 - 2] [13]));
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_4 - 2] [i_4 - 2])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))));
                    arr_17 [(unsigned short)11] [i_1] [i_5] [i_4] [i_1] = ((/* implicit */_Bool) arr_13 [i_1]);
                }
                for (long long int i_6 = 4; i_6 < 17; i_6 += 3) 
                {
                    arr_21 [i_1] [i_1 - 2] [i_1 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))))) ? (((0LL) << (((((/* implicit */int) (unsigned char)215)) - (156))))) : (((/* implicit */long long int) ((-11) / (arr_19 [i_0] [i_0] [i_1 + 1] [i_1 + 1] [i_4 + 1] [i_4 + 1]))))));
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1]))));
                }
            }
        }
        for (unsigned int i_7 = 1; i_7 < 17; i_7 += 4) 
        {
            arr_26 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)159))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_7 - 1] [i_7 - 1]))))) : (((((/* implicit */_Bool) arr_24 [i_0] [i_0] [(unsigned char)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))) : (var_12))))) : (((/* implicit */unsigned int) (+((+(((/* implicit */int) (signed char)-2)))))))));
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (+(((-190805521) / (((/* implicit */int) (unsigned char)255)))))))));
            var_27 = ((/* implicit */unsigned short) (unsigned char)41);
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_13 [i_0 + 1]) / (arr_13 [i_0 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)237)))) : (((((/* implicit */_Bool) var_3)) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
        }
        for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            arr_30 [i_0 + 2] [i_8] = ((/* implicit */_Bool) var_8);
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 1; i_10 < 17; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (26U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))))) && (((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)0)))))))))))));
                            var_30 = (((!(((/* implicit */_Bool) var_6)))) ? (max(((~(3145728LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)180)) | (((/* implicit */int) arr_6 [(unsigned char)9] [i_8] [i_9] [(unsigned char)9]))))))) : (((/* implicit */long long int) (-(((33554431) & (560275734)))))));
                            arr_37 [(short)7] [i_8] [i_9] [i_10] = ((/* implicit */unsigned short) max((524272LL), (((/* implicit */long long int) (short)26155))));
                        }
                    } 
                } 
                var_31 = ((((/* implicit */_Bool) ((arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (((/* implicit */int) (unsigned short)65535)) : (arr_0 [i_0 - 1])))) ? (((/* implicit */int) ((signed char) arr_0 [i_0 + 1]))) : (((/* implicit */int) arr_3 [i_0 - 1] [i_8] [i_0 - 1])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_12 = 0; i_12 < 18; i_12 += 4) 
                {
                    arr_40 [i_8] [i_9] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_12] [i_9] [i_8] [13LL] [13LL])) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
                    arr_41 [i_0] [i_8] [i_8] [i_12] = ((/* implicit */long long int) (unsigned short)0);
                }
                /* LoopSeq 1 */
                for (long long int i_13 = 1; i_13 < 15; i_13 += 1) 
                {
                    arr_44 [(unsigned short)4] [(short)4] [i_9] [i_8] [i_9] [i_9] = ((/* implicit */unsigned short) var_4);
                    /* LoopSeq 1 */
                    for (signed char i_14 = 1; i_14 < 14; i_14 += 4) 
                    {
                        arr_48 [i_8] = ((unsigned short) ((((/* implicit */_Bool) arr_47 [i_14 + 3] [i_14 + 1] [i_13 - 1] [i_0 - 2])) || (((/* implicit */_Bool) arr_45 [i_0 + 1]))));
                        arr_49 [i_8] [i_13 + 2] [i_9] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)9))))) << (((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (366187851U))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_8] [i_9] [i_13]))) | (366187865U))))) - (65512U)))));
                    }
                    var_32 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_13 - 1] [i_8] [i_0])) < (((/* implicit */int) (signed char)69))))) >= (((/* implicit */int) max((((/* implicit */short) (unsigned char)232)), (arr_3 [i_13 - 1] [i_8] [i_0]))))));
                    arr_50 [i_8] [5] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_19 [i_13 + 2] [i_13 + 2] [i_13] [i_13 + 1] [i_0 + 1] [i_0]) : (arr_19 [i_13 + 1] [i_13 + 2] [i_13 + 2] [i_13 + 1] [i_0 - 2] [i_0])))) ? (var_12) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)58512)))))));
                }
            }
            var_33 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) + (((/* implicit */int) var_4))))));
            var_34 = ((/* implicit */unsigned char) arr_46 [i_0] [i_0] [i_8]);
            var_35 = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) arr_14 [i_0 - 2] [i_0 - 2])), (var_1)))));
        }
    }
    for (unsigned short i_15 = 0; i_15 < 14; i_15 += 4) 
    {
        arr_55 [i_15] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(9223372036854775803LL))))));
        arr_56 [i_15] = (short)16368;
        var_36 = ((/* implicit */long long int) (unsigned short)7);
    }
    for (unsigned char i_16 = 2; i_16 < 20; i_16 += 3) 
    {
        var_37 = ((/* implicit */short) max(((~((-(var_1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)180)) ? ((+(((/* implicit */int) (unsigned short)65521)))) : (((((/* implicit */_Bool) (short)22018)) ? (((/* implicit */int) arr_58 [i_16])) : (((/* implicit */int) (short)28672)))))))));
        /* LoopNest 3 */
        for (unsigned short i_17 = 2; i_17 < 18; i_17 += 1) 
        {
            for (unsigned short i_18 = 1; i_18 < 21; i_18 += 3) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_20 = 0; i_20 < 22; i_20 += 4) 
                        {
                            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) (~((-((~(((/* implicit */int) (unsigned short)65535)))))))))));
                            var_39 = ((/* implicit */int) ((((((var_5) + (9223372036854775807LL))) >> (((((/* implicit */int) var_9)) - (56829))))) >> (((max((((arr_59 [i_19]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) << (((((/* implicit */int) var_0)) - (41203)))))))) - (2147450833U)))));
                        }
                        for (unsigned int i_21 = 2; i_21 < 21; i_21 += 1) 
                        {
                            var_40 += ((/* implicit */int) ((((/* implicit */int) (short)-11506)) <= (((/* implicit */int) (unsigned char)63))));
                            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((short) (unsigned short)65529)))));
                            var_42 = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) (+(3928779445U)))))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            arr_76 [i_16] [(short)20] [i_16] [i_18 - 1] [i_19] [i_16] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_68 [(short)20] [i_19] [i_18] [i_17] [(short)20])) ? (((/* implicit */long long int) var_1)) : (arr_60 [i_16] [i_16]))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28))))))));
                            var_43 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) arr_74 [i_16 - 1] [i_16 - 2] [i_17 + 1] [i_16 - 2] [(unsigned char)12])) : (((/* implicit */int) arr_74 [(signed char)10] [i_16 + 2] [i_17 + 1] [(signed char)10] [(signed char)10]))))), (((366187871U) & (4294967295U)))));
                            arr_77 [i_22] [i_22] [i_16] [(unsigned char)9] [i_16] [(unsigned char)9] [(unsigned char)9] = ((/* implicit */unsigned short) 3928779450U);
                            var_44 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_65 [i_16 - 1]))))));
                        }
                        var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) arr_70 [i_18 + 1] [i_18 + 1] [i_16 + 1] [(short)10] [i_19]))))) ? (((/* implicit */long long int) var_8)) : (var_5))))));
                    }
                } 
            } 
        } 
    }
}
