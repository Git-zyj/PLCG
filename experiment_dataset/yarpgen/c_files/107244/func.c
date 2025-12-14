/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107244
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_14))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (arr_2 [(unsigned char)0])));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))));
                                var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_0] [i_1] [i_2]), (arr_4 [i_0] [i_1] [i_2]))))) - (arr_0 [i_0]));
                                arr_16 [i_0] [i_1] [i_0] [i_0] [i_1] &= ((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [(_Bool)1]))) * (0ULL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_8))));
    var_24 = ((/* implicit */int) var_2);
    var_25 = ((/* implicit */unsigned long long int) var_13);
}
