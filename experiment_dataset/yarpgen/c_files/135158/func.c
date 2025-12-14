/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135158
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (~(((max((arr_0 [i_0]), (-2868714805679071829LL))) & (((((/* implicit */_Bool) 18446744073709551586ULL)) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            arr_14 [i_2] [i_1] [i_2] [i_2] [i_2] [(signed char)15] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) arr_11 [i_0])) - (var_8))) * (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) / (arr_8 [i_0 - 1] [9LL] [i_1] [i_4])))));
                            arr_15 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_2] [i_1])) / (((/* implicit */int) arr_2 [i_4]))))) - (arr_0 [i_0 - 2])));
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_17))));
                            var_21 *= ((/* implicit */unsigned short) arr_13 [i_0 - 1] [(signed char)4] [i_4] [i_3 + 2] [i_4]);
                        }
                        arr_16 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_1] [i_1])) % (((/* implicit */int) arr_10 [i_1] [i_0 - 1]))));
                    }
                    arr_17 [i_1] [i_1] = ((/* implicit */unsigned char) (~(arr_3 [i_0] [i_0 + 2] [i_2])));
                }
                /* vectorizable */
                for (long long int i_5 = 2; i_5 < 19; i_5 += 3) 
                {
                    var_22 -= ((((/* implicit */_Bool) arr_4 [i_0] [18U])) && (((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_5] [(unsigned char)2] [i_5]))))));
                    /* LoopNest 2 */
                    for (short i_6 = 2; i_6 < 17; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                var_23 *= ((/* implicit */unsigned long long int) arr_21 [i_1] [i_5] [i_6] [i_0]);
                                var_24 = ((/* implicit */long long int) arr_24 [i_1] [i_0] [i_6 + 2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 18; i_9 += 2) 
                        {
                            {
                                arr_33 [i_9 - 1] [i_9 - 1] [i_1] [i_5] [i_1] [15ULL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1])) ? (((/* implicit */int) arr_18 [i_0] [17LL] [i_1])) : (arr_28 [i_1])));
                                var_25 = ((/* implicit */long long int) var_4);
                                var_26 = ((/* implicit */int) ((unsigned long long int) ((unsigned short) arr_9 [i_9] [14LL] [i_5] [i_8] [i_5 - 2] [i_5 + 1])));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned char i_10 = 1; i_10 < 18; i_10 += 4) 
                {
                    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) max((((/* implicit */unsigned long long int) (~(min((arr_39 [(unsigned short)0] [(unsigned short)0] [(_Bool)1] [10ULL] [i_10] [i_11]), (((/* implicit */long long int) (signed char)-2))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_11])) ? (934899300U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-90)))))) ? (((/* implicit */unsigned long long int) arr_28 [i_0])) : (arr_30 [i_0] [i_0] [i_0] [i_11] [i_11]))))))));
                            arr_40 [i_1] = ((/* implicit */int) max((max((arr_30 [i_0 - 1] [i_0 - 2] [i_10 + 1] [i_10 - 1] [i_10]), (arr_30 [i_0 + 2] [i_0 - 2] [i_10 - 1] [i_10 + 1] [i_11]))), (((/* implicit */unsigned long long int) arr_28 [i_1]))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (-(((/* implicit */int) min((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) * (((/* implicit */int) ((var_10) < (var_16)))))) >> (((/* implicit */int) var_4))));
}
