/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/27
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
    var_16 &= ((/* implicit */unsigned short) min((((/* implicit */int) var_4)), ((+(((/* implicit */int) min((var_0), (((/* implicit */short) var_4)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */_Bool) arr_1 [i_0]);
                    var_18 = ((/* implicit */long long int) ((unsigned long long int) (-(max((((/* implicit */long long int) var_1)), (-5095881884517144951LL))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 - 1] [i_0])) ? (-2147483647) : (((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 2] [i_0]))))) ? (((/* implicit */int) ((var_13) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79)))))) : ((+(((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 2] [i_0]))))));
                                var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 731150399U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)88))) : (var_13)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_3 + 1] [i_0 - 2])) ? (var_6) : (((/* implicit */int) arr_11 [i_4 + 1] [i_3 - 1] [i_0 - 3])))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((((/* implicit */long long int) (signed char)1)), (2783068569285757288LL))))));
                }
            } 
        } 
    } 
}
