/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172635
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] [19LL] = arr_1 [i_0];
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [(short)14] [i_0]))))), (((((arr_0 [i_0] [i_0]) << (((var_11) - (223008116120977785LL))))) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1226632166364085870LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_6 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_5 [i_1]) : (((/* implicit */long long int) 4294967274U))))) : (var_1))) < (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [16LL] [i_1 - 1])))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (var_1)));
            arr_11 [i_2] [i_1] = ((/* implicit */long long int) arr_9 [i_1]);
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_18 ^= ((/* implicit */unsigned int) var_1);
                        var_19 += ((((/* implicit */_Bool) (short)21203)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_9 [i_3]), (((short) arr_18 [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1])))))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned short)127))))), (var_16))));
                        /* LoopSeq 4 */
                        for (short i_5 = 1; i_5 < 11; i_5 += 4) /* same iter space */
                        {
                            var_20 += ((/* implicit */short) ((((arr_1 [i_1]) >> (((min((arr_6 [i_1]), (4294967262U))) - (151141222U))))) >= (((((/* implicit */_Bool) max((4294967247U), (((/* implicit */unsigned int) (unsigned short)38046))))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)21182))) : (arr_6 [6ULL]))))))));
                            arr_22 [i_1] [6ULL] [i_4] [i_5] = ((/* implicit */unsigned int) arr_20 [i_1]);
                        }
                        /* vectorizable */
                        for (short i_6 = 1; i_6 < 11; i_6 += 4) /* same iter space */
                        {
                            var_21 = ((unsigned long long int) 18446744073709551597ULL);
                            var_22 |= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 41U)) : (arr_5 [i_1 + 2]))));
                            arr_27 [i_1] [i_2] [0U] [i_4] [0U] [i_4] [i_6] = ((/* implicit */short) ((unsigned short) arr_9 [i_1]));
                        }
                        for (short i_7 = 1; i_7 < 11; i_7 += 4) /* same iter space */
                        {
                            arr_31 [i_1] [i_1] [(short)3] [10U] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_26 [i_1] [2U] [2U] [i_1 - 2] [i_1] [8ULL] [i_1])) : (var_15))))) ? ((~(((((/* implicit */_Bool) arr_29 [i_1 + 1] [i_2] [i_2] [i_3] [i_4] [i_7])) ? (((/* implicit */unsigned long long int) var_13)) : (var_8))))) : (((/* implicit */unsigned long long int) 144115188075855840LL))));
                            arr_32 [(unsigned short)12] [(unsigned short)12] [i_3] [2ULL] [i_3] [i_1] = 10704962157881815182ULL;
                            var_23 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (1514950674U)));
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 12; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) min((var_24), (((long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) arr_9 [i_3]))))) ? (((/* implicit */unsigned long long int) arr_34 [(short)0] [i_4] [i_3] [(short)4] [10ULL])) : (((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_4] [i_4] [5U] [i_4]))))))))));
                            arr_36 [i_1] [i_8 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_20 [i_1])))) : (((((/* implicit */_Bool) arr_10 [8ULL])) ? (((/* implicit */long long int) arr_34 [i_2] [i_4] [i_1] [i_2] [i_1])) : (((((/* implicit */_Bool) arr_19 [i_1] [i_2] [i_1] [i_4] [i_1] [i_3] [i_3])) ? (arr_23 [i_1] [i_3] [i_1 - 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
                        }
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) var_5))))))));
            arr_37 [i_1] = ((/* implicit */unsigned short) ((var_2) >> (min((((/* implicit */unsigned long long int) ((4853135599141682731ULL) == (var_15)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (var_2)))))));
        }
        for (unsigned long long int i_9 = 4; i_9 < 12; i_9 += 1) 
        {
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(arr_23 [i_1] [8U] [i_1] [(short)12])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21208))) : (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11701))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_23 [i_1] [i_1] [i_1] [8LL])))) & (((arr_1 [i_9]) << (((var_11) - (223008116120977745LL))))))))))));
            var_27 = var_13;
        }
    }
    var_28 = ((/* implicit */short) var_1);
}
