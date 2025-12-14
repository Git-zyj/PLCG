/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186127
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0]))))) / (var_2))), (((((arr_0 [i_0]) / (arr_0 [i_0]))) / (((/* implicit */unsigned long long int) var_10))))));
        var_11 = ((/* implicit */long long int) (~((~(arr_0 [i_0])))));
    }
    var_12 = ((/* implicit */signed char) ((short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4680))) : (max((((/* implicit */long long int) var_1)), (var_3))))));
    /* LoopSeq 3 */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_13 = arr_3 [i_1] [i_1];
        var_14 = ((((/* implicit */_Bool) ((min((6102821277422863514LL), (var_3))) / (-1071301904225932814LL)))) ? (min((((/* implicit */unsigned long long int) ((((arr_4 [i_1]) + (2147483647))) << (((360658406U) - (360658406U)))))), (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_1])))));
        arr_5 [i_1] &= ((/* implicit */unsigned short) ((min((((/* implicit */long long int) arr_3 [i_1] [i_1])), ((-9223372036854775807LL - 1LL)))) ^ (((long long int) arr_4 [i_1]))));
    }
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) var_10)), (((unsigned int) var_9)))))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_7 [i_2]) : (arr_7 [i_2])))));
        /* LoopSeq 4 */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) ((((-5664279358080252271LL) + (9223372036854775807LL))) << (((((-9) + (30))) - (20)))));
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (-(((/* implicit */int) var_4)))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_19 = ((/* implicit */_Bool) var_9);
                /* LoopSeq 3 */
                for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    var_20 = ((/* implicit */unsigned int) arr_7 [i_2]);
                    var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) arr_19 [i_2] [i_4] [i_4] [i_6] [i_4] [i_6]))))), ((+(-8672245025657057564LL)))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) -9223372036854775794LL)) : (((((unsigned long long int) 144115188075855872ULL)) >> (((((((/* implicit */_Bool) (short)-20100)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))) + (89)))))));
                }
                for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    var_23 = ((/* implicit */signed char) (((((~(((var_1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))) + (2147483647))) >> ((((~((~(((/* implicit */int) (unsigned short)6693)))))) - (6686)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((_Bool) var_0)) ? (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2]))))) : (((/* implicit */long long int) arr_21 [i_8] [i_7] [i_4] [i_2]))));
                        var_25 = ((/* implicit */_Bool) ((unsigned short) arr_15 [i_2] [i_4]));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_26 [i_2] [i_4] [i_4] [i_7] [i_9] = ((/* implicit */long long int) arr_19 [i_2] [i_2] [(_Bool)0] [i_2] [i_7] [i_2]);
                        var_26 = ((((/* implicit */unsigned int) var_7)) > (((arr_22 [i_2] [i_4] [i_5] [i_7] [i_9]) >> (((((/* implicit */int) arr_23 [i_4] [i_7] [i_9])) + (21554))))));
                    }
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2] [i_4] [i_4] [i_10 - 1] [i_10 - 1] [i_2]))) : (var_3)))) && (((/* implicit */_Bool) -9223372036854775792LL))));
                        var_28 &= ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned short)8064)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)270)) && (((/* implicit */_Bool) -9223372036854775792LL)))))) : (arr_6 [i_10 - 1]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_27 [i_10] [i_10 - 1] [i_10] [i_10 - 1] [i_10] [i_10 - 1])), (arr_19 [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1]))))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)112)))) + ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) -2147483645)) : (1152921470247108608ULL)))))));
                    }
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1691377117)) ? (arr_30 [i_4] [i_11] [i_5] [i_4] [i_2]) : ((-(var_2))))) <= (((((/* implicit */unsigned long long int) var_9)) + (var_2))))))));
                    var_31 = ((/* implicit */long long int) (-((~(((/* implicit */int) arr_24 [i_2]))))));
                    arr_33 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) ((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_14 [i_11] [i_5] [i_2])))) < (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))));
                }
                var_32 = var_3;
                arr_34 [(unsigned char)18] [i_2] [8ULL] [(unsigned short)2] = ((/* implicit */int) var_2);
            }
            /* vectorizable */
            for (long long int i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    for (long long int i_14 = 1; i_14 < 17; i_14 += 4) 
                    {
                        {
                            arr_43 [i_2] [i_2] [i_4] [i_12] [i_12] [i_13] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)68))) / (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_9)))))) : ((+(1407737238U)))));
                            arr_44 [i_14] [i_13 - 1] [i_4] [i_4] [1ULL] = ((/* implicit */long long int) var_6);
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned long long int) var_8);
                arr_45 [i_12] [i_12] = ((/* implicit */_Bool) (~(arr_4 [i_2])));
            }
            var_34 = ((/* implicit */signed char) ((var_8) >> (((/* implicit */int) arr_42 [i_4] [i_4] [i_4] [i_4] [i_4] [i_2] [i_2]))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_35 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((int) -369120500))) : (((arr_46 [i_2] [i_15]) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
            arr_48 [i_2] [i_2] [i_2] = ((/* implicit */int) (((-(8193870784840131787ULL))) == ((((_Bool)1) ? (max((10111864217373558619ULL), (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
        }
        for (unsigned short i_16 = 0; i_16 < 21; i_16 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 21; i_17 += 4) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        arr_57 [i_2] [i_16] [i_17] [i_18] &= ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) arr_42 [i_18] [i_18] [i_17] [i_16] [i_16] [i_2] [i_2])), (var_2)))));
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65507)) ? (var_8) : (((var_7) % (((((/* implicit */_Bool) var_10)) ? (var_8) : (var_8)))))));
                        var_37 = ((/* implicit */short) max((((((/* implicit */int) arr_42 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) == (((/* implicit */int) arr_42 [i_2] [i_16] [i_17] [i_18] [i_18] [i_17] [i_17])))), (max((arr_42 [i_16] [i_18] [i_17] [i_17] [i_16] [i_17] [i_2]), (arr_42 [i_2] [i_2] [i_2] [6U] [i_2] [i_2] [i_2])))));
                        var_38 = ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) var_10)))) <= (((/* implicit */unsigned long long int) ((8576939347674892611LL) & (((/* implicit */long long int) var_8))))))))));
                    }
                } 
            } 
            var_39 = ((/* implicit */long long int) (((((~(((/* implicit */int) (((-2147483647 - 1)) == (((/* implicit */int) var_1))))))) + (2147483647))) >> (((((/* implicit */int) ((signed char) arr_7 [i_16]))) + (116)))));
            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) arr_6 [i_2]))));
            /* LoopSeq 2 */
            for (unsigned short i_19 = 0; i_19 < 21; i_19 += 1) 
            {
                var_41 = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_19 [9ULL] [i_2] [i_16] [i_16] [i_16] [i_19])) ? (((/* implicit */long long int) 3831718207U)) : (var_3))) / (((((/* implicit */_Bool) arr_14 [i_2] [i_19] [i_19])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) << (((9223372036854775795LL) - (9223372036854775748LL)))));
                var_42 = ((/* implicit */long long int) ((((int) (unsigned short)18394)) * ((~(((-1) ^ (((/* implicit */int) (unsigned short)47149))))))));
                arr_60 [i_19] [i_16] [i_2] [i_2] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2])))))) < (((((-9223372036854775792LL) + (9223372036854775807LL))) << (((arr_12 [i_2]) - (2074273734))))));
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_43 -= ((/* implicit */_Bool) min((((var_9) & (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_16]))))), (((/* implicit */long long int) ((var_7) < (((/* implicit */int) var_5)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 4) 
                {
                    arr_68 [i_2] [(_Bool)1] = ((/* implicit */int) ((((max((2362806833592055615LL), (((/* implicit */long long int) -1)))) + (((((var_3) + (9223372036854775807LL))) << (((1407737238U) - (1407737238U))))))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10)))));
                    var_44 = ((/* implicit */long long int) (~(((((arr_30 [i_16] [i_16] [i_20] [i_21] [i_16]) % (((/* implicit */unsigned long long int) var_9)))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-2147483645))))))));
                    arr_69 [i_20] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_16 [i_20] [i_2] [i_20] [i_21])) : (((/* implicit */int) (unsigned short)8059))))) & (((unsigned long long int) var_0))));
                }
            }
            /* LoopNest 3 */
            for (unsigned int i_22 = 0; i_22 < 21; i_22 += 3) 
            {
                for (long long int i_23 = 0; i_23 < 21; i_23 += 4) 
                {
                    for (unsigned short i_24 = 0; i_24 < 21; i_24 += 4) 
                    {
                        {
                            arr_80 [i_2] [i_2] [i_2] [i_23] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)28672)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_28 [i_22])))), (((int) arr_28 [i_2]))));
                            var_45 = ((/* implicit */unsigned long long int) 9223372036854775791LL);
                        }
                    } 
                } 
            } 
        }
        arr_81 [i_2] [i_2] = (+(((/* implicit */int) ((((/* implicit */_Bool) -4)) && (((/* implicit */_Bool) arr_64 [i_2] [i_2] [i_2]))))));
    }
    /* vectorizable */
    for (unsigned char i_25 = 0; i_25 < 21; i_25 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            for (long long int i_27 = 1; i_27 < 20; i_27 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_28 = 0; i_28 < 21; i_28 += 1) 
                    {
                        for (unsigned short i_29 = 0; i_29 < 21; i_29 += 4) 
                        {
                            {
                                arr_93 [i_25] [i_25] [i_25] [i_25] [i_28] [i_29] [i_29] = ((/* implicit */short) ((((/* implicit */int) arr_61 [i_25] [(short)12] [i_27] [i_27])) / (586857627)));
                                var_46 = var_1;
                                var_47 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)25)) ? ((~(549747425280ULL))) : (((/* implicit */unsigned long long int) var_9))));
                                var_48 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)10))));
                                var_49 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                    arr_94 [i_25] = ((/* implicit */int) 18446743523962126338ULL);
                }
            } 
        } 
        arr_95 [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((2624591148363475131LL) ^ (((/* implicit */long long int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_25]))) : (((((/* implicit */_Bool) arr_9 [17ULL] [17ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_25]))) : (arr_22 [i_25] [i_25] [i_25] [i_25] [i_25])))));
        var_50 = (-(arr_58 [i_25] [i_25] [i_25]));
    }
    var_51 = (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (1842325725))))) : ((-(var_3))))) & (((((/* implicit */long long int) var_10)) / (min((((/* implicit */long long int) var_5)), (var_3))))));
}
