/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115040
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((_Bool) min((((/* implicit */unsigned char) var_6)), ((unsigned char)255))))), ((unsigned short)57570)));
                                var_17 = ((/* implicit */signed char) (+(((/* implicit */int) max((arr_9 [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3 - 1]), (arr_9 [i_3 + 1] [i_3 + 3] [i_3 + 2] [i_3 + 1]))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                            {
                                var_18 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                                var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3 + 1] [i_3 - 2])) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (unsigned char)20))))));
                                arr_17 [i_3] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_3])) || (((/* implicit */_Bool) (unsigned short)53989)))));
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((((/* implicit */short) min((((/* implicit */signed char) ((7874193977989195607LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)-3466)))))), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((short) ((((/* implicit */_Bool) -7874193977989195608LL)) ? (16337128460986283698ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 + 3] [i_3 + 3] [i_3 + 2]))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
                            {
                                var_22 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 3] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_4))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) -6207263154512892420LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)23583))));
                                var_24 = ((/* implicit */signed char) arr_2 [i_3]);
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3540780439914744722LL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -63321100)) ? (-1255726845) : (var_2)))) ? (-1255726845) : (((/* implicit */int) (unsigned char)65)))) : (((/* implicit */int) arr_4 [i_0] [i_0]))));
                            }
                            /* LoopSeq 1 */
                            for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                            {
                                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_7)) + (110))))) << (((arr_18 [i_3 + 1] [i_3 - 2] [i_3 - 2]) - (469642885060313588ULL)))))), (arr_18 [i_1] [i_1] [i_1]))))));
                                arr_28 [i_0] [i_1] [i_1] [i_0] [i_3] = ((((_Bool) var_2)) || (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 7874193977989195616LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))))));
                                arr_29 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) min((((unsigned long long int) max((((/* implicit */unsigned long long int) (unsigned char)235)), (10911655206469052198ULL)))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)20080))) >= (13ULL))) ? (((/* implicit */unsigned long long int) arr_20 [i_3 + 2] [i_3 + 3])) : (10911655206469052221ULL)))));
                                var_27 &= ((/* implicit */unsigned long long int) (-(min((var_4), (((/* implicit */long long int) arr_24 [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_3] [i_3 - 1] [i_3]))))));
                            }
                        }
                    } 
                } 
                var_28 -= ((/* implicit */short) min((max((((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14761883353444752549ULL))), (((/* implicit */unsigned long long int) (((_Bool)1) || ((_Bool)0)))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                arr_30 [i_0] = ((/* implicit */signed char) ((int) ((int) 7874193977989195584LL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 1) 
    {
        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
        {
            {
                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) 8323072))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    arr_40 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_39 [i_9] [i_9] [i_10] [i_9])))) <= (((/* implicit */int) ((unsigned short) arr_23 [i_10])))));
                    var_30 = ((/* implicit */signed char) (-(((0LL) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_9] [i_10] [i_9])))))));
                }
                for (unsigned long long int i_12 = 2; i_12 < 12; i_12 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_13 = 0; i_13 < 14; i_13 += 3) 
                    {
                        arr_47 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_8 [i_9] [i_9] [i_9] [i_9 + 1]))));
                        var_31 = ((/* implicit */long long int) var_8);
                        var_32 = ((/* implicit */unsigned short) var_4);
                    }
                    arr_48 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */int) var_9)), (var_2))), (((/* implicit */int) var_1))))) ? (min((((/* implicit */long long int) var_13)), (((long long int) (unsigned short)23005)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_16 [i_9] [i_9] [i_9] [i_10] [i_10]))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_10 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))))))));
                }
                for (unsigned short i_14 = 2; i_14 < 13; i_14 += 4) 
                {
                    var_33 = ((/* implicit */unsigned long long int) (~(min((max((((/* implicit */long long int) (unsigned char)190)), (-8368371632440056771LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_9] [i_9] [i_9] [i_9] [i_10] [i_9] [i_14])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 1; i_15 < 13; i_15 += 4) 
                    {
                        for (int i_16 = 2; i_16 < 12; i_16 += 3) 
                        {
                            {
                                var_34 -= ((short) ((((/* implicit */_Bool) arr_49 [i_9 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_16 - 1] [i_16 - 1] [i_16]))) : (4294967272U)));
                                var_35 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (arr_18 [i_14] [i_14] [i_14]) : (((/* implicit */unsigned long long int) var_12)))));
                                var_36 -= ((/* implicit */short) var_5);
                            }
                        } 
                    } 
                    var_37 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) -7874193977989195583LL)) ? (3431411507231747765ULL) : (((/* implicit */unsigned long long int) 1706459878))))));
                    arr_58 [i_9] [i_9] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) -7874193977989195577LL)), (arr_19 [i_9 + 1] [i_14] [i_14] [i_14] [i_14])))));
                }
                var_38 -= ((/* implicit */unsigned long long int) min((((unsigned int) arr_16 [i_9] [i_9] [i_9 + 2] [i_10] [i_9])), ((-(((((/* implicit */_Bool) var_8)) ? (arr_8 [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))));
                var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) arr_46 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_17 = 0; i_17 < 19; i_17 += 4) 
    {
        var_40 += ((/* implicit */int) max((((/* implicit */long long int) var_11)), (min((((/* implicit */long long int) arr_60 [i_17])), (-7874193977989195613LL)))));
        var_41 = ((/* implicit */unsigned short) max((var_41), (((unsigned short) (+(((/* implicit */int) arr_60 [i_17])))))));
        arr_61 [i_17] = ((/* implicit */unsigned long long int) var_9);
        var_42 = ((/* implicit */long long int) (+(((/* implicit */int) ((max((var_4), (((/* implicit */long long int) (short)27122)))) >= (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
    }
    /* vectorizable */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        arr_65 [i_18] [i_18] = ((/* implicit */signed char) ((long long int) arr_63 [i_18]));
        arr_66 [i_18] [i_18] = ((/* implicit */short) arr_62 [i_18] [i_18]);
    }
    /* vectorizable */
    for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 3) 
    {
        var_43 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0))));
        arr_70 [i_19] = ((/* implicit */long long int) (unsigned short)19883);
        arr_71 [i_19] = ((/* implicit */long long int) arr_67 [i_19]);
        arr_72 [i_19] = (!(((/* implicit */_Bool) arr_67 [i_19])));
        /* LoopSeq 1 */
        for (short i_20 = 0; i_20 < 22; i_20 += 1) 
        {
            var_44 = ((/* implicit */long long int) ((unsigned short) arr_67 [i_19]));
            arr_75 [i_19] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(6026248526876563432LL)))) ? (((/* implicit */int) arr_69 [i_20])) : (((/* implicit */int) var_0))));
        }
    }
}
