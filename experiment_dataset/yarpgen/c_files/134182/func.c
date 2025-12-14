/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134182
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
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned int) 281580234))), (max((((/* implicit */long long int) 1233219647)), (8619992040645195742LL)))));
                    arr_9 [i_0] [i_0] = ((/* implicit */_Bool) (-((((~(801484568))) ^ (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [(short)11])) : (((/* implicit */int) arr_2 [i_0]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(min((var_9), (((/* implicit */unsigned int) (signed char)-6))))))), (((((/* implicit */_Bool) 0U)) ? (-8418262286766951931LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)11)))))));
                                var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) (~(max(((-2147483647 - 1)), (((/* implicit */int) arr_2 [i_3]))))))) <= (max((max((arr_0 [i_0]), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) arr_5 [i_3 - 1] [i_1 + 1]))))));
                                var_18 = ((/* implicit */short) min((((((/* implicit */int) arr_6 [i_1 + 1] [i_1] [i_2])) * (((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 2] [i_1])))), ((+(((/* implicit */int) arr_6 [i_1 + 1] [i_2] [i_1]))))));
                            }
                        } 
                    } 
                }
                var_19 = ((/* implicit */long long int) max((var_19), (max((min((min((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])), (-7504434504296019670LL))), (((/* implicit */long long int) (unsigned char)174)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (var_14))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_5)), ((unsigned char)174)))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
    /* LoopSeq 3 */
    for (int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_6 = 2; i_6 < 19; i_6 += 1) 
        {
            var_21 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_5])) << ((((-(var_11))) - (3137947744951946998ULL)))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                for (long long int i_8 = 3; i_8 < 18; i_8 += 1) 
                {
                    {
                        var_22 += ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
                        /* LoopSeq 2 */
                        for (signed char i_9 = 2; i_9 < 20; i_9 += 2) 
                        {
                            arr_31 [i_6] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) (unsigned short)16989);
                            var_23 = (-(((/* implicit */int) (unsigned char)174)));
                            var_24 = ((/* implicit */int) (unsigned char)81);
                        }
                        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            var_25 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_10] [(unsigned short)1] [(unsigned short)1] [i_5]))) : (var_3));
                            arr_34 [i_5] [i_5] [i_5] |= (((((_Bool)0) && (((/* implicit */_Bool) arr_33 [i_5] [i_6 + 2] [i_5] [i_8] [i_10])))) && (((((/* implicit */_Bool) arr_18 [i_7])) && (((/* implicit */_Bool) var_3)))));
                        }
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */unsigned short) max((var_26), (var_7)));
        var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_32 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (arr_27 [i_5]) : (arr_27 [i_5]))) >> ((((+(var_14))) + (763699269)))));
    }
    for (int i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 21; i_12 += 4) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) min((-801484568), (((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 2 */
                        for (int i_15 = 0; i_15 < 21; i_15 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned int) min((((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_37 [i_14])) : (((/* implicit */int) var_12)))) + (16))))), (var_14)));
                            var_30 = ((((/* implicit */_Bool) min((((/* implicit */int) var_15)), (min((82159223), (var_14)))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (((var_5) ? (((/* implicit */int) var_0)) : (arr_22 [i_12] [i_12] [i_12] [i_12])))))) : (arr_38 [i_11] [i_12] [i_13]));
                        }
                        for (long long int i_16 = 0; i_16 < 21; i_16 += 2) 
                        {
                            var_31 ^= (~(((/* implicit */int) (short)-11009)));
                            var_32 = ((/* implicit */_Bool) min((((/* implicit */long long int) (((_Bool)1) ? (-1388610435) : (((/* implicit */int) ((((/* implicit */_Bool) (short)23098)) && (((/* implicit */_Bool) 134184960)))))))), ((-9223372036854775807LL - 1LL))));
                            var_33 = ((/* implicit */unsigned long long int) ((((long long int) 4436826650404697200LL)) >= (((/* implicit */long long int) min((arr_27 [1LL]), (((/* implicit */unsigned int) arr_17 [i_11])))))));
                            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((_Bool) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_26 [i_12] [i_16] [i_13] [14])), (var_2)))), (arr_27 [i_12])))))));
                        }
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) var_11))));
        var_36 = ((/* implicit */unsigned char) (signed char)-10);
        var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (_Bool)1))));
    }
    for (int i_17 = 0; i_17 < 21; i_17 += 2) /* same iter space */
    {
        var_38 = ((/* implicit */long long int) min((801484568), (min((((((/* implicit */int) (signed char)102)) - (((/* implicit */int) (unsigned char)196)))), (min((arr_16 [i_17]), (((/* implicit */int) var_5))))))));
        arr_50 [i_17] = (((!(((/* implicit */_Bool) var_6)))) ? (((1256792819U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)10547))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -82159224)) && (((/* implicit */_Bool) (signed char)0)))))));
        arr_51 [i_17] [i_17] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */int) var_5)) * (arr_16 [i_17]))), (((((/* implicit */_Bool) var_13)) ? (arr_22 [i_17] [i_17] [i_17] [i_17]) : (((/* implicit */int) var_2)))))))));
        /* LoopSeq 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_19 = 0; i_19 < 21; i_19 += 1) 
            {
                for (unsigned int i_20 = 3; i_20 < 19; i_20 += 1) 
                {
                    for (short i_21 = 0; i_21 < 21; i_21 += 2) 
                    {
                        {
                            var_39 = ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) max((max((var_4), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1566881440)) || (((/* implicit */_Bool) 1056964608)))))))));
                            arr_68 [i_17] &= ((/* implicit */signed char) max((((arr_61 [i_17] [i_18] [i_17] [6LL]) * (arr_61 [i_17] [i_18] [i_21] [0]))), (((/* implicit */unsigned int) (~(arr_65 [i_20 - 3] [i_20 - 1] [i_20 + 2]))))));
                        }
                    } 
                } 
            } 
            var_40 ^= ((/* implicit */unsigned short) var_10);
            var_41 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((max((((/* implicit */unsigned int) arr_43 [i_17] [i_17])), (275126070U))), (((/* implicit */unsigned int) var_1))))), (max((((((/* implicit */long long int) ((/* implicit */int) var_2))) - (-413266690651361022LL))), (((/* implicit */long long int) (short)-13155))))));
            /* LoopNest 2 */
            for (signed char i_22 = 1; i_22 < 20; i_22 += 1) 
            {
                for (long long int i_23 = 0; i_23 < 21; i_23 += 2) 
                {
                    {
                        var_42 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)9))));
                        var_43 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_17] [i_18] [i_22])) % (((/* implicit */int) var_0))))) ? (arr_28 [i_17] [i_18] [i_22] [i_23] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_17] [i_18] [i_22])) == (((/* implicit */int) (_Bool)1))))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_24 = 3; i_24 < 20; i_24 += 2) 
                        {
                            var_44 += ((/* implicit */unsigned short) ((min((var_3), (((/* implicit */long long int) (!((_Bool)1)))))) & (((/* implicit */long long int) max((arr_25 [i_22 - 1] [i_17] [i_22] [i_24] [i_24 - 2] [i_24]), (((/* implicit */int) arr_73 [i_22 - 1] [(_Bool)1] [i_22 + 1] [i_24 - 1])))))));
                            var_45 = ((/* implicit */int) (-(var_9)));
                        }
                        for (unsigned short i_25 = 0; i_25 < 21; i_25 += 1) 
                        {
                            var_46 = ((/* implicit */unsigned long long int) max((var_46), (min((min(((~(0ULL))), (((/* implicit */unsigned long long int) ((var_9) >> (((((/* implicit */int) (short)9323)) - (9308)))))))), (((/* implicit */unsigned long long int) var_13))))));
                            var_47 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174))) : (var_13))))))));
                        }
                    }
                } 
            } 
        }
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
        {
            var_48 = ((/* implicit */int) 2199022993408LL);
            var_49 = ((/* implicit */_Bool) arr_80 [i_17] [i_17] [i_26]);
        }
    }
}
