/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12371
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
    var_16 = ((/* implicit */short) ((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11922))) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
    var_17 = ((/* implicit */_Bool) max((((var_4) ? (((/* implicit */unsigned long long int) (~(var_0)))) : (min((((/* implicit */unsigned long long int) (_Bool)0)), (var_13))))), (((/* implicit */unsigned long long int) ((1638973036) / (((/* implicit */int) (signed char)(-127 - 1))))))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32740))) <= (var_2)));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0 - 1] [i_4 + 2] [i_2] [i_4 + 2])) ^ (((/* implicit */int) arr_9 [15] [i_3] [i_1] [i_0 - 1]))))) ? (((/* implicit */int) arr_6 [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_6 [i_4 - 2] [i_2] [i_1] [i_0 - 1]))));
                                arr_12 [6] [(signed char)0] [12ULL] [(signed char)0] [i_3] |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_11 [i_1] [(unsigned short)14] [16U] [i_3])) ? (-6574088745145765469LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) (short)32740))))) : (max((((arr_5 [i_0]) << (((arr_0 [9U]) + (1403033526920462267LL))))), ((-(5521846388373384680ULL)))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1]))) != (-7059232879913738757LL))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 - 1])) >= (-1)))) : ((-(((/* implicit */int) arr_3 [i_0 - 1]))))));
            }
        } 
    } 
}
