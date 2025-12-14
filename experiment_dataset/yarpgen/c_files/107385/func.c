/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107385
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            arr_6 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((var_12) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))), (arr_4 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) (unsigned char)58))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) < (arr_1 [i_1] [i_1])))) : (((((/* implicit */int) var_0)) & (((/* implicit */int) var_14)))))) : (((((/* implicit */int) ((var_8) != (arr_5 [i_0] [10ULL] [i_1 + 1])))) - (((((/* implicit */int) var_15)) + (((/* implicit */int) var_17))))))));
            arr_7 [i_0] [i_0] [4ULL] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 + 1] [i_1]);
            var_18 *= var_15;
        }
        for (unsigned char i_2 = 4; i_2 < 7; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) (~(arr_9 [i_0] [i_2])));
            var_20 = ((var_4) | (((unsigned long long int) ((unsigned long long int) var_15))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_3 = 4; i_3 < 8; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_5 = 1; i_5 < 10; i_5 += 2) /* same iter space */
                {
                    arr_16 [i_4] [i_3 + 1] = ((/* implicit */unsigned long long int) var_0);
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [5ULL] [i_0] [5ULL] [i_4] [i_5 + 1])) && (((/* implicit */_Bool) (+(arr_9 [i_5] [i_4]))))));
                }
                for (unsigned char i_6 = 1; i_6 < 10; i_6 += 2) /* same iter space */
                {
                    var_22 = ((((/* implicit */_Bool) arr_17 [3ULL] [1ULL] [i_4] [i_4] [3ULL] [1ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((var_5) != (var_11)))))) : (max((arr_9 [i_3 + 3] [i_6 + 1]), (((arr_1 [i_6 - 1] [i_0]) + (arr_12 [i_0] [6ULL] [i_0]))))));
                    arr_19 [i_0] [i_3] [i_0] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)0))));
                }
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(((var_9) ^ (((((/* implicit */_Bool) 10675800987391713578ULL)) ? (5156058803138388010ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))))))))))));
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (5156058803138388000ULL)));
                arr_20 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_17)))) & (var_9)));
                var_25 = arr_14 [i_0] [i_0] [(unsigned char)2] [i_0] [i_0];
            }
            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_14 [i_3] [i_3 - 1] [i_0] [i_0] [0ULL]);
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) ((10419000395115462333ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3 + 2])))))) > ((+(((/* implicit */int) arr_2 [i_3 + 1]))))));
            /* LoopSeq 3 */
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                arr_24 [i_0] [7ULL] [7ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_3 + 1]))) && (((/* implicit */_Bool) min((arr_22 [i_3 + 3] [i_3 + 3] [i_3 + 3]), (var_11))))));
                var_27 = ((/* implicit */unsigned long long int) ((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) > (((arr_18 [i_7] [i_7] [i_3 + 3] [i_0]) | ((-(var_6)))))));
                var_28 *= ((/* implicit */unsigned char) ((unsigned long long int) 14272056582332440220ULL));
            }
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                arr_28 [i_8] [i_8] = arr_1 [i_8] [(unsigned char)1];
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 3) 
                    {
                        {
                            var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [0ULL] [i_3 - 2])) ? (((unsigned long long int) ((11488845571632804161ULL) + (var_12)))) : (var_8)));
                            var_30 = (+(var_9));
                            arr_33 [i_8] [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_10 + 2] [i_9 - 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) var_16)) ? (5156058803138388006ULL) : (var_9))))) == ((+(arr_3 [i_8])))));
                        }
                    } 
                } 
            }
            for (unsigned char i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 3; i_12 < 9; i_12 += 3) 
                {
                    for (unsigned long long int i_13 = 2; i_13 < 9; i_13 += 3) 
                    {
                        {
                            var_31 += ((/* implicit */unsigned char) ((15054478631571172031ULL) << (0ULL)));
                            var_32 = var_15;
                            var_33 -= arr_11 [i_0] [i_0];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 2; i_14 < 9; i_14 += 4) 
                {
                    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        {
                            var_34 = var_13;
                            arr_47 [i_11] [i_11] [i_11] [(unsigned char)1] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)28)) ? (10307399186798489788ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28)))));
                        }
                    } 
                } 
            }
        }
        for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 1) 
        {
            var_35 = ((/* implicit */unsigned long long int) max((var_35), (var_5)));
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 11; i_17 += 3) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 4) 
                {
                    {
                        var_36 += ((/* implicit */unsigned long long int) ((18409516313149005515ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47)))));
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)115)) << (((15524678208864676822ULL) - (15524678208864676800ULL)))));
                        var_38 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0] [i_17] [i_17] [i_18])) ? (arr_36 [(unsigned char)1] [i_16] [i_16] [i_16] [i_16] [i_16]) : (var_4)))));
                        arr_56 [i_0] [i_16] [i_17] [i_18] [i_16] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_17] [i_16] [i_16] [i_16] [i_16] [i_16]))) <= (var_16))))) != (var_3)))) == (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)211))) : (0ULL)))))));
                    }
                } 
            } 
            arr_57 [i_0] [i_16] = (+(arr_9 [i_0] [i_16]));
            arr_58 [i_16] = ((unsigned long long int) (unsigned char)255);
        }
    }
    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((unsigned long long int) var_0))))) ? (((((/* implicit */_Bool) ((13494268343373775684ULL) | (15648500316754437142ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))))) : (var_16))) : (var_6)));
}
