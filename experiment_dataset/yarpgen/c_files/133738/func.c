/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133738
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] |= ((/* implicit */unsigned char) var_4);
        var_11 = ((/* implicit */unsigned char) arr_0 [6U]);
    }
    for (signed char i_1 = 3; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) (unsigned char)215);
        arr_5 [16U] [i_1] = ((/* implicit */unsigned short) min(((unsigned char)234), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_1 + 1])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 2; i_2 < 17; i_2 += 2) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 2050736857U)))) + (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */long long int) var_0))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)234)))))) / (arr_4 [i_1 - 1])));
                var_14 = ((/* implicit */unsigned char) arr_6 [i_1 + 1]);
                arr_13 [i_1] [i_2] = (unsigned char)12;
                var_15 = ((/* implicit */unsigned short) arr_12 [i_1 - 3] [i_1 - 3] [i_2 - 1] [i_1 - 3]);
            }
            var_16 |= ((/* implicit */unsigned long long int) arr_4 [i_2]);
        }
    }
    for (signed char i_4 = 3; i_4 < 15; i_4 += 4) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((long long int) arr_16 [i_4])), (((/* implicit */long long int) (unsigned short)11114))))) ? (min((arr_17 [i_4] [i_4]), (((long long int) var_1)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (1283321363U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)115))))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))) : (((/* implicit */int) (unsigned char)22))));
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            arr_22 [i_4] [17U] = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) ((unsigned char) arr_17 [i_4] [i_4]))), (((long long int) (unsigned char)25)))), (((long long int) ((arr_8 [i_5] [i_5] [i_4]) % (var_0))))));
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_1 [11ULL])), (((((/* implicit */_Bool) arr_12 [i_4 + 3] [i_4] [i_4] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1)))) : (4017497418042069502ULL))))))));
            var_19 = ((/* implicit */unsigned int) arr_0 [i_4]);
        }
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                for (unsigned char i_8 = 1; i_8 < 17; i_8 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            arr_33 [i_4] [i_6] [i_6] [(unsigned short)0] [i_7] [i_8] [i_9] |= ((/* implicit */long long int) (-((-(((/* implicit */int) arr_27 [i_9]))))));
                            var_20 = ((/* implicit */unsigned char) 10943757528215498495ULL);
                        }
                        var_21 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_7] [i_6])) ? (((/* implicit */int) arr_1 [i_4 - 2])) : (((/* implicit */int) arr_16 [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_4] [i_4]))) : (((long long int) 7190568834487536999LL))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned short) ((unsigned int) arr_12 [i_4] [i_4] [i_6] [i_6]));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_4]))))) ? ((+(((/* implicit */int) arr_1 [i_10])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)17148))))));
                    var_24 = ((/* implicit */long long int) 1283321363U);
                }
                var_25 = arr_8 [i_4] [i_6] [i_4];
                arr_39 [i_4] = ((/* implicit */unsigned short) arr_26 [i_4] [11U] [i_10]);
            }
            for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)40)), ((((-(489902511707259625LL))) + (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_38 [i_12] [i_12] [i_12] [i_12])), (var_0))))))));
                /* LoopSeq 1 */
                for (unsigned int i_13 = 0; i_13 < 18; i_13 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 2) /* same iter space */
                    {
                        arr_48 [i_4] [(unsigned char)14] [i_12] [i_6] [i_4] = ((/* implicit */unsigned int) max((((unsigned long long int) ((unsigned char) var_10))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 2] [i_4 + 3]))) + (var_9)))));
                        var_27 = ((unsigned short) (unsigned short)21358);
                    }
                    for (unsigned char i_15 = 0; i_15 < 18; i_15 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((unsigned int) (+(16239861408490980039ULL)))) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))))))));
                        var_29 = (signed char)127;
                        arr_52 [i_4] [i_4] [i_4] [i_13] [i_4] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)20805)) ? (((long long int) arr_23 [i_4] [i_4])) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61360))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_45 [i_13] [i_13] [i_12] [i_6] [6U]), (((/* implicit */unsigned short) (signed char)0)))))) : (((((/* implicit */_Bool) 3657875309U)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))))))))));
                    }
                    arr_53 [i_4] [i_12] [i_6] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (-(8649952927971174456LL))))) - (((/* implicit */int) (signed char)-80))));
                    var_30 = ((/* implicit */unsigned short) max((arr_12 [10ULL] [16ULL] [16ULL] [(unsigned short)16]), (((min((var_2), (var_2))) | (((/* implicit */unsigned long long int) arr_10 [i_4]))))));
                    arr_54 [i_4] [i_4] [i_12] [12U] [i_13] = ((/* implicit */unsigned int) arr_7 [i_12] [i_6] [i_4]);
                    var_31 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 185203975U)), (-3268370059653418474LL)))) ^ (((((/* implicit */_Bool) arr_34 [6U] [i_12])) ? (562949953421248ULL) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)11100)))))));
                }
            }
        }
        for (unsigned int i_16 = 0; i_16 < 18; i_16 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_17 = 1; i_17 < 14; i_17 += 2) 
            {
                arr_60 [i_4] [i_4] = ((/* implicit */long long int) arr_11 [i_16] [i_16]);
                var_32 ^= ((/* implicit */unsigned short) arr_42 [i_4] [i_4] [i_16] [(signed char)10] [i_17 + 2]);
                arr_61 [i_4] = ((/* implicit */unsigned char) arr_46 [i_4] [i_4] [i_16] [i_4] [i_17]);
            }
            for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 4) 
            {
                arr_64 [i_4] = ((/* implicit */unsigned short) arr_4 [(unsigned short)5]);
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_58 [i_4 - 3] [i_4 - 3] [i_18] [i_4]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)9]))) : (arr_50 [i_4] [i_4] [i_4] [i_16] [i_16] [i_16] [(unsigned short)16])))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((unsigned int) 1601311554U))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) (unsigned char)48))))))));
                var_34 = ((/* implicit */long long int) (signed char)-127);
                var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)0))))), (max((var_3), (arr_10 [i_18])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_16] [(unsigned char)3] [i_4] [(unsigned char)3]))) : (min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)48384))))), (((((/* implicit */_Bool) 7206049694738795733ULL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_4] [i_16] [i_18] [i_4]))))))))))));
                var_36 ^= ((/* implicit */unsigned long long int) var_10);
            }
            var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) min((2395383032U), (((/* implicit */unsigned int) (signed char)-91))))) ? (max((((/* implicit */unsigned int) (signed char)127)), (2395383054U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_16] [i_16])))))))))));
            arr_65 [i_4] = ((/* implicit */unsigned int) var_2);
        }
    }
    var_38 = ((/* implicit */unsigned char) max((var_7), (((/* implicit */unsigned int) (signed char)80))));
}
