/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167171
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
    var_19 ^= ((/* implicit */unsigned short) max((1057603018U), (((/* implicit */unsigned int) (unsigned char)63))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (((-(arr_4 [i_1 - 3] [i_1 - 2] [i_0]))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6))) ^ (arr_4 [i_1 + 2] [i_1] [17])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 2; i_2 < 18; i_2 += 3) /* same iter space */
                {
                    arr_10 [19] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_4 [i_0] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3237364287U)) ? (-77852840) : (1325083356)))) : (arr_4 [i_2] [(short)5] [i_0])));
                    var_20 = ((/* implicit */int) arr_3 [i_0]);
                    arr_11 [i_2] [i_1] = arr_4 [i_0] [i_1 + 3] [i_2];
                }
                /* vectorizable */
                for (unsigned char i_3 = 2; i_3 < 18; i_3 += 3) /* same iter space */
                {
                    arr_15 [4ULL] &= ((/* implicit */unsigned char) (~(arr_9 [i_0] [(unsigned short)7] [i_0] [i_0])));
                    arr_16 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 - 2] [i_3 + 1])) ? (((/* implicit */unsigned int) -1913551596)) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (3237364277U)))));
                }
                var_21 = ((/* implicit */int) 13096015135144223140ULL);
            }
        } 
    } 
}
