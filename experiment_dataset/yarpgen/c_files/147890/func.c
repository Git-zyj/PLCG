/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147890
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
    var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((var_14) << (((((/* implicit */int) var_13)) + (16388))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_15)))))))), ((~(min((var_8), (((/* implicit */long long int) var_9))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) var_1);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */signed char) (~((~(((arr_5 [i_0]) - (((/* implicit */int) arr_12 [i_1] [i_3] [i_1] [i_3] [i_3]))))))));
                                var_17 *= ((/* implicit */unsigned long long int) var_5);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((((2309086777U) & (1985880518U))), (((/* implicit */unsigned int) ((signed char) arr_13 [i_0] [i_2 - 1] [i_2 + 2] [i_1] [(unsigned char)6]))))))));
                }
            } 
        } 
    } 
}
