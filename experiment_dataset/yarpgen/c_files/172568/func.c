/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172568
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
    /* vectorizable */
    for (int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        var_10 -= ((/* implicit */_Bool) ((arr_0 [i_0 + 2]) ? (((/* implicit */int) arr_0 [i_0 + 3])) : (((/* implicit */int) arr_0 [i_0 + 3]))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_5 [i_1] [i_0 + 2] [(signed char)1])) ^ (((/* implicit */int) arr_5 [(unsigned short)8] [i_1] [i_1])))) << (((/* implicit */int) arr_0 [i_0]))));
            arr_7 [i_0] = ((/* implicit */_Bool) arr_4 [i_1]);
            arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_0 - 3] [i_1])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_4 [i_1]))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_11 *= ((/* implicit */unsigned int) arr_11 [i_0 - 3] [i_0 + 2]);
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                var_12 ^= arr_14 [i_0 + 3] [i_0 - 1] [i_0] [i_0 - 3];
                var_13 ^= arr_9 [i_0];
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_0] [i_2])) <= (((/* implicit */int) arr_2 [i_3])))))));
            }
        }
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            arr_17 [i_4] [(signed char)20] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0 - 1] [i_4])) * (((/* implicit */int) arr_5 [i_0 + 3] [i_0 + 1] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_4]))) : (arr_14 [i_0] [i_4] [i_0 - 3] [11LL])));
            var_15 = ((/* implicit */long long int) var_0);
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
            {
                var_16 &= ((/* implicit */int) arr_15 [i_5]);
                var_17 -= arr_13 [i_5] [i_4];
                arr_21 [i_5] [i_4] [i_4] = ((/* implicit */unsigned int) var_6);
                var_18 -= arr_3 [i_4];
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    var_19 *= ((/* implicit */unsigned char) arr_12 [i_5] [i_5]);
                    var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_6] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 3]))) : (arr_14 [i_0] [i_4] [i_4] [i_6])));
                    var_21 = ((/* implicit */signed char) var_5);
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_8))));
                }
            }
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
            {
                var_23 += ((/* implicit */short) ((((/* implicit */int) (short)-25941)) ^ (((/* implicit */int) arr_5 [i_7] [i_7] [i_4]))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) arr_3 [i_8]);
                            arr_31 [i_0 + 3] [i_4] [i_0 + 3] [i_0] [i_0 + 3] [i_0] [i_4] = ((/* implicit */signed char) arr_5 [i_7] [i_8] [i_7]);
                            var_25 = ((/* implicit */short) arr_16 [i_8]);
                            arr_32 [i_0] [i_0] [i_7] [i_8] [i_8] [i_8] [i_4] = ((/* implicit */short) arr_14 [i_0 + 2] [i_7] [i_8] [i_9]);
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                arr_36 [i_4] [i_4] [i_4] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0 - 1])) ^ (((/* implicit */int) var_0))))) * (arr_23 [i_4] [i_10])));
                arr_37 [i_10] [i_4] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0])) * (((/* implicit */int) arr_34 [5] [i_4] [i_10]))));
                arr_38 [i_4] [i_4] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_0] [i_10] [(short)16] [i_10])) ^ (((/* implicit */int) var_0))));
                arr_39 [i_4] [5] [i_0] = ((/* implicit */signed char) arr_22 [i_0 + 1] [i_0 - 3] [i_0] [i_0]);
            }
            arr_40 [i_4] [i_4] [i_4] = arr_27 [i_0] [i_0] [i_0 + 1] [i_0] [i_4] [i_4];
        }
    }
    var_26 *= ((/* implicit */short) var_8);
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */int) var_0)), (var_7))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (var_8)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))));
    var_28 = ((/* implicit */unsigned short) var_2);
    var_29 = ((/* implicit */unsigned int) var_1);
}
