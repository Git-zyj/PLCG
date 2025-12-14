/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105328
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_14 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_11)) ? (arr_5 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [2ULL] [i_3] [i_1]))))))) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -1302721022))))))))));
                                var_15 &= ((/* implicit */short) min((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_10 [(signed char)5] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_10 [(short)9] [i_0] [i_1] [i_2] [(signed char)7] [i_4])))), (((/* implicit */int) arr_10 [i_3] [i_3] [(unsigned short)11] [i_3] [i_4] [i_0]))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_2 [i_2]))))));
                    arr_15 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */short) max((min((-1302721019), ((+(var_3))))), (((/* implicit */int) arr_4 [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */long long int) var_2))))) : (var_1))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (min((((/* implicit */long long int) var_10)), (var_0))))))));
}
