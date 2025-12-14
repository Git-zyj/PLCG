/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16455
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
    var_20 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) min(((unsigned short)60), (((/* implicit */unsigned short) var_10))))), (var_13))), (((/* implicit */unsigned long long int) var_6))));
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */unsigned char) var_16)), (var_2)))), (max((var_18), (var_6)))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) arr_0 [i_4]);
                                var_23 = var_6;
                                var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_0 + 3]))));
                                arr_14 [i_0] = ((/* implicit */short) ((((((/* implicit */int) (short)-22300)) + (2147483647))) << (((((((/* implicit */_Bool) arr_5 [i_3 + 3])) ? (((/* implicit */int) arr_5 [i_3 + 2])) : (((/* implicit */int) arr_5 [i_2 + 1])))) - (135)))));
                                var_25 = ((/* implicit */int) min((var_25), ((~(((((/* implicit */int) arr_12 [i_0 + 3] [i_1] [i_2] [i_0 + 3] [7ULL])) / (((/* implicit */int) arr_12 [i_0 + 1] [i_1 + 1] [i_2 - 2] [(unsigned short)7] [i_4 + 1]))))))));
                            }
                        } 
                    } 
                    var_26 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)10]))));
                }
            } 
        } 
    } 
}
