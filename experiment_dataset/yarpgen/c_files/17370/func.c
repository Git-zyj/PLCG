/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17370
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (short)30558);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [i_4]);
                                var_15 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_2 [i_0]))))));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1 + 1] [i_1]))));
                                var_17 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-30557)) + (((/* implicit */int) var_1))))), (min((arr_9 [i_0] [i_1] [i_1] [i_3] [i_4]), (arr_9 [9LL] [i_1] [i_2] [(unsigned char)6] [i_4]))))) - (((((/* implicit */_Bool) (short)30558)) ? (max((16960675607271317433ULL), (arr_6 [i_0] [i_3] [i_3]))) : (((/* implicit */unsigned long long int) 378860193U))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_12);
    var_19 = ((/* implicit */signed char) (unsigned short)15143);
}
