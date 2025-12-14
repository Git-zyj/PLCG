/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186483
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */int) ((unsigned char) min((min((arr_4 [i_0] [i_1]), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) ((arr_1 [i_1] [i_3]) ? (((/* implicit */int) (unsigned short)65514)) : (((/* implicit */int) var_10))))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] &= ((/* implicit */long long int) (short)23);
                            var_13 = ((/* implicit */unsigned long long int) var_0);
                            arr_13 [i_2] [i_2 - 2] [i_1] [i_2] = ((/* implicit */signed char) min((min((arr_7 [i_2 - 2] [i_2 - 1] [i_2 + 1]), (arr_7 [i_2 - 2] [i_2 - 1] [i_2 + 1]))), (((/* implicit */int) var_11))));
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((int) (signed char)-104)) > (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_10 [i_0] [i_1] [i_2 - 3] [i_3]), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_0] [i_3])))))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 4; i_4 < 21; i_4 += 1) 
                {
                    for (short i_5 = 3; i_5 < 21; i_5 += 4) 
                    {
                        for (int i_6 = 1; i_6 < 18; i_6 += 4) 
                        {
                            {
                                arr_21 [i_4] [5U] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((unsigned short) (unsigned char)15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (9147114323390598955ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)117)))))))))) : (min((arr_20 [i_1] [i_4 - 4] [i_1 + 3] [i_5 - 2] [i_1 + 3] [i_5 + 1] [i_6]), (arr_20 [18U] [i_4 + 1] [i_1 + 3] [i_5 + 1] [i_6] [i_5 - 3] [i_6 + 4])))));
                                arr_22 [i_4] [i_4] [i_4] [i_6] = ((/* implicit */signed char) (-((-(arr_20 [i_6] [i_6 - 1] [i_6] [i_6 + 2] [i_6] [i_6 + 2] [i_6 + 1])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (long long int i_8 = 2; i_8 < 19; i_8 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_8 + 3] [i_1 + 3] [i_1 + 2])) ? (((/* implicit */int) arr_5 [i_8 + 1] [i_1 - 2] [i_1 + 3])) : (((/* implicit */int) arr_5 [i_8 - 1] [i_1 - 2] [i_1 + 2]))))), (min((var_1), (((/* implicit */unsigned int) arr_5 [i_8 + 1] [i_1 + 3] [i_1 - 2]))))));
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_23 [i_1 - 2] [i_1 - 2] [i_0])))) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [3U] [(unsigned short)1] [i_7] [i_8 - 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))))))))))));
                            arr_27 [19] [i_1] [i_7] [19] = ((/* implicit */unsigned char) var_11);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_9 = 3; i_9 < 19; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        {
                            arr_32 [i_10] [i_0] [i_1 + 1] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_1] [i_10])))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)3)))))))));
                            arr_33 [i_0] [i_1] [9LL] [i_1] = ((/* implicit */unsigned short) (signed char)103);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_23 [i_0] [i_1 + 1] [i_0])) ? (arr_23 [i_0] [i_1] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (signed char)-31)) : (0))))));
                            var_18 &= ((/* implicit */long long int) (-((~(((/* implicit */int) (signed char)-37))))));
                            arr_41 [i_0] [i_1] [i_1] [i_11] [(signed char)20] [i_1] = ((/* implicit */unsigned int) (-(2147483647)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_13 = 0; i_13 < 22; i_13 += 3) 
    {
        for (unsigned int i_14 = 0; i_14 < 22; i_14 += 3) 
        {
            for (signed char i_15 = 3; i_15 < 21; i_15 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 1) 
                    {
                        for (long long int i_17 = 0; i_17 < 22; i_17 += 4) 
                        {
                            {
                                arr_53 [(signed char)0] [i_14] [i_14] [i_15] [i_16] [i_17] [i_17] = ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_52 [i_17] [i_16] [i_15 - 3] [i_14] [i_13]))) & (((((/* implicit */int) (unsigned short)64550)) ^ (((/* implicit */int) var_5))))));
                                var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) min((arr_49 [i_16] [i_14] [i_15 - 1] [i_15 - 1]), (2147483647)))) <= (((((/* implicit */_Bool) arr_49 [i_16] [15] [i_15 - 2] [i_15 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2798556741U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 22; i_18 += 2) 
                    {
                        for (long long int i_19 = 2; i_19 < 20; i_19 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) min(((~(((/* implicit */int) (short)32767)))), (((((/* implicit */_Bool) arr_7 [(unsigned char)7] [i_14] [i_19 + 2])) ? (331040747) : (((/* implicit */int) (unsigned char)60))))))) <= (arr_19 [i_13] [i_19 - 2] [i_15 + 1] [i_13])));
                                arr_58 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) arr_31 [i_18]);
                                var_21 *= ((/* implicit */signed char) ((((((((/* implicit */int) (short)25414)) <= (((/* implicit */int) (unsigned char)255)))) || (((/* implicit */_Bool) max((arr_4 [i_13] [i_14]), (arr_45 [i_13] [i_15 - 3] [i_15 - 1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_13] [i_15])) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) var_5))))) ? (arr_23 [i_15 + 1] [i_19 - 1] [i_15 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_13] [i_14] [i_14] [i_18])) % (((/* implicit */int) var_11))))))) : (((/* implicit */unsigned long long int) arr_18 [i_15] [i_18] [i_13]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_20 = 2; i_20 < 19; i_20 += 2) 
                    {
                        for (long long int i_21 = 0; i_21 < 22; i_21 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_20 + 3] [i_20 + 1] [i_20] [i_15 - 2]))))), (((unsigned short) ((((/* implicit */int) var_10)) % (var_6))))));
                                arr_65 [i_14] = ((/* implicit */unsigned char) (+(((min((((/* implicit */unsigned long long int) (short)2048)), (11797971325186021413ULL))) % (((/* implicit */unsigned long long int) var_6))))));
                                arr_66 [(short)14] [i_14] [i_15] [i_20] [i_21] = ((/* implicit */long long int) var_9);
                                var_23 &= (((~(arr_10 [i_13] [i_20 - 2] [i_15 - 1] [i_20 - 1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                                arr_67 [i_14] = ((/* implicit */int) (((!(((var_6) != (((/* implicit */int) (unsigned char)87)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-99)) ? (arr_37 [i_13] [i_14] [i_14] [i_15 - 3] [i_20] [i_15 - 3]) : (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)31)))) : (((long long int) 0))))) : (((((/* implicit */_Bool) max(((unsigned char)199), (arr_36 [i_20 + 1] [i_15 - 2] [i_13] [i_13])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_9)), ((signed char)31))))) : (((12427599683772816214ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15890)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        for (signed char i_23 = 2; i_23 < 11; i_23 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_24 = 0; i_24 < 13; i_24 += 4) 
                {
                    for (int i_25 = 2; i_25 < 12; i_25 += 1) 
                    {
                        {
                            arr_77 [i_25] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)60)), (((5335642063165768595LL) ^ (5335642063165768595LL))))))));
                            arr_78 [i_24] [i_25 - 1] [i_25] [i_25] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_52 [i_25] [i_24] [i_22] [i_22] [i_22]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_26 = 0; i_26 < 13; i_26 += 2) 
                {
                    for (signed char i_27 = 1; i_27 < 11; i_27 += 4) 
                    {
                        {
                            var_24 &= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (1073741823U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22347))))))))));
                            arr_83 [i_22] [i_26] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_9)))) % (((/* implicit */int) ((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)77))))))))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) (signed char)-99))));
                            var_25 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned int) var_4)), (arr_19 [i_22] [(unsigned char)7] [i_22] [i_22]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_23 [i_26] [i_23] [i_22]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))))) > ((~(var_1)))));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_14 [i_27 - 1] [i_26] [6U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [4ULL] [i_26] [i_22]))) : (var_1))))))));
                            var_27 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) ((_Bool) arr_59 [(signed char)20] [i_23] [(signed char)20] [(unsigned char)10] [i_27] [i_27 + 2]))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-1)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_28 = 0; i_28 < 13; i_28 += 2) 
                {
                    for (short i_29 = 0; i_29 < 13; i_29 += 1) 
                    {
                        {
                            var_28 *= var_3;
                            var_29 -= ((/* implicit */long long int) (((-(var_1))) ^ (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)31), (((/* implicit */signed char) arr_1 [i_22] [i_29]))))))));
                            arr_89 [(signed char)12] [i_29] [i_23 - 2] [i_29] [i_29] = ((/* implicit */_Bool) (~(max((((((/* implicit */int) (signed char)113)) & (((/* implicit */int) (short)19690)))), ((~(((/* implicit */int) (signed char)-38))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_30 = 3; i_30 < 12; i_30 += 4) 
                {
                    for (long long int i_31 = 0; i_31 < 13; i_31 += 3) 
                    {
                        {
                            arr_96 [i_22] [i_23] [i_30] [i_31] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_23 + 1] [i_23 - 1] [i_23 + 2]))));
                            arr_97 [(unsigned char)6] [i_30] = ((/* implicit */int) min(((~(max((arr_20 [i_22] [i_22] [13ULL] [i_23] [i_23 - 2] [i_30] [i_31]), (((/* implicit */unsigned long long int) arr_31 [i_30])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)24662)) << (((((/* implicit */int) min((arr_70 [0ULL] [i_23 - 1] [0ULL]), (((/* implicit */unsigned char) (signed char)101))))) - (48))))))));
                            arr_98 [(signed char)8] [(unsigned short)2] [i_22] [i_23] [i_30 - 3] [i_30] = ((/* implicit */int) ((((/* implicit */_Bool) arr_84 [i_22] [i_23 - 2])) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 3175824483630075898ULL)) ? (7564543162026192850LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_32 = 2; i_32 < 11; i_32 += 1) 
                {
                    for (unsigned short i_33 = 0; i_33 < 13; i_33 += 1) 
                    {
                        for (unsigned long long int i_34 = 0; i_34 < 13; i_34 += 4) 
                        {
                            {
                                arr_105 [i_22] [i_23 - 2] = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) ((int) (unsigned char)87))), (min((arr_20 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] [i_22]), (((/* implicit */unsigned long long int) (unsigned char)31))))))));
                                var_30 *= ((/* implicit */unsigned char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_72 [i_22] [i_33] [i_34]))))))) % ((-(((/* implicit */int) arr_25 [i_32 + 1] [i_32 + 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_35 = 0; i_35 < 22; i_35 += 3) 
    {
        for (unsigned long long int i_36 = 3; i_36 < 19; i_36 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_37 = 2; i_37 < 20; i_37 += 3) 
                {
                    for (unsigned char i_38 = 2; i_38 < 18; i_38 += 1) 
                    {
                        for (signed char i_39 = 1; i_39 < 21; i_39 += 2) 
                        {
                            {
                                arr_117 [i_35] [4] [i_37] [i_38 - 2] [i_37] = (-(var_3));
                                var_31 -= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned short)54820))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_40 = 0; i_40 < 22; i_40 += 4) 
                {
                    for (short i_41 = 3; i_41 < 19; i_41 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_62 [i_36 + 1] [i_36 + 2] [i_41 - 2])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_36 + 1] [i_36 - 1] [i_41 - 1]))))) <= (((/* implicit */unsigned long long int) ((5111663566158353413LL) << (((/* implicit */int) arr_62 [i_36 + 2] [i_36 - 2] [i_41 - 2])))))));
                            var_33 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)50990))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_42 = 0; i_42 < 22; i_42 += 1) 
                {
                    for (_Bool i_43 = 0; i_43 < 1; i_43 += 1) 
                    {
                        {
                            var_34 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_129 [i_36 - 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_17 [i_35] [(signed char)20] [i_42] [i_36 + 1])))), (((/* implicit */int) (unsigned short)54805))));
                            var_35 = ((/* implicit */int) var_3);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_44 = 2; i_44 < 20; i_44 += 4) 
                {
                    for (unsigned char i_45 = 0; i_45 < 22; i_45 += 4) 
                    {
                        for (signed char i_46 = 2; i_46 < 20; i_46 += 4) 
                        {
                            {
                                arr_139 [i_35] [i_36] = ((/* implicit */long long int) arr_40 [i_35] [i_35] [i_35]);
                                var_36 -= ((/* implicit */unsigned long long int) min((((unsigned int) ((3175824483630075898ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))), (((/* implicit */unsigned int) ((unsigned short) (+((-2147483647 - 1))))))));
                                var_37 = ((/* implicit */int) arr_109 [i_35] [i_44] [i_44 - 1]);
                                arr_140 [i_35] [(signed char)21] [i_46] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) ? (7051696359044750183ULL) : (((/* implicit */unsigned long long int) 2147483647))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_47 = 2; i_47 < 21; i_47 += 3) 
                {
                    for (unsigned char i_48 = 0; i_48 < 22; i_48 += 3) 
                    {
                        for (int i_49 = 1; i_49 < 20; i_49 += 1) 
                        {
                            {
                                var_38 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_112 [i_47 + 1] [i_47] [i_36 + 2] [i_35])) & (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_143 [i_36 - 3])) || (((/* implicit */_Bool) arr_143 [i_36 - 1])))))) : (arr_18 [i_35] [6] [i_47])));
                                var_39 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (2147483647)))) ? (((/* implicit */int) ((short) arr_130 [i_35] [i_35] [i_35] [i_35]))) : (((/* implicit */int) ((13LL) < (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) - (2147483647)));
                                arr_150 [i_35] [i_36] = ((/* implicit */short) max((((/* implicit */unsigned short) ((unsigned char) arr_137 [i_35] [i_36 - 3] [i_47 + 1] [i_48] [i_49]))), (var_11)));
                                arr_151 [19U] [i_47 - 1] = ((/* implicit */signed char) (((-(((unsigned int) var_6)))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((_Bool) var_11)) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)19679))) & (arr_119 [i_49] [i_47] [i_36]))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
