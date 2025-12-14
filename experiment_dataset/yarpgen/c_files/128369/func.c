/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128369
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = (!(((/* implicit */_Bool) 0ULL)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] = ((/* implicit */short) var_12);
                        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_13) == (((/* implicit */unsigned int) var_2)))))) == (((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))), (((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_0] [i_2 - 1] [i_0])))))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((long long int) ((arr_10 [i_0] [i_0] [i_0] [i_0]) >> (((((/* implicit */int) max((arr_8 [i_0] [i_0] [4U]), (((/* implicit */short) var_9))))) - (1494)))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) min((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_3))))))) ? (arr_6 [i_4]) : (((/* implicit */unsigned long long int) min((((unsigned int) var_5)), (((/* implicit */unsigned int) (~(arr_12 [i_4] [i_4] [i_4] [i_4]))))))))))));
        var_17 = ((/* implicit */unsigned char) arr_10 [i_4] [i_4] [i_4] [i_4]);
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (+(max((((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4] [(short)1] [2ULL])) ? (((/* implicit */unsigned long long int) var_5)) : (var_12))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), (var_6)))))))))));
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            for (signed char i_6 = 2; i_6 < 15; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            arr_26 [i_4] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >> (((arr_0 [i_4]) + (1769389786)))))) != (var_12)));
                            arr_27 [i_4] [7ULL] [i_6] [i_6] [i_7] [(_Bool)1] = ((/* implicit */long long int) ((arr_11 [i_4] [i_4] [i_4] [i_4] [i_4]) >> ((((~(var_13))) - (3187019077U)))));
                        }
                        var_19 = ((/* implicit */_Bool) min((var_19), (var_7)));
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned char) min((min((((((/* implicit */int) var_4)) << (((var_3) - (3856755316U))))), (((/* implicit */int) (short)9976)))), (((/* implicit */int) ((((((/* implicit */unsigned int) arr_11 [(_Bool)1] [i_5] [i_5] [i_5] [i_5])) - (var_13))) != (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                            arr_30 [i_4] [i_5] [i_6] [i_7] [i_9] [i_5] [i_5] = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_0)))) == (((((/* implicit */_Bool) ((unsigned int) 171987515U))) ? (var_2) : (arr_12 [i_6] [i_6 - 1] [8U] [i_6 + 1])))));
                            var_21 = ((/* implicit */_Bool) min((max((((/* implicit */short) (!(((/* implicit */_Bool) var_3))))), (min(((short)14620), (var_4))))), (((/* implicit */short) ((((/* implicit */long long int) min((var_13), (((/* implicit */unsigned int) var_7))))) >= (min((var_11), (((/* implicit */long long int) var_7)))))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            var_22 = ((/* implicit */signed char) min((((var_11) << (((((var_8) + (8754905003255288992LL))) - (1LL))))), (((/* implicit */long long int) max((arr_11 [i_4] [i_5] [i_5] [(unsigned short)4] [i_6 - 2]), (arr_11 [1U] [i_6 - 1] [i_6] [7U] [i_6 - 2]))))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (var_3)));
                            var_24 = ((/* implicit */_Bool) ((((min((max((((/* implicit */long long int) -749129652)), (1182833942268229444LL))), (((/* implicit */long long int) ((var_0) ? (arr_15 [i_4] [i_4]) : (((/* implicit */int) var_7))))))) + (9223372036854775807LL))) >> ((((~(var_10))) - (5371920510535671667LL)))));
                            arr_33 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((var_5) + (max((arr_11 [i_10] [i_10] [i_10] [i_10] [i_10]), (arr_24 [i_4] [i_5] [i_6] [i_6 + 1] [(short)4] [i_10])))))) - (((((/* implicit */_Bool) min((var_3), (var_3)))) ? (max((var_10), (((/* implicit */long long int) arr_8 [i_10] [i_6 - 2] [i_10])))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                        }
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4] [i_4])) && (((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) arr_4 [i_4]))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (var_5)))))))))));
                    }
                } 
            } 
        } 
        var_26 = (+(((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_3)))))));
    }
    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) /* same iter space */
    {
        arr_37 [i_11] = ((/* implicit */unsigned long long int) (-(((max((((/* implicit */long long int) (short)32747)), (var_10))) >> (((((/* implicit */int) (signed char)-12)) + (49)))))));
        arr_38 [(unsigned short)8] = ((/* implicit */long long int) max((((/* implicit */unsigned int) 0)), (915912975U)));
        var_27 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((arr_5 [i_11] [i_11] [i_11]) << (((var_2) + (1292620770))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_11])) ? (var_5) : (((/* implicit */int) var_0))))) ? (max((var_12), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) var_13))))));
        var_28 = ((long long int) arr_21 [i_11]);
    }
    /* vectorizable */
    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */int) ((var_13) >= (((/* implicit */unsigned int) arr_15 [i_12] [i_12]))));
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((short) (-2147483647 - 1))))));
        var_31 = ((((int) var_9)) << (((/* implicit */int) arr_35 [i_12] [i_12])));
        /* LoopSeq 2 */
        for (unsigned int i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            arr_45 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_21 [i_13]) + (2147483647))) >> (((-749129652) + (749129681)))))) ? (((/* implicit */int) arr_43 [i_12] [i_13])) : (((/* implicit */int) arr_31 [(_Bool)1] [(_Bool)1] [i_12] [i_12] [i_12] [i_12]))));
            arr_46 [(short)3] [i_13] = ((/* implicit */unsigned short) arr_36 [i_13]);
            arr_47 [i_12] [i_12] [(signed char)14] = ((/* implicit */long long int) arr_20 [i_12] [i_12] [i_13] [i_13]);
            /* LoopSeq 3 */
            for (int i_14 = 0; i_14 < 16; i_14 += 4) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned short) (((_Bool)1) ? (11257339125829842497ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)797)))));
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 16; i_15 += 4) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_3))));
                            arr_57 [i_12] [i_15] = ((((/* implicit */int) var_0)) >= (((/* implicit */int) ((((/* implicit */int) var_0)) != (var_2)))));
                            var_34 = ((/* implicit */long long int) max((var_34), ((~(arr_22 [i_12] [i_13] [i_14] [i_14])))));
                            arr_58 [i_12] [i_12] [i_12] [i_12] [i_12] = ((((/* implicit */int) var_7)) - (arr_0 [i_15]));
                        }
                    } 
                } 
            }
            for (int i_17 = 0; i_17 < 16; i_17 += 4) /* same iter space */
            {
                var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) var_9))));
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 16; i_18 += 1) 
                {
                    for (unsigned short i_19 = 2; i_19 < 12; i_19 += 4) 
                    {
                        {
                            arr_65 [i_19] = ((/* implicit */short) (((-(((/* implicit */int) (short)29065)))) != (((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_4 [i_12])) - (8104)))))));
                            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) var_2))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_20 = 0; i_20 < 16; i_20 += 1) 
                {
                    arr_69 [(_Bool)1] [i_13] [(signed char)11] [(signed char)11] [(signed char)11] = ((/* implicit */long long int) ((arr_40 [i_17] [i_13]) >= (((arr_34 [(_Bool)0]) * (((/* implicit */unsigned long long int) var_8))))));
                    var_37 = ((/* implicit */unsigned int) ((((unsigned int) arr_5 [i_13] [i_12] [(short)2])) < (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) < (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                    var_38 = ((/* implicit */int) ((var_10) < (((/* implicit */long long int) var_5))));
                }
                var_39 = ((/* implicit */_Bool) min((var_39), (((((/* implicit */unsigned long long int) var_13)) != (arr_6 [i_17])))));
            }
            for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 4) 
            {
                var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) arr_9 [i_12] [i_13] [i_21]))));
                var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) var_8))));
                var_42 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32764))) : (575087688U)))) ? (((/* implicit */unsigned long long int) ((long long int) var_4))) : (((unsigned long long int) var_4))));
            }
        }
        for (long long int i_22 = 0; i_22 < 16; i_22 += 2) 
        {
            arr_75 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_12] [i_22])) < (((/* implicit */int) ((var_8) == (var_10))))));
            var_43 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_12] [i_12] [i_22])) ? (((/* implicit */unsigned int) arr_51 [i_12] [i_12] [i_22])) : (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (var_3)))));
            /* LoopSeq 2 */
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) (-(arr_10 [i_12] [i_12] [i_22] [i_23]))))));
                var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) arr_77 [i_12] [i_22] [i_12] [i_12]))));
                /* LoopSeq 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    var_46 = ((/* implicit */short) arr_5 [i_24] [i_12] [i_23]);
                    arr_80 [i_24] [i_24] = ((/* implicit */unsigned long long int) arr_70 [i_12] [i_22] [(short)10] [i_24]);
                    arr_81 [i_12] = ((/* implicit */unsigned char) ((var_2) - (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1] [i_22]))));
                    var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) arr_12 [i_12] [i_12] [i_12] [i_12]))));
                }
                for (short i_25 = 0; i_25 < 16; i_25 += 2) 
                {
                    arr_86 [i_12] [i_22] [11LL] [i_25] [i_25] = ((/* implicit */signed char) arr_28 [i_25] [i_25] [i_23] [10U] [i_12]);
                    var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_12] [i_22] [i_23]))) : (9223372036854775791LL))))))));
                    var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) (~(((var_7) ? (((/* implicit */long long int) var_2)) : (var_11))))))));
                    var_50 = ((/* implicit */int) max((var_50), (((/* implicit */int) var_1))));
                    arr_87 [10ULL] = ((/* implicit */long long int) var_4);
                }
            }
            for (unsigned int i_26 = 0; i_26 < 16; i_26 += 1) 
            {
                var_51 = ((((/* implicit */_Bool) ((long long int) var_7))) ? (((var_2) / (((/* implicit */int) arr_20 [i_12] [i_22] [i_26] [i_12])))) : ((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))));
                arr_90 [i_12] [i_22] [i_26] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (signed char)-2)) - (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_7 [i_12] [i_22] [i_26]))));
                var_52 = ((/* implicit */unsigned long long int) arr_77 [i_12] [i_22] [i_26] [i_26]);
            }
        }
    }
    var_53 = ((/* implicit */unsigned int) var_9);
}
