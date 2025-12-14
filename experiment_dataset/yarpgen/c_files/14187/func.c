/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14187
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                arr_4 [i_1 - 1] [i_1 - 1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_0 + 2]))))), (max((((/* implicit */unsigned long long int) arr_2 [i_1 - 1] [i_0])), (arr_3 [i_0 - 1])))));
                arr_5 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) (short)-29314)) - (((/* implicit */int) (short)(-32767 - 1)))))))) / (3U)));
                var_15 -= ((/* implicit */int) ((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [3U])))));
                arr_6 [i_0] [i_0] [(unsigned short)3] = ((/* implicit */unsigned char) var_12);
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) var_12);
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)157)) ? (arr_11 [1LL] [(signed char)9] [i_2] [i_1] [i_0]) : (max((((/* implicit */unsigned long long int) ((((var_12) + (2147483647))) >> (((var_12) + (1612500468)))))), ((~(arr_11 [i_2] [i_2] [i_2] [i_2] [i_2])))))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_3 [i_0 + 2])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_11 [i_0] [i_1] [i_0] [i_3] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (max((var_14), (((/* implicit */unsigned long long int) var_3)))))) : (min((((/* implicit */unsigned long long int) arr_12 [i_0] [(unsigned short)8] [i_0])), (arr_11 [i_0] [i_1] [i_1] [i_0] [i_1 + 2])))));
                                arr_13 [i_0] [i_0] [i_0] [8LL] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((-(arr_9 [(unsigned short)8]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [(signed char)1])) : (((/* implicit */int) (short)32766)))))))) ? (((((((/* implicit */_Bool) 2069057145954615231ULL)) ? (arr_3 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4]))))) + ((+(18446744073709551605ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [(short)0] [i_1 - 1] [(short)4])) * (((/* implicit */int) var_11))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) max((var_2), (((/* implicit */unsigned long long int) var_12))));
                    var_20 = ((/* implicit */signed char) ((max(((~(9222246136947933184ULL))), (((/* implicit */unsigned long long int) arr_9 [i_0])))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32759)))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */int) ((((int) var_0)) >= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (var_12)))))) <= (((/* implicit */int) var_6)))))));
}
