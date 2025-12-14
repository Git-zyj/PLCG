/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16523
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [5ULL] = (+((~(arr_0 [i_0] [i_0]))));
        var_19 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) & (arr_0 [i_0] [i_0]))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        var_20 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned char)196)), (var_12)));
        arr_6 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_1 + 3])) ? (((/* implicit */int) arr_4 [i_1 + 3])) : (((/* implicit */int) var_16)))) - (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 4])) < (((/* implicit */int) var_7)))))));
    }
    for (int i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    var_21 = ((/* implicit */short) max((((/* implicit */long long int) (+(min((var_5), (((/* implicit */int) var_16))))))), (arr_7 [10ULL] [i_3])));
                    var_22 = ((/* implicit */long long int) (~((((!(((/* implicit */_Bool) arr_13 [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2] [(short)2] [i_4]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3])) && (((/* implicit */_Bool) var_10)))))))));
                }
            } 
        } 
        arr_16 [i_2 - 2] = ((/* implicit */short) ((9223372036854775799LL) != ((+(min((-9223372036854775800LL), (((/* implicit */long long int) var_8))))))));
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 12; i_7 += 2) 
                {
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) var_16)) / (((/* implicit */int) arr_22 [i_2 - 1] [i_5] [i_6] [i_7]))))) / (9223372036854775799LL)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_8 = 1; i_8 < 12; i_8 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_6])) ? (((/* implicit */unsigned long long int) -9223372036854775788LL)) : (12859234055323893964ULL)));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_9 [i_2 - 1]))));
                        }
                        /* vectorizable */
                        for (short i_9 = 3; i_9 < 13; i_9 += 2) 
                        {
                            var_26 = ((/* implicit */int) (-(arr_12 [i_2 - 1] [i_7 - 1])));
                            var_27 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [(unsigned char)4] [i_2 - 2] [i_6] [(short)5] [i_2 - 2] [i_9 - 2]))) == (((((/* implicit */_Bool) arr_19 [(unsigned char)1])) ? (arr_9 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_2 + 1] [i_2] [i_2])))))));
                            var_28 = ((((/* implicit */_Bool) arr_26 [i_2 + 1] [i_7 + 1] [i_9] [i_9 - 2] [i_9 - 2])) ? (((/* implicit */int) arr_4 [i_2 + 1])) : (((/* implicit */int) arr_4 [i_2 + 1])));
                        }
                    }
                } 
            } 
        } 
    }
    for (int i_10 = 0; i_10 < 24; i_10 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_11 = 2; i_11 < 23; i_11 += 1) 
        {
            var_29 = ((/* implicit */int) var_2);
            arr_40 [i_10] [i_10] = ((/* implicit */_Bool) var_0);
        }
        for (int i_12 = 0; i_12 < 24; i_12 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_13 = 3; i_13 < 22; i_13 += 4) 
            {
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_46 [i_10] [i_10] [i_13 + 1])) - (var_0)));
                arr_48 [i_10] [i_12] [i_13 + 2] |= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (11417417325781930897ULL) : (((/* implicit */unsigned long long int) arr_47 [i_13 - 1] [i_13] [i_13 - 1] [i_13]))));
            }
            var_31 = min((((arr_46 [i_10] [i_10] [i_12]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28672))) : (3404447972177466735ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_46 [i_10] [i_10] [i_12])) : (((/* implicit */int) arr_46 [(unsigned char)13] [i_12] [i_12]))))));
        }
        arr_49 [i_10] = ((/* implicit */short) var_2);
        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(9223372036854775788LL)))) ? ((+(((/* implicit */int) var_9)))) : ((-(((/* implicit */int) max((arr_41 [i_10] [i_10]), (((/* implicit */short) (unsigned char)30)))))))));
    }
    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((min((((/* implicit */unsigned long long int) var_4)), (var_18))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) -9223372036854775788LL)) : (var_12))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min(((short)32767), (((/* implicit */short) (_Bool)0))))), (var_3))))));
    var_34 = ((/* implicit */short) var_13);
}
