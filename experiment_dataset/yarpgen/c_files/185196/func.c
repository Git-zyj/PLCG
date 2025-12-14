/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185196
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
    var_13 = ((/* implicit */signed char) var_8);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            var_14 = min((min((var_7), (((/* implicit */unsigned int) arr_3 [i_1] [i_1 + 1] [i_1])))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)78)), (arr_3 [i_1 - 2] [i_1 + 1] [i_1 + 1])))));
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_15 = ((/* implicit */unsigned short) min((min((arr_4 [i_1 - 1] [i_1 - 1]), (arr_4 [i_1 - 2] [i_1 - 2]))), (((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)-78)), (arr_5 [i_1] [i_1] [i_1 - 1]))))));
                arr_8 [i_0] [i_1 - 1] [i_0] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((arr_7 [i_0] [i_0] [i_1 + 1]), (((/* implicit */long long int) arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))), (max((12304582971274302603ULL), (arr_6 [i_1] [i_1 - 1] [i_0] [i_1 - 2])))));
            }
            for (long long int i_3 = 1; i_3 < 18; i_3 += 2) 
            {
                /* LoopSeq 4 */
                for (long long int i_4 = 3; i_4 < 17; i_4 += 4) 
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (min((min((var_4), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_12 [i_4] [i_0] [i_0] [i_3])), (min((((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_1])), (arr_10 [13ULL] [i_0]))))))))));
                    arr_15 [i_4] = min((min((12304582971274302628ULL), (((/* implicit */unsigned long long int) (unsigned char)247)))), (((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-81))))));
                    arr_16 [i_0] [i_0] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)251)));
                }
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((max((((/* implicit */long long int) arr_12 [i_1] [i_0] [i_0] [i_1])), (5629984617319976562LL))), (min((max((((/* implicit */long long int) var_2)), (2147483647LL))), (min((arr_14 [i_0] [i_1 - 2] [i_0] [i_5]), (var_4))))))))));
                    arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] |= min((max((((/* implicit */unsigned long long int) min(((unsigned char)212), (arr_9 [i_0] [i_1] [(short)16] [i_0])))), (max((arr_13 [i_0] [i_1] [i_1] [i_0] [i_3] [i_5]), (((/* implicit */unsigned long long int) var_8)))))), (min((((/* implicit */unsigned long long int) arr_11 [i_3 + 1] [i_3 - 1] [i_3 + 1])), (max((((/* implicit */unsigned long long int) arr_1 [i_3 + 1])), (arr_6 [i_0] [i_1 + 1] [i_5] [i_5]))))));
                    arr_20 [i_0] [i_0] [i_0] [i_0] [15ULL] [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) (unsigned short)11030)), (arr_7 [i_5] [i_3 + 1] [i_3 + 1]))), (max((arr_7 [i_0] [i_3 - 1] [i_3 + 1]), (((/* implicit */long long int) var_5))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
                {
                    arr_24 [(_Bool)1] [i_3] [i_6] = ((/* implicit */_Bool) max((min((var_8), (((/* implicit */long long int) arr_11 [i_1 - 2] [i_3 + 1] [i_6])))), (((/* implicit */long long int) max((arr_23 [i_0]), (var_9))))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (min((max((arr_13 [i_6] [i_3 + 1] [i_3 + 1] [i_1 + 1] [i_1] [i_0]), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))), (((/* implicit */unsigned long long int) min((arr_3 [i_3 + 1] [i_1] [i_1]), ((unsigned char)4))))))));
                    arr_25 [i_0] [i_1] [i_3] [i_6] = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((arr_0 [i_3 - 1]), (arr_0 [i_3 + 1])))), (min((((/* implicit */unsigned int) (unsigned short)11030)), (max((((/* implicit */unsigned int) arr_2 [i_0])), (arr_10 [(_Bool)1] [i_3 + 1])))))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
                {
                    arr_29 [i_0] [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) var_9)), (var_4))), (((/* implicit */long long int) min((1439870451U), (var_7))))));
                    var_19 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) min((var_3), (var_3)))), (max((((/* implicit */long long int) (_Bool)1)), (-3365095788040238566LL)))));
                    arr_30 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((arr_4 [i_3 + 1] [i_1 + 1]), (((/* implicit */long long int) arr_3 [i_7] [i_3 + 1] [i_1 + 1]))))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (12304582971274302628ULL)))));
                }
                arr_31 [i_0] [i_1] [i_0] = min((max((((/* implicit */long long int) (_Bool)0)), (var_4))), (((/* implicit */long long int) min((((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_1)), (var_12)))), (arr_1 [i_1 + 1])))));
                var_20 = ((/* implicit */_Bool) min((min((arr_17 [i_3 - 1] [i_3 + 1] [i_3] [i_1 - 1]), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) min((arr_14 [i_1 + 1] [i_1 + 1] [i_3 - 1] [(signed char)16]), (((/* implicit */long long int) var_5)))))));
                arr_32 [i_3 - 1] [i_1] [i_0] = ((/* implicit */short) max((min((arr_4 [i_0] [i_3 + 1]), (((/* implicit */long long int) (unsigned char)15)))), (min((var_4), (((/* implicit */long long int) (unsigned char)233))))));
                arr_33 [i_1 - 2] [i_3] &= ((/* implicit */_Bool) max((min((var_4), (var_4))), (((/* implicit */long long int) max((var_0), (((/* implicit */unsigned int) arr_22 [i_1 + 1] [i_1] [i_3 - 1] [i_1 + 1] [i_3] [i_3 - 1])))))));
            }
            for (unsigned long long int i_8 = 3; i_8 < 15; i_8 += 1) 
            {
                arr_36 [7LL] [(unsigned short)2] [(signed char)9] = ((/* implicit */long long int) min((max((var_3), (((/* implicit */unsigned int) arr_11 [i_8 + 4] [i_8 + 4] [i_1 - 1])))), (((/* implicit */unsigned int) max((arr_11 [i_8 + 3] [i_1] [i_1 - 1]), (arr_11 [i_8 - 2] [i_1 - 1] [i_1 - 2]))))));
                var_21 -= ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) 1902354652U)), (var_8))), (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) var_11)))))));
            }
        }
        var_22 += ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_7)), (var_6))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (max((min((arr_27 [i_0]), (((/* implicit */unsigned long long int) var_0)))), (min((arr_27 [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    }
    var_24 = ((/* implicit */long long int) var_9);
    var_25 = ((/* implicit */unsigned long long int) var_4);
}
