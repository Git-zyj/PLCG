/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141658
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [(unsigned short)12] = ((/* implicit */long long int) min((((((/* implicit */_Bool) 3)) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0]))) : (((((/* implicit */int) arr_0 [i_0])) >> (((4294967285U) - (4294967267U))))))), (((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_2 [i_0]))))));
        var_12 = ((/* implicit */short) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) min((14676782313295733626ULL), (((/* implicit */unsigned long long int) -13))))) ? (arr_1 [i_0]) : (min((((/* implicit */int) arr_2 [i_0])), (13))))), (((((/* implicit */_Bool) arr_2 [(short)7])) ? (arr_1 [i_0]) : (((/* implicit */int) arr_2 [i_0]))))));
        arr_5 [(unsigned char)7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [(signed char)7])), (3)))) ? (3) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))) ? (min((arr_1 [i_0]), (arr_1 [i_0]))) : (((/* implicit */int) (_Bool)0))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                {
                    var_13 *= ((/* implicit */long long int) (!(((-1753500584724796308LL) <= (arr_12 [i_1] [i_2] [i_2] [i_3])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_5 = 4; i_5 < 13; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_1] [i_3] [(short)1] [i_5])) ? (((/* implicit */int) arr_15 [i_5 - 2])) : ((~(((/* implicit */int) arr_14 [i_1] [13U] [i_5]))))));
                            var_15 = ((/* implicit */int) arr_19 [i_5] [i_5 + 3] [i_5] [i_5] [i_5 - 3]);
                        }
                        var_16 = ((unsigned char) -26);
                        var_17 += ((/* implicit */unsigned char) arr_18 [i_2] [i_2] [i_2]);
                    }
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        arr_22 [i_1] [i_6] = ((/* implicit */unsigned int) arr_15 [i_6]);
                        var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 262143)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_6] [(_Bool)0] [i_3] [i_6]))) : (((unsigned int) arr_11 [i_1] [i_1] [i_1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6] [i_2] [i_1])) ? (arr_12 [i_1] [i_2] [i_3] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_1] [i_1])))))) ? (arr_7 [i_3]) : (((/* implicit */unsigned int) -262150))))));
                        arr_23 [i_6] [i_2] [0] [3U] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_18 [8ULL] [i_2] [8ULL]))))) || (((/* implicit */_Bool) arr_0 [i_3]))))), ((-(arr_17 [i_1] [i_2] [i_3] [i_6])))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        var_19 *= ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) arr_6 [i_1])))));
                        var_20 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) arr_10 [i_1] [i_3])) : (((/* implicit */int) arr_10 [i_1] [i_1]))))) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7)))))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(2147483644)))) && ((_Bool)1)));
                    }
                    var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_10 [i_1] [i_2])), (262143)))) ? (arr_25 [14] [14U] [i_3] [(unsigned short)3]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18999))))))))), (((((/* implicit */_Bool) arr_10 [13U] [i_3])) ? (arr_17 [i_3] [i_2] [i_2] [i_1]) : (((/* implicit */unsigned long long int) arr_25 [i_1] [i_1] [i_2] [(unsigned short)0]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_21 [i_1] [(short)8] [i_1] [i_8] [2] [i_9])))))) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))));
                    var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65527))) : (-906748562332862150LL)));
                    arr_33 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((arr_15 [i_9]), (((/* implicit */unsigned char) arr_28 [i_1]))))), (((((/* implicit */_Bool) arr_25 [i_9] [i_8] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_8] [6] [i_8] [(unsigned char)2] [i_8] [i_8]))) : (arr_31 [i_1] [i_1])))))), (min((arr_13 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_15 [i_1]))))));
                    var_25 = min((arr_17 [i_1] [i_1] [i_1] [0ULL]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_32 [i_9] [i_1]))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (_Bool)1))));
    }
    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */int) ((min((arr_11 [i_10] [i_10] [i_10]), (arr_11 [i_10] [i_10] [i_10]))) ? (-1732443229697802719LL) : (((/* implicit */long long int) ((/* implicit */int) min((min((((/* implicit */unsigned char) arr_11 [i_10] [i_10] [i_10])), (arr_19 [i_10] [i_10] [i_10] [i_10] [i_10]))), (((/* implicit */unsigned char) (!(arr_11 [i_10] [i_10] [i_10]))))))))));
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 1; i_13 < 13; i_13 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_14 = 0; i_14 < 16; i_14 += 3) 
                        {
                            var_28 = ((((/* implicit */_Bool) arr_43 [i_10] [(short)8] [i_14] [i_14])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_13] [i_13 - 1])) ? (((/* implicit */int) arr_10 [i_10] [i_13 - 1])) : (((/* implicit */int) arr_10 [i_12] [i_13 + 3]))))));
                            var_29 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_40 [i_13 + 1] [4ULL] [4ULL] [i_13 + 1])) || (((/* implicit */_Bool) arr_40 [i_14] [(unsigned short)14] [(unsigned short)14] [i_13 + 1])))) ? (((/* implicit */int) min((arr_40 [i_13] [8] [8] [i_13 + 1]), (arr_40 [i_14] [(unsigned char)4] [(unsigned char)4] [i_13 + 1])))) : (((/* implicit */int) ((signed char) arr_40 [i_13] [(short)6] [(short)6] [i_13 + 1])))));
                            var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((unsigned int) arr_48 [i_10] [i_14] [i_12] [i_10] [i_12] [i_14])), (((/* implicit */unsigned int) arr_27 [(_Bool)1]))))) ? (((/* implicit */int) arr_20 [i_10] [(short)4] [i_12] [i_13 + 2] [i_14])) : (((/* implicit */int) ((signed char) min((arr_8 [i_10]), (((/* implicit */unsigned int) (_Bool)0))))))));
                        }
                        arr_49 [i_10] [i_11] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_10 [i_10] [i_10])) * (((/* implicit */int) arr_11 [i_13] [i_12] [15ULL])))), (((/* implicit */int) arr_30 [10ULL]))))) || (arr_11 [i_10] [i_12] [i_13 - 1])));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_15 = 2; i_15 < 14; i_15 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) arr_30 [i_10]))));
                        /* LoopSeq 1 */
                        for (int i_16 = 0; i_16 < 16; i_16 += 1) 
                        {
                            var_32 *= ((_Bool) min((arr_42 [i_15] [i_12] [i_15 - 2] [i_16]), (arr_42 [i_15] [i_15] [i_15 + 2] [i_16])));
                            arr_56 [i_10] [(unsigned short)4] [i_10] [i_15] [i_10] = ((/* implicit */_Bool) arr_27 [i_10]);
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), (1ULL)));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 16; i_17 += 3) 
                    {
                        for (int i_18 = 0; i_18 < 16; i_18 += 1) 
                        {
                            {
                                var_34 -= ((/* implicit */long long int) min((((/* implicit */int) (signed char)91)), (227373451)));
                                var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_39 [(short)11] [(short)11] [i_12] [(unsigned char)5]), (((/* implicit */unsigned int) arr_27 [(short)13]))))) ? (((/* implicit */int) min((arr_37 [i_11] [i_10] [i_17]), (((/* implicit */signed char) min((arr_34 [i_10]), (arr_21 [i_18] [i_10] [i_17] [i_12] [i_10] [i_10]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_10])) && (arr_11 [i_10] [i_12] [i_17]))))));
                                var_36 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_9 [i_12]))));
                                var_37 = ((/* implicit */unsigned short) min(((~(((((/* implicit */_Bool) arr_20 [i_10] [i_10] [(short)8] [i_17] [i_18])) ? (((/* implicit */int) arr_18 [i_12] [i_11] [i_10])) : (((/* implicit */int) arr_16 [i_10] [(short)10] [(short)10] [i_10])))))), (((/* implicit */int) arr_60 [i_10]))));
                                arr_61 [i_10] [i_10] [i_12] [i_10] [(unsigned char)2] [(unsigned char)8] &= ((/* implicit */unsigned long long int) arr_41 [i_17]);
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_36 [i_10])))), (((/* implicit */int) arr_11 [i_12] [i_11] [i_10]))));
                    /* LoopNest 2 */
                    for (long long int i_19 = 3; i_19 < 14; i_19 += 3) 
                    {
                        for (unsigned int i_20 = 1; i_20 < 15; i_20 += 1) 
                        {
                            {
                                arr_69 [i_10] [i_10] [i_10] [i_10] [11U] = ((/* implicit */unsigned short) arr_63 [i_10] [i_12] [14ULL] [i_10]);
                                var_39 ^= ((/* implicit */_Bool) min((min((((/* implicit */long long int) min((((/* implicit */short) arr_46 [i_10] [i_10] [i_11] [i_12] [i_19] [i_20])), ((short)19318)))), (arr_12 [i_10] [i_12] [i_19] [i_20]))), (arr_29 [i_12] [i_11])));
                                var_40 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)3)));
                                var_41 = ((/* implicit */unsigned int) (_Bool)0);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_21 = 0; i_21 < 16; i_21 += 2) 
        {
            var_42 = ((/* implicit */_Bool) min((arr_35 [i_10]), (arr_10 [(unsigned short)6] [i_21])));
            var_43 = ((/* implicit */int) arr_6 [i_21]);
            /* LoopSeq 1 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_10] [i_21] [i_22]))))), (min((arr_31 [i_10] [i_10]), (((/* implicit */unsigned int) arr_10 [i_10] [i_21])))))))));
                var_45 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) arr_54 [i_21] [i_21] [i_21] [(short)7] [i_21])))));
                arr_76 [i_21] [i_21] &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_10 [i_21] [(unsigned char)4])), (arr_17 [i_10] [i_10] [i_10] [i_10])));
            }
            /* LoopNest 3 */
            for (int i_23 = 0; i_23 < 16; i_23 += 1) 
            {
                for (unsigned long long int i_24 = 3; i_24 < 14; i_24 += 3) 
                {
                    for (unsigned char i_25 = 2; i_25 < 14; i_25 += 2) 
                    {
                        {
                            var_46 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((arr_72 [i_24] [i_23]), (arr_15 [(unsigned char)0])))), (((unsigned int) (unsigned short)39515))))) ? (-13) : (((/* implicit */int) (signed char)-69))));
                            var_47 *= ((/* implicit */unsigned short) ((unsigned long long int) (-(min((((/* implicit */int) (unsigned short)39515)), (122880))))));
                            var_48 = ((/* implicit */unsigned int) min((arr_16 [i_21] [i_23] [i_24 + 2] [(unsigned char)5]), (((/* implicit */unsigned char) arr_34 [i_10]))));
                            var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) ((9223372036854775801LL) ^ (((/* implicit */long long int) 4294967295U)))))));
                        }
                    } 
                } 
            } 
            var_50 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_83 [i_10] [i_21] [(signed char)7] [i_10] [i_21] [i_10] [i_10]), (arr_83 [i_10] [(unsigned short)2] [i_10] [i_10] [i_10] [i_10] [i_10])))) || (((/* implicit */_Bool) (unsigned short)28))));
        }
        /* vectorizable */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            arr_89 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((arr_34 [i_10]) ? (((/* implicit */int) arr_34 [i_10])) : (((/* implicit */int) arr_34 [i_10]))));
            arr_90 [i_10] [i_26] [i_10] = ((/* implicit */int) -4887841974584939866LL);
            /* LoopNest 3 */
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                for (unsigned long long int i_28 = 0; i_28 < 16; i_28 += 1) 
                {
                    for (unsigned long long int i_29 = 0; i_29 < 16; i_29 += 1) 
                    {
                        {
                            arr_99 [i_10] [i_26] [i_27] [(_Bool)1] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_70 [i_27] [i_29])) ? (((/* implicit */int) arr_63 [i_10] [i_26] [i_26] [i_26])) : (((/* implicit */int) arr_70 [i_10] [i_10]))));
                            arr_100 [(unsigned char)2] [i_29] [i_10] [i_29] [11ULL] [(_Bool)1] [i_29] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_10] [i_26] [i_10] [(unsigned char)6] [i_28] [i_29])))))));
                        }
                    } 
                } 
            } 
            var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [i_10])))))));
            var_52 = ((/* implicit */signed char) arr_41 [i_10]);
        }
        var_53 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)13291)), (((((/* implicit */_Bool) arr_8 [i_10])) ? (arr_8 [i_10]) : (arr_8 [i_10])))));
    }
}
