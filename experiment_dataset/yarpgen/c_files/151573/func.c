/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151573
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_12 [i_4] [i_1] [(unsigned short)16] [i_4] [(signed char)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((9223372036854775808ULL), (9223372036854775808ULL))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))) ? (((((/* implicit */_Bool) arr_11 [19ULL] [i_3] [i_3 - 2] [(signed char)15] [i_3 - 2])) ? (((/* implicit */int) arr_10 [i_3] [i_3] [i_3 - 1] [i_3] [i_3 + 1])) : (((/* implicit */int) arr_10 [i_3] [i_3 + 1] [i_3 + 2] [i_3] [i_3 - 1])))) : (((/* implicit */int) ((arr_2 [i_4 - 3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 2] [i_3 - 1]))))))));
                                var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_4 + 1] [i_3 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_4 [i_4 - 2] [i_3 - 2] [i_2 - 1])) : (((/* implicit */int) var_0)))) - (((((/* implicit */_Bool) arr_4 [i_4 - 1] [i_3 + 2] [i_2 + 2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_4 [i_4 + 1] [i_3 - 1] [i_2 + 1]))))));
                                var_15 ^= ((/* implicit */signed char) (unsigned short)40000);
                                var_16 = var_6;
                            }
                        } 
                    } 
                    var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((+(var_6)))))) ? (((((((/* implicit */int) min((var_12), (arr_9 [i_0] [i_1] [11ULL] [i_2 + 1])))) + (2147483647))) << (((((/* implicit */int) arr_7 [i_2 + 1])) - (12))))) : ((~(((/* implicit */int) var_1))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (arr_13 [i_5 + 1])));
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 3; i_7 < 9; i_7 += 4) /* same iter space */
                {
                    arr_23 [(signed char)9] [(unsigned short)9] [i_7 + 2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [i_5 + 1] [(unsigned short)13] [7ULL] [i_7])), (min((arr_17 [i_6]), (((/* implicit */unsigned long long int) arr_6 [(unsigned short)16]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6 + 1])) ? (((/* implicit */int) arr_7 [i_6 - 1])) : (((/* implicit */int) arr_7 [i_6 - 1])))))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((min((arr_25 [i_5] [i_8] [i_7] [i_7 + 3] [6ULL] [i_9]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_6] [i_6 + 1] [i_6] [i_8] [i_9]))))))) % (12111171003349836300ULL))))));
                                arr_28 [i_9] [i_8] [i_8] [i_8] [i_5 - 1] &= ((/* implicit */signed char) max((((/* implicit */int) var_11)), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_7 + 1])))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_0), (arr_22 [i_5] [i_7 - 2] [i_6 + 1] [i_5 + 1])))) ? (((((/* implicit */int) arr_22 [i_5] [i_7 + 2] [i_6 - 1] [i_5 - 1])) | (((/* implicit */int) arr_22 [i_5] [i_7 - 3] [i_6 - 1] [i_5 + 1])))) : (((/* implicit */int) max((arr_22 [i_5] [i_7 + 3] [i_6 + 1] [i_5 + 1]), (arr_22 [1ULL] [i_7 + 3] [i_6 + 1] [i_5 + 1]))))));
                }
                for (unsigned long long int i_10 = 3; i_10 < 9; i_10 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    arr_31 [i_5] [i_6] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned short) arr_19 [i_5] [i_6] [i_10]))))) ? (((((/* implicit */_Bool) var_8)) ? (arr_18 [i_10 + 3] [i_6 + 1] [i_5 + 1]) : (15470995072063726160ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? ((-(((/* implicit */int) ((2975749001645825476ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) : (((/* implicit */int) (!(((15470995072063726161ULL) == (9223372036854775798ULL))))))));
                    arr_32 [i_10] [i_10] = ((/* implicit */unsigned long long int) var_13);
                }
                for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 3) 
                {
                    arr_35 [i_11 - 2] [i_5] [i_5] = min((min((min((arr_3 [(unsigned short)7] [i_6]), (arr_20 [i_5] [i_11]))), (var_11))), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_17 [i_5]))))));
                    arr_36 [(signed char)0] [(signed char)0] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)10597))));
                    var_22 += ((/* implicit */signed char) (unsigned short)8160);
                    arr_37 [i_11] [i_5] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) max((arr_24 [i_5] [(signed char)0] [i_11 - 2]), (((/* implicit */unsigned long long int) var_12))))))));
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_5 + 1] [i_6 - 1])) - (((/* implicit */int) arr_20 [i_5 - 1] [i_6 + 1]))))) ? (((((/* implicit */_Bool) (unsigned short)40000)) ? (((((/* implicit */_Bool) (signed char)20)) ? (arr_29 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (arr_13 [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)10603)) - (((/* implicit */int) (unsigned short)54933))))))))));
                }
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2975749001645825460ULL)) ? (((/* implicit */int) (unsigned short)10603)) : (((/* implicit */int) (signed char)95))));
            }
        } 
    } 
    var_25 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (((((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) - (((unsigned long long int) var_2)))));
}
