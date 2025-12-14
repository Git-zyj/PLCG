/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128838
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
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 7; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 + 2]))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 1] [i_0 + 1])) >> (((((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 2])) - (28874)))));
                var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0 + 3] [i_0 + 2] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_0 + 3] [i_0 + 2] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_6 [i_0 + 3] [i_0 + 2] [i_0 + 1] [i_0 + 1]))));
            }
            /* LoopSeq 2 */
            for (signed char i_3 = 2; i_3 < 8; i_3 += 4) 
            {
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((long long int) (unsigned short)59685)))));
                arr_11 [i_0] [i_3] [i_3] = arr_7 [(unsigned char)1] [(signed char)9] [i_3] [(unsigned char)1];
            }
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) > (((((((/* implicit */int) arr_9 [i_0] [7ULL] [7ULL] [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_0] [i_1] [i_4])) + (47))) - (31)))))));
                var_17 = ((signed char) arr_8 [i_0 - 1] [i_0 + 2]);
                var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)8] [i_1] [i_4]))) / (arr_10 [i_0 + 3] [i_0] [i_0 + 3] [i_0 - 2])));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    var_19 = ((/* implicit */int) ((arr_15 [i_0] [i_0 + 1] [i_0 + 1] [(signed char)4]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1])))));
                    var_20 = ((/* implicit */signed char) ((unsigned char) arr_6 [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_1]));
                }
            }
            /* LoopNest 2 */
            for (long long int i_6 = 1; i_6 < 9; i_6 += 1) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_20 [6U] [i_1] [i_6] [i_7] = arr_5 [i_0] [i_1];
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_14 [(_Bool)1] [i_1]))));
                    }
                } 
            } 
        }
        for (signed char i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)93)) ^ (((/* implicit */int) (_Bool)1))));
            var_23 -= ((/* implicit */unsigned long long int) ((signed char) arr_13 [(_Bool)1] [9LL] [i_0 - 2]));
            arr_24 [i_0 + 3] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0 - 3] [i_0 - 3])) ? (((/* implicit */int) arr_2 [i_0 + 3] [i_0 - 2] [i_0 - 3])) : (((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 1] [i_0 + 3]))));
            var_24 = ((/* implicit */unsigned int) min((var_24), (((unsigned int) arr_1 [i_0 + 2] [i_0 + 2]))));
            var_25 |= arr_19 [i_8] [i_8] [i_8] [i_8];
        }
        var_26 -= ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [7U] [(unsigned short)0]);
        var_27 -= ((((/* implicit */int) arr_2 [i_0 - 2] [i_0] [i_0 + 3])) + (((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 3] [i_0])));
    }
    for (signed char i_9 = 3; i_9 < 7; i_9 += 3) /* same iter space */
    {
        arr_29 [i_9] = ((/* implicit */unsigned short) ((((long long int) arr_15 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 - 1])) ^ (((/* implicit */long long int) arr_15 [7LL] [i_9] [i_9 - 2] [(unsigned char)7]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            var_28 |= arr_30 [i_9] [i_9 + 2];
            arr_33 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((signed char) ((unsigned short) arr_31 [i_9] [i_9])));
            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((((((/* implicit */int) arr_9 [i_9 - 1] [i_10] [i_9 - 1] [i_9])) + (2147483647))) << (((((/* implicit */int) (unsigned short)11478)) - (11478))))) < (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)14)))))))));
            arr_34 [i_9] [i_10] [i_9 + 2] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_28 [i_9])) ? (((/* implicit */int) arr_6 [i_9] [(unsigned short)9] [i_10] [i_10])) : (((/* implicit */int) arr_9 [8LL] [8LL] [i_9] [i_9])))));
        }
        arr_35 [i_9] [i_9] = ((arr_28 [i_9]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_9 - 3])) && (((/* implicit */_Bool) arr_25 [i_9 - 3])))))));
    }
    var_30 = ((/* implicit */unsigned int) var_10);
    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_9) > (((((/* implicit */unsigned long long int) var_6)) - (var_3)))))) ^ (((/* implicit */int) ((signed char) var_7)))));
}
