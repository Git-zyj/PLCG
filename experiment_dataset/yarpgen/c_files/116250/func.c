/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116250
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
    var_12 = ((/* implicit */signed char) 0);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1] [i_1])) ? (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (-7425111552284667817LL) : (arr_2 [i_1 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned int) var_8)))))));
                arr_6 [i_1] = ((/* implicit */unsigned int) max((var_10), (max((max((var_2), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) arr_0 [i_1 + 1]))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0 + 3] [i_3] = ((/* implicit */signed char) arr_4 [i_2] [i_3]);
                            var_13 += ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned int) max((var_8), (((/* implicit */int) var_0))))), (var_11))) : (((/* implicit */unsigned int) var_7))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_10))));
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((var_2) - (((((/* implicit */_Bool) ((var_8) + (((/* implicit */int) (signed char)70))))) ? (var_6) : (((((/* implicit */_Bool) 2582944942622638583LL)) ? (((/* implicit */unsigned long long int) -7425111552284667817LL)) : (var_10)))))))));
}
