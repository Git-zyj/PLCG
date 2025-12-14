/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100127
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_20 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15977146257392295423ULL)) ? (((/* implicit */int) (short)7398)) : (((/* implicit */int) (unsigned short)3987))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            {
                var_21 *= ((((((/* implicit */_Bool) -15LL)) ? (((/* implicit */unsigned long long int) -3LL)) : (max((arr_7 [i_2]), (((/* implicit */unsigned long long int) var_2)))))) + (((/* implicit */unsigned long long int) arr_1 [i_1])));
                arr_9 [i_1] [(unsigned short)11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((unsigned long long int) -1296318526374923355LL)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_2]))))))))));
                var_22 = ((/* implicit */unsigned long long int) (-((~(((long long int) arr_6 [i_1] [i_2]))))));
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((arr_7 [i_2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_1 [i_1])))))))))));
                var_24 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)58640)) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (var_15))) < (14633136237348101688ULL)));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        arr_12 [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_3])) >> (((/* implicit */int) arr_5 [i_3]))));
        arr_13 [i_3] = ((/* implicit */unsigned short) (+(var_2)));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_20 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5LL)) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) arr_4 [i_5]))));
                    arr_21 [i_3] = ((((/* implicit */_Bool) var_5)) ? (arr_3 [i_3] [i_4]) : (arr_3 [i_3] [i_3]));
                }
            } 
        } 
    }
}
