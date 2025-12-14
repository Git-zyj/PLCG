/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134996
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
    var_13 += ((/* implicit */unsigned int) (~(0ULL)));
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10)))) : (min((min(((-9223372036854775807LL - 1LL)), ((-9223372036854775807LL - 1LL)))), (((((/* implicit */_Bool) var_8)) ? (-9223372036854775797LL) : (((/* implicit */long long int) var_5)))))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            arr_7 [i_0] [i_1] [i_1] = arr_2 [i_0 - 1];
            /* LoopSeq 1 */
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                arr_11 [i_0 - 3] [i_2 + 1] [i_2 + 1] [i_1] = arr_2 [i_1 + 1];
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (~(arr_10 [i_1 - 1] [i_2 + 1] [i_2 + 1] [i_0 - 3]))))));
            }
        }
        var_16 = ((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_8 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 - 2])), ((-9223372036854775807LL - 1LL)))) / (var_7)))) & (arr_9 [i_0] [i_0] [i_0] [i_0]));
    }
    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(9223372036854775796LL)))) ? (var_9) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_14 [i_3])) ? (arr_12 [i_3] [4LL]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_6)), (var_2)))))))));
        var_17 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_12 [i_3] [i_3]), (((arr_12 [i_3] [i_3]) - (arr_14 [i_3]))))))));
    }
    for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        var_18 += ((/* implicit */_Bool) max((max((var_10), (((/* implicit */unsigned int) (short)0)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5368276901715908561LL)) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) arr_17 [i_4])))))));
        arr_18 [i_4] = ((/* implicit */unsigned short) (-((-(((((/* implicit */int) var_6)) >> (((/* implicit */int) var_0))))))));
        var_19 &= ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) arr_17 [i_4])))));
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), ((-((-(min((((/* implicit */unsigned long long int) (unsigned short)252)), (var_8)))))))));
            /* LoopSeq 1 */
            for (short i_6 = 1; i_6 < 20; i_6 += 2) 
            {
                var_21 = ((/* implicit */signed char) min((((/* implicit */long long int) (_Bool)1)), ((+(arr_16 [i_4])))));
                var_22 = ((/* implicit */short) var_3);
                var_23 = ((/* implicit */short) 9223372036854775796LL);
                arr_25 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_23 [i_4] [i_5] [i_5])) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) arr_17 [18U]))))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) min((arr_17 [i_4]), (var_11))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (((((/* implicit */_Bool) arr_21 [(signed char)13] [(signed char)13] [i_4])) ? (arr_22 [7U] [7U] [i_4]) : (((/* implicit */long long int) arr_19 [i_6 - 1])))))))));
                arr_26 [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) ((((max((arr_22 [i_4] [i_4] [i_4]), (((/* implicit */long long int) arr_23 [i_6] [16] [i_6])))) - (((0LL) >> (((((-9223372036854775805LL) - (-9223372036854775781LL))) + (44LL))))))) & (((/* implicit */long long int) ((/* implicit */int) var_3)))));
            }
        }
        for (long long int i_7 = 2; i_7 < 22; i_7 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                arr_31 [14LL] [i_7] [i_8] |= ((/* implicit */short) var_3);
                var_24 = ((/* implicit */int) min((min((((/* implicit */long long int) arr_20 [i_7 + 1] [i_7 + 1])), (-9223372036854775797LL))), ((-(arr_22 [i_7 + 1] [i_7] [i_7 - 1])))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                arr_34 [i_4] [i_9] [i_7] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_4] [i_7 - 2])) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_0))))) : (((((/* implicit */int) arr_20 [i_4] [i_7 - 2])) - (((/* implicit */int) arr_28 [i_9] [i_7 - 2]))))));
                arr_35 [i_9] [16] [16] [i_9] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_16 [i_9])) ? (((/* implicit */int) ((unsigned short) arr_32 [i_4] [i_7 - 2] [i_4]))) : (max((arr_23 [i_4] [i_7 + 1] [i_7 + 1]), (((/* implicit */int) arr_28 [i_7] [i_4])))))));
            }
            var_25 = ((((/* implicit */_Bool) -9223372036854775805LL)) ? (((((((/* implicit */_Bool) var_5)) ? (arr_19 [i_4]) : (((/* implicit */unsigned int) arr_32 [i_7 + 1] [i_4] [i_4])))) >> (((long long int) (unsigned char)7)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41))));
        }
    }
}
