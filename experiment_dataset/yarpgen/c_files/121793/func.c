/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121793
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned long long int) arr_0 [i_0] [i_0])))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0]))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        for (int i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            {
                var_22 = ((/* implicit */_Bool) arr_3 [i_1] [i_1]);
                var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_5 [i_1] [i_1])) & (((((/* implicit */_Bool) arr_3 [i_1] [i_2 - 1])) ? (arr_3 [i_1] [i_2 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 - 1])))))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */short) arr_5 [i_3] [i_2]);
                            var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_2] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_7 [i_2 + 2] [i_2] [i_2] [i_2 - 1])))) & (((((arr_10 [i_2] [i_2] [i_3] [i_2] [i_2]) & (((/* implicit */int) arr_12 [i_4] [i_3] [i_1] [i_1])))) << (((((arr_4 [i_1]) >> (((var_17) - (4054389867U))))) - (2033943275)))))));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_2 + 2] [i_2 + 2])))));
                            var_27 = ((/* implicit */_Bool) 262201434);
                            var_28 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_2] [i_3]) != (((/* implicit */long long int) ((/* implicit */int) ((var_17) == (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))))) * (((arr_11 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2]) & (((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), (-262201435)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
