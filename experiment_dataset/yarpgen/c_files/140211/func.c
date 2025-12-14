/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140211
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_5), (((/* implicit */unsigned long long int) (unsigned short)21)))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)8945)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56598)))))) : (((((/* implicit */_Bool) (unsigned short)19)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))))))));
        var_15 -= ((/* implicit */unsigned short) ((int) arr_1 [i_0] [i_0]));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
        var_17 = ((/* implicit */signed char) ((unsigned short) arr_3 [i_1]));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_11 [i_4] [i_2] = ((/* implicit */signed char) arr_3 [i_3 + 2]);
                /* LoopSeq 1 */
                for (unsigned int i_5 = 4; i_5 < 16; i_5 += 1) 
                {
                    arr_14 [i_2] = ((/* implicit */long long int) min(((unsigned short)35106), ((unsigned short)8923)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        arr_18 [i_2] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [12U] [i_2 - 2] [i_2]))));
                        arr_19 [i_2] [i_6] [i_2] [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */long long int) (unsigned short)8937);
                        var_18 = ((/* implicit */long long int) 2550447460159548010ULL);
                    }
                    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        var_19 &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_9)), ((unsigned short)64766)))) ? (((/* implicit */int) (unsigned short)64791)) : (((/* implicit */int) arr_12 [i_5 - 4] [i_5 - 3] [i_7]))))));
                        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56608))) * (2147483584U)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8945))) : (var_0)))))) ? (((/* implicit */int) arr_16 [i_2] [i_2] [i_4] [i_5 + 2] [i_5 - 2] [i_7])) : (((/* implicit */int) var_9))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)13967)) * (((/* implicit */int) (unsigned short)56588))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8954))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (var_12))))), (var_11)));
                        arr_25 [i_4] [i_2] [i_8] [i_5] [i_2] [i_3] = ((/* implicit */unsigned char) var_0);
                    }
                    arr_26 [i_2 - 2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned int) (unsigned short)56594);
                }
            }
            for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 3) 
            {
                var_22 = ((/* implicit */unsigned int) var_9);
                var_23 -= ((/* implicit */unsigned int) var_9);
            }
            /* vectorizable */
            for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 4; i_11 < 16; i_11 += 3) 
                {
                    for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        {
                            var_24 -= ((var_5) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1909)) * (((/* implicit */int) arr_24 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                            var_25 = ((/* implicit */_Bool) (-(var_13)));
                            var_26 += ((/* implicit */unsigned long long int) var_7);
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_0))));
                arr_37 [i_2] = (-((~(var_13))));
                arr_38 [i_2] [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_2]))));
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_10] [i_10 - 2] [i_2 - 2])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2514))) : (8447292442487056277LL))) : (((/* implicit */long long int) arr_23 [i_2] [i_2 + 1] [i_3] [i_3] [i_10])))))));
            }
            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) max((((/* implicit */unsigned long long int) min((((((/* implicit */int) var_1)) * (((/* implicit */int) var_1)))), (((/* implicit */int) (short)3882))))), (var_6))))));
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (unsigned short)56581))));
        }
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 18; i_13 += 4) /* same iter space */
        {
            arr_41 [i_2] [i_2] = ((/* implicit */short) 2325050072U);
            arr_42 [i_2] [i_2] [i_2] = ((/* implicit */long long int) var_11);
        }
        for (long long int i_14 = 0; i_14 < 18; i_14 += 4) /* same iter space */
        {
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) (unsigned short)63689))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8955))))) : (((/* implicit */int) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) (short)26585))))))));
            /* LoopSeq 2 */
            for (unsigned short i_15 = 2; i_15 < 15; i_15 += 4) 
            {
                var_32 -= ((/* implicit */long long int) (unsigned short)8948);
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_16 = 0; i_16 < 18; i_16 += 2) 
                {
                    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((arr_20 [i_2 - 2] [i_14] [i_2 - 2] [i_15 + 3] [i_2] [i_14]) >> (((arr_20 [i_2] [i_14] [i_2 - 2] [i_15 + 1] [i_2] [i_14]) - (356365965U))))))));
                    arr_52 [i_2] [i_14] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_2] [i_2]))) > (13853773314567624176ULL)));
                    var_34 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_16] [i_2 - 1])))));
                }
                for (unsigned char i_17 = 3; i_17 < 17; i_17 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_18 = 0; i_18 < 18; i_18 += 2) 
                    {
                        arr_58 [i_2 - 2] [(_Bool)1] [i_15] [i_14] [i_17 - 3] [i_2] = ((/* implicit */short) arr_8 [i_2]);
                        arr_59 [i_2] [i_2] [i_2] [i_17] [i_18] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_55 [i_15] [i_15 - 2] [i_15 + 1] [i_2] [i_15 + 3] [i_15 + 3])) ? (((((/* implicit */_Bool) (short)-3882)) ? (((/* implicit */int) (unsigned short)35114)) : (((/* implicit */int) (short)-19976)))) : (((/* implicit */int) arr_55 [i_15] [(signed char)0] [i_15 - 2] [i_2] [i_15 + 1] [i_15 + 1]))));
                        var_35 = ((/* implicit */unsigned int) ((var_11) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8947)))));
                        var_36 += ((/* implicit */unsigned short) max((max((arr_15 [i_18] [i_15] [i_18]), (((/* implicit */unsigned int) arr_47 [i_18] [i_14] [i_15] [i_14])))), (((/* implicit */unsigned int) arr_43 [i_18] [i_17 + 1] [i_2]))));
                    }
                    var_37 *= ((/* implicit */unsigned int) (unsigned short)8923);
                    var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) ((short) (unsigned short)56588))) - (((/* implicit */int) (_Bool)0))))) * (min((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_15] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100))) : (2519233672U)))))))))));
                }
                for (unsigned int i_19 = 0; i_19 < 18; i_19 += 3) 
                {
                    var_39 &= ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) * (var_6)))));
                    var_40 *= ((/* implicit */unsigned long long int) arr_54 [i_2] [i_14] [i_15] [i_19]);
                    arr_62 [i_15] [i_2] [i_15] [i_15] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)56588)))), ((+(((((/* implicit */int) arr_27 [0ULL] [i_15] [i_14] [0ULL])) * (((/* implicit */int) (short)11972))))))));
                }
                for (unsigned int i_20 = 0; i_20 < 18; i_20 += 3) 
                {
                    arr_67 [i_2] [i_14] [(unsigned short)8] [(unsigned short)8] = ((((/* implicit */_Bool) 9223372036854775799LL)) ? (((/* implicit */int) arr_36 [i_2] [i_2] [i_15] [i_2 - 3])) : (((/* implicit */int) (short)-25031)));
                    var_41 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) min((arr_33 [i_2 + 1] [i_2] [i_15 - 1] [i_20]), (((/* implicit */short) (_Bool)1))))), (var_2)))));
                }
            }
            for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 4) 
            {
                var_42 = ((/* implicit */unsigned int) var_3);
                var_43 = ((/* implicit */unsigned long long int) 4294967294U);
                var_44 *= ((/* implicit */unsigned short) arr_54 [i_2] [i_14] [i_14] [i_21]);
                arr_70 [i_2] [i_14] [i_2] = ((/* implicit */long long int) (unsigned char)182);
            }
            var_45 = ((/* implicit */long long int) 13853773314567624176ULL);
        }
        /* LoopNest 2 */
        for (unsigned int i_22 = 2; i_22 < 16; i_22 += 3) 
        {
            for (short i_23 = 1; i_23 < 17; i_23 += 4) 
            {
                {
                    var_46 *= ((/* implicit */short) arr_40 [i_2] [i_2 - 1] [i_23 + 1]);
                    var_47 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)8948)) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_3 [i_23]))));
                    /* LoopNest 2 */
                    for (int i_24 = 2; i_24 < 17; i_24 += 2) 
                    {
                        for (unsigned char i_25 = 0; i_25 < 18; i_25 += 3) 
                        {
                            {
                                var_48 = ((/* implicit */unsigned long long int) (+(var_13)));
                                arr_81 [i_2] [i_22] [i_23 + 1] [i_22] [i_25] = var_4;
                                var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) var_8))));
                                var_50 = ((/* implicit */long long int) ((unsigned long long int) ((max((((/* implicit */unsigned long long int) var_1)), (2241833626727316853ULL))) & (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) -513913870)) : (var_6))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
