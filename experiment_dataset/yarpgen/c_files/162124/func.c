/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162124
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
    for (short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            arr_6 [i_0 + 1] [i_0 + 1] = arr_2 [i_1];
            var_16 -= ((((/* implicit */int) max((arr_1 [i_0 - 1]), (((/* implicit */short) (unsigned char)107))))) * (min((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 2])), (556900369))));
        }
        arr_7 [i_0] = ((((/* implicit */_Bool) 556900369)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : ((~(((/* implicit */int) (unsigned char)32)))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            arr_13 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 3046863)) ? (((((/* implicit */_Bool) (unsigned char)101)) ? (((((/* implicit */_Bool) arr_12 [i_2])) ? (643891250305884018ULL) : (643891250305884009ULL))) : ((+(17802852823403667596ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((int) (unsigned short)43376)))))));
            var_17 -= ((/* implicit */long long int) max(((unsigned short)22151), (((/* implicit */unsigned short) (_Bool)1))));
        }
        for (unsigned short i_4 = 1; i_4 < 9; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (short i_5 = 1; i_5 < 8; i_5 += 1) 
            {
                for (short i_6 = 1; i_6 < 9; i_6 += 4) 
                {
                    {
                        var_18 = (!(((/* implicit */_Bool) arr_11 [i_2])));
                        arr_22 [i_2] [i_2] [i_2] [i_5] = max((((/* implicit */unsigned long long int) (!((_Bool)1)))), ((~(max((643891250305884026ULL), (((/* implicit */unsigned long long int) var_6)))))));
                    }
                } 
            } 
            arr_23 [i_2] = ((/* implicit */short) ((4294967295U) << (((var_10) - (758750627)))));
            var_19 = ((/* implicit */unsigned short) arr_10 [i_2] [i_2]);
        }
        for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
            {
                arr_30 [i_2] [i_7] [i_2] [i_7] = arr_26 [i_2] [i_8] [i_8];
                var_20 = var_2;
            }
            for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned int) 643891250305884018ULL);
                arr_33 [i_2] [i_2] = (+(((((/* implicit */_Bool) arr_19 [i_7] [i_7] [i_9] [i_7] [i_2] [i_9])) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32747)))))));
            }
            var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)59)) ? (((((/* implicit */_Bool) (short)3507)) ? (-4765679803328617107LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            arr_34 [i_7] [i_7] [(unsigned short)5] = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)3584)) ? (((/* implicit */int) arr_26 [i_2] [i_2] [i_7])) : (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) (~(1152921504606715904LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(short)1] [i_7] [i_7] [i_7]))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (7162300979744017100ULL))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_2] [i_2]))))))))));
            var_23 = ((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) != (439144735U)))));
            arr_35 [(_Bool)1] [(_Bool)1] [(short)4] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)43)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4297)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))))))), ((+(((/* implicit */int) arr_9 [i_2]))))));
        }
        arr_36 [i_2] = ((/* implicit */unsigned int) min((max((((/* implicit */int) ((short) arr_15 [i_2] [i_2]))), (((((/* implicit */int) (unsigned char)7)) % (((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))))), (((((/* implicit */int) (short)27931)) * (((/* implicit */int) (short)-26409))))));
        var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) min((((unsigned long long int) arr_27 [i_2] [i_2] [i_2])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -540350689)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) arr_28 [i_2] [i_2] [i_2] [i_2])))))))) ? (((/* implicit */int) (short)20947)) : ((-(((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) (_Bool)1)) : (var_4)))))))));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((short) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)32762))) <= (1152393071U))) ? (var_14) : (((/* implicit */unsigned long long int) var_4))))))));
    }
    var_26 &= ((/* implicit */unsigned int) (~(((33775776) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (3084528485151907514ULL))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 3) 
    {
        for (short i_11 = 4; i_11 < 10; i_11 += 2) 
        {
            {
                var_27 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) arr_37 [i_10 + 1]))), ((+(((/* implicit */int) (unsigned char)148))))));
                /* LoopSeq 2 */
                for (int i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    arr_48 [i_10 + 4] [i_10] [i_10] = ((/* implicit */short) min(((~(((/* implicit */int) (unsigned char)114)))), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)46))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_46 [i_10] [(short)10] [i_11] [i_12]) : (((/* implicit */int) (unsigned char)171)))) : (arr_42 [(short)5] [(short)5])))));
                    arr_49 [i_10] [i_10 + 2] [i_10] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (var_4))))))), (max(((-(((/* implicit */int) var_1)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12))))))));
                    var_28 *= 0ULL;
                    var_29 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_10] [i_10 + 4] [3LL] [i_11 - 4]))) + (((var_14) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_11] [12U] [i_11 - 4] [i_11 + 1])))))));
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) var_12))));
                }
                for (short i_13 = 1; i_13 < 11; i_13 += 2) 
                {
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -33775776)))))));
                    /* LoopSeq 4 */
                    for (short i_14 = 0; i_14 < 13; i_14 += 3) /* same iter space */
                    {
                        var_32 = var_15;
                        var_33 = ((/* implicit */unsigned int) min((((/* implicit */signed char) var_13)), (((signed char) max((11284443093965534516ULL), (((/* implicit */unsigned long long int) (unsigned char)91)))))));
                        arr_55 [i_10] [i_11] [i_13] [i_14] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (signed char)-19)) % (((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40353))) : ((~(7162300979744017100ULL)))));
                        var_34 = ((/* implicit */unsigned short) (-(max((183055347), (((((/* implicit */int) (short)3101)) >> (((11284443093965534516ULL) - (11284443093965534504ULL)))))))));
                    }
                    for (short i_15 = 0; i_15 < 13; i_15 += 3) /* same iter space */
                    {
                        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) max((((unsigned long long int) (unsigned char)173)), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_40 [i_11 + 1])), ((unsigned char)124)))))))));
                        /* LoopSeq 4 */
                        for (short i_16 = 3; i_16 < 12; i_16 += 4) 
                        {
                            var_36 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_43 [i_11 + 1] [i_11 + 1]))));
                            var_37 ^= ((((/* implicit */_Bool) max((2147483647), (((/* implicit */int) var_11))))) ? ((-(((((/* implicit */_Bool) arr_40 [i_16])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((15362215588557644107ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_10] [i_11] [i_10] [i_15] [i_16]))))))))));
                            var_38 ^= ((/* implicit */int) var_7);
                        }
                        for (unsigned int i_17 = 1; i_17 < 11; i_17 += 1) 
                        {
                            arr_63 [i_10] [i_11] [i_13 + 1] [i_15] [i_17 + 2] [i_17] [2U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_37 [i_17 - 1])))))));
                            var_39 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(33775776))))));
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3112)) ? (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_7)))), (min((((/* implicit */int) (unsigned char)98)), (var_4)))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3084528485151907521ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_10] [i_11] [i_13] [i_11] [i_11]))) : (6790243824811409822LL)))), (((var_14) << (((((/* implicit */int) (unsigned char)97)) - (70)))))))));
                            var_41 = ((/* implicit */short) (~(((/* implicit */int) var_0))));
                            var_42 = ((/* implicit */unsigned short) (unsigned char)5);
                        }
                        for (int i_18 = 0; i_18 < 13; i_18 += 3) 
                        {
                            arr_66 [i_18] [i_15] [7ULL] [i_18] [i_11] [i_10] [i_10] = ((/* implicit */unsigned int) arr_61 [i_10] [i_18] [(short)6] [i_10] [i_18]);
                            var_43 |= ((/* implicit */short) ((((/* implicit */_Bool) min((7434308004119373559LL), (((/* implicit */long long int) arr_61 [i_10] [i_10] [i_10 + 4] [i_10] [i_10]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)28672)))))) : (((((/* implicit */_Bool) max((var_4), (((/* implicit */int) (unsigned char)98))))) ? (10332523142541045993ULL) : (((/* implicit */unsigned long long int) -2043301422))))));
                            var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))) : (arr_54 [i_15] [i_15] [i_13 + 2])))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) -33775775))))), (max((230388024), (((/* implicit */int) var_12)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((-183055347) / (((/* implicit */int) (short)18858))))) && (((/* implicit */_Bool) (unsigned char)180))))))))));
                            arr_67 [i_10] [i_18] [i_15] [i_18] = ((/* implicit */signed char) (-(((unsigned long long int) (+(((/* implicit */int) var_0)))))));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 4) 
                        {
                            var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) var_11))));
                            arr_70 [(unsigned char)8] [(_Bool)1] [11U] [i_15] [i_19] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) min((((/* implicit */short) (unsigned char)5)), ((short)-18858)))) - (183055351)))));
                            arr_71 [i_11] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)6526)) ? (((/* implicit */int) var_12)) : (0)))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-27537)) : (((/* implicit */int) arr_51 [i_13 - 1] [i_15]))))) ^ (((var_8) << (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                        arr_72 [4U] [3ULL] [i_13 - 1] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 12181971389507640566ULL)) ? (((/* implicit */int) (unsigned short)51925)) : (-183055372)));
                    }
                    for (short i_20 = 0; i_20 < 13; i_20 += 3) /* same iter space */
                    {
                        var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) min(((~(arr_50 [i_13 + 1] [i_11] [i_11 - 3]))), (max((((/* implicit */int) (signed char)111)), (arr_50 [i_13 + 2] [i_11 - 2] [i_11 - 2]))))))));
                        var_47 = ((/* implicit */unsigned short) (((~((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116))) : (1284893728U))))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64)))));
                        arr_76 [i_10] [i_10] [(unsigned char)10] [(_Bool)1] &= ((/* implicit */unsigned char) var_10);
                        arr_77 [i_10 + 2] [i_10 + 2] = ((/* implicit */int) arr_74 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [i_10] [i_10]);
                        var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) max((((/* implicit */unsigned int) ((short) 72057592964186112ULL))), ((-(max((((/* implicit */unsigned int) var_10)), (3010073575U))))))))));
                    }
                    for (unsigned short i_21 = 1; i_21 < 11; i_21 += 3) 
                    {
                        var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)59016)) ? (arr_46 [i_21 + 2] [i_10 + 1] [i_13 + 1] [i_11 - 1]) : (max((arr_46 [i_21 + 2] [i_10 + 1] [i_13 + 1] [i_11 - 1]), (arr_46 [i_21 + 2] [i_10 + 1] [i_13 + 1] [i_11 - 1])))));
                        arr_80 [i_10] [i_10] [i_11] [i_13] [i_21] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((unsigned long long int) 14325742084962203319ULL)) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_15)), ((-9223372036854775807LL - 1LL)))))));
                        arr_81 [i_10] [4LL] [i_13 - 1] [i_21] = (short)6578;
                    }
                }
                var_50 = ((/* implicit */unsigned short) (!(((_Bool) arr_53 [i_10 + 3] [i_10 + 1]))));
                arr_82 [i_10 + 2] = ((/* implicit */unsigned char) min((max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_43 [(short)9] [i_11 + 2]))))) ? (var_10) : (((/* implicit */int) (short)567))))));
                arr_83 [i_10] [i_11] = ((((/* implicit */_Bool) 2130706432ULL)) ? (15152251812794873380ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5874))));
            }
        } 
    } 
    var_51 = ((/* implicit */unsigned long long int) max((var_51), (((((/* implicit */_Bool) (short)18858)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18851))) : (48042759605516862ULL)))));
    var_52 = ((/* implicit */int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (max((((/* implicit */unsigned long long int) 1001797685U)), (16412558100297482393ULL))) : (((/* implicit */unsigned long long int) (-(1001797706U)))))) / (((/* implicit */unsigned long long int) (+(max((6961219446656206113LL), (((/* implicit */long long int) var_5)))))))));
}
