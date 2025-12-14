/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153045
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
    var_13 = ((short) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_11))))), (var_0)));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [(signed char)10]) + (((/* implicit */long long int) 3953497117U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [8U]))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)134)) >= (((/* implicit */int) (signed char)(-127 - 1))))))))), ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [12LL]))) | (66060288U))))))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_5 [i_0 + 2] [i_1] [i_0])))))) <= (((unsigned int) arr_6 [i_0] [i_0 - 1]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_3))) - (arr_9 [i_4]))), (((/* implicit */long long int) var_10))))) ? (((max((((/* implicit */unsigned long long int) var_8)), (arr_6 [i_4] [i_1]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_4] [(unsigned char)8] [i_2] [i_4] [i_4] [i_4])) : (((/* implicit */int) (short)19))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((var_12) & (((/* implicit */int) arr_8 [i_4] [0] [i_2 + 3] [0] [i_1] [i_4]))))) <= (((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */unsigned int) arr_2 [i_4])) : (var_4)))))))))));
                            var_17 |= ((/* implicit */unsigned int) max((((arr_5 [(short)0] [i_3 + 1] [i_4]) | (arr_5 [i_0] [i_3 - 1] [i_4]))), (((((((/* implicit */unsigned long long int) arr_2 [i_4])) * (arr_7 [i_0] [i_1] [i_2] [i_3] [(unsigned short)11]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)4095)) < (arr_2 [i_4])))))))));
                        }
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */short) (+(((min((((/* implicit */unsigned long long int) var_5)), (arr_6 [i_3] [i_3 + 1]))) / (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
                            var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((arr_6 [i_0] [i_1]) >> (((((/* implicit */int) var_7)) + (5337))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_1] [i_0 + 1]))))) & (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                            var_20 ^= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_5] [0U] [i_2] [i_2] [i_1] [10ULL] [i_5])) >> (((((/* implicit */int) arr_3 [i_5])) - (20992)))))) * (min((arr_7 [0] [i_1] [i_2] [i_3] [i_5]), (arr_13 [i_1] [(unsigned short)7] [(signed char)6])))))) ? (((((/* implicit */_Bool) arr_10 [i_5] [i_0 + 2] [i_1] [i_0 + 2])) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_1] [i_2 + 3] [i_3] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [(signed char)12] [i_0] [i_0] [i_0] [i_5]))) : (arr_5 [i_0] [8] [i_5]))) : ((+(arr_5 [(signed char)4] [i_1] [i_5]))))) : (((/* implicit */unsigned long long int) var_2)));
                        }
                    }
                } 
            } 
            arr_16 [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((33554424) ^ (((/* implicit */int) arr_12 [i_0] [i_0] [i_1])))) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)2554)) : (33554424)))))) != (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) + (-8LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2))))))));
            var_21 = min((0), (((/* implicit */int) (short)2554)));
        }
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_14 [i_0] [i_6])), (((((/* implicit */long long int) 32760)) | (6444893880149010124LL)))))) & (((((/* implicit */unsigned long long int) arr_0 [0])) | (((arr_13 [i_6] [i_0] [9U]) ^ (((/* implicit */unsigned long long int) arr_10 [i_0 - 1] [i_0] [(short)0] [i_6]))))))));
            arr_19 [i_0] [i_6] = ((/* implicit */int) max((((arr_6 [i_0] [i_6]) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6] [i_0 - 1] [i_6]))) & (arr_9 [i_0])))))), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0]))));
            var_23 = arr_15 [(signed char)4] [(unsigned short)7] [i_0] [i_6] [(signed char)4] [i_6] [i_0];
            var_24 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_18 [i_0 + 1] [i_0 + 1] [i_6])) > (arr_7 [6] [12U] [i_6] [i_6] [i_6]))))) + (((((/* implicit */_Bool) arr_14 [i_0] [i_6])) ? (min((((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_6])), (arr_5 [i_0] [i_6] [i_0]))) : (max((((/* implicit */unsigned long long int) var_1)), (arr_13 [i_0] [i_0] [i_6]))))));
        }
        for (int i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))) < (arr_0 [i_7]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1]))) >= (arr_0 [i_7]))))) : (((((/* implicit */_Bool) 0ULL)) ? (arr_0 [i_7]) : (arr_0 [i_7]))))))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (3741672048901467203ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33252)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_7] [5LL])) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))) ^ (arr_20 [i_7] [i_7] [i_7])))) : (((((/* implicit */_Bool) (unsigned short)52548)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [(signed char)2] [i_7])))))))) : (((unsigned long long int) ((unsigned short) arr_17 [i_0] [i_0 + 2] [i_0 + 2])))));
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_13 [i_7] [i_0] [i_0]))));
            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [9ULL] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))) ? (arr_5 [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_7])))))))));
        }
    }
    for (int i_8 = 0; i_8 < 18; i_8 += 3) 
    {
        var_29 = ((/* implicit */unsigned int) arr_23 [i_8]);
        var_30 = ((/* implicit */int) var_6);
        arr_25 [i_8] [i_8] = ((/* implicit */long long int) var_2);
    }
    for (int i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                for (int i_12 = 2; i_12 < 14; i_12 += 2) 
                {
                    {
                        var_31 = (i_9 % 2 == zero) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_12 - 2] [i_12 - 2] [i_12] [i_12 - 1] [2] [i_12 + 1])) ? (((arr_24 [i_11]) >> (((((/* implicit */int) arr_29 [i_9] [i_10] [i_12 + 1])) - (42379))))) : (max((((/* implicit */unsigned long long int) arr_28 [i_12])), (arr_24 [i_12])))))) ? (((((/* implicit */_Bool) ((int) 4589631229440011771ULL))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)52548)) | (((/* implicit */int) arr_29 [i_9] [i_9] [i_9]))))) : (max((arr_30 [i_11]), (var_2))))) : (((/* implicit */unsigned int) (-((~(arr_23 [i_9]))))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_12 - 2] [i_12 - 2] [i_12] [i_12 - 1] [2] [i_12 + 1])) ? (((arr_24 [i_11]) >> (((((((/* implicit */int) arr_29 [i_9] [i_10] [i_12 + 1])) - (42379))) - (21597))))) : (max((((/* implicit */unsigned long long int) arr_28 [i_12])), (arr_24 [i_12])))))) ? (((((/* implicit */_Bool) ((int) 4589631229440011771ULL))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)52548)) | (((/* implicit */int) arr_29 [i_9] [i_9] [i_9]))))) : (max((arr_30 [i_11]), (var_2))))) : (((/* implicit */unsigned int) (-((~(arr_23 [i_9])))))))));
                        var_32 = ((((/* implicit */int) arr_27 [i_11])) >> (((min((arr_36 [i_12] [i_11] [i_11] [6U] [i_10] [i_9]), (arr_23 [i_9]))) + (640853825))));
                    }
                } 
            } 
        } 
        arr_37 [i_9] = ((/* implicit */long long int) arr_31 [i_9] [i_9] [i_9]);
        arr_38 [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_9] [i_9] [(short)7])) | (((/* implicit */int) arr_35 [i_9] [i_9]))))) ? (((long long int) (short)2543)) : (((/* implicit */long long int) arr_23 [i_9]))))) ? (max((((/* implicit */int) arr_28 [i_9])), (((((/* implicit */_Bool) 123782283U)) ? (((/* implicit */int) arr_35 [i_9] [i_9])) : (((/* implicit */int) var_7)))))) : (arr_36 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]));
        var_33 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_9])) ? (18446744073709551615ULL) : (arr_24 [i_9])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)2561)) : (var_12)))) : (arr_30 [i_9]))));
    }
    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)22908)) : (((/* implicit */int) var_9)))))));
    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) max((var_8), (var_8))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((var_1), (((/* implicit */short) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_0))))))))));
}
