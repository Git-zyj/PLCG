/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117422
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                var_18 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 1]) : (((/* implicit */long long int) var_16))))) ? (((((/* implicit */_Bool) arr_1 [9ULL])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_1 - 4]))) : (min((((/* implicit */long long int) var_10)), (arr_1 [i_0 + 1])))));
                var_19 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_7)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_4 [i_1 - 3] [i_0 + 1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (long long int i_3 = 2; i_3 < 23; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        {
                            arr_16 [(unsigned char)11] [(unsigned char)11] [(unsigned char)11] [i_2] [17LL] = arr_13 [i_2] [i_2] [i_3] [(signed char)10];
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_12) % (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) (!(var_2)))))) - (((/* implicit */int) arr_9 [i_2] [i_3])))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                            {
                                arr_20 [i_2] [i_3] [i_4] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_3] [i_3 + 1])) ? (((/* implicit */long long int) arr_19 [i_2] [i_2 + 1] [(unsigned char)15] [i_4] [i_4])) : (4611685468671574016LL)));
                                arr_21 [i_2] [i_2] [i_4] [i_2] [(unsigned short)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-1642984207690261805LL)))) ? (var_16) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [13U] [i_3] [i_4] [i_5] [i_6] [i_6])))))));
                                arr_22 [i_2 + 1] [i_2] [i_2] [20LL] [i_2 + 1] [i_2 + 1] [i_2] = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_9 [i_2 + 1] [i_2]))))));
                                var_22 = arr_14 [i_2] [i_3];
                            }
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) (~(arr_12 [(unsigned short)13])));
                var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
            }
        } 
    } 
}
