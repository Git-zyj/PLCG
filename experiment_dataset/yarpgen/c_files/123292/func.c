/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123292
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) ((var_14) << (((/* implicit */int) (unsigned char)31))));
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)76))))))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 3; i_2 < 11; i_2 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_2 [i_0]))));
                    var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_2 + 1] [i_2 + 1])), ((+(5ULL)))))) ? (((((6ULL) % (arr_1 [i_0] [i_0]))) / ((~(arr_1 [i_0] [8U]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [(unsigned short)11] [i_2 - 3] [i_2] [(unsigned short)0]), (arr_4 [i_0] [i_2 + 1] [4ULL] [i_2 - 3])))))));
                }
                for (unsigned char i_3 = 3; i_3 < 11; i_3 += 3) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_0] [(short)7] = ((/* implicit */_Bool) (+((-(var_6)))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 2; i_4 < 11; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            {
                                arr_16 [(_Bool)1] [i_1] = ((/* implicit */int) 18446744073709551612ULL);
                                arr_17 [i_0] [i_3 - 2] [i_0] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_4 - 1] [i_1] [i_3 - 3] [i_0]))))) ? (arr_8 [i_0]) : (((unsigned long long int) ((unsigned int) var_12)))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_19 [i_0] [i_0] [(unsigned char)2] = ((/* implicit */int) (((+(((unsigned int) arr_12 [i_0] [(short)6] [i_0] [(short)6] [i_0] [i_0])))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1])))));
                    arr_20 [i_1] [i_3] = ((/* implicit */unsigned char) arr_6 [i_0] [1] [i_1] [i_1]);
                }
                arr_21 [i_1] = ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [(short)4] [(short)4] [(short)4] [i_1]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)1)) % (max((((/* implicit */int) (unsigned char)240)), (var_12)))))));
    var_23 = ((/* implicit */unsigned long long int) 65535);
}
