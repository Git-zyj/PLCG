/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144369
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
    var_20 = ((/* implicit */signed char) ((((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)-16660)))) + (2147483647))) << (((((/* implicit */int) var_8)) - (25674)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_21 |= ((/* implicit */long long int) (short)-23614);
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 1] [i_1 + 1] [i_1])) && (((/* implicit */_Bool) var_9)))))));
                                var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((unsigned int) 232107512U)) : (((/* implicit */unsigned int) var_14))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) ((((((((/* implicit */_Bool) (short)-30153)) ? (arr_1 [i_0]) : (((/* implicit */long long int) arr_0 [i_0] [i_0])))) / (((/* implicit */long long int) 2353365341U)))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 + 2]))))))));
                    var_25 = ((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)0)))), (arr_0 [i_1 + 2] [i_0])));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) var_16);
}
