/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121049
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
    var_20 = max((((/* implicit */int) var_16)), (var_15));
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_4))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_22 -= ((/* implicit */short) var_18);
                            arr_13 [i_3] &= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((arr_1 [i_0]) ? (arr_0 [i_2] [i_0]) : (((/* implicit */int) arr_2 [i_3]))))) : (var_13))));
                            arr_14 [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32765)) ? (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_3])))), (((/* implicit */int) arr_2 [i_0 + 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) arr_11 [i_2])))))));
                            arr_15 [i_0] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_3])) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) (short)-1))))) : (arr_4 [i_2]))), (((/* implicit */long long int) max(((+(arr_0 [i_2] [i_0]))), ((-(((/* implicit */int) (short)-2)))))))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] = (_Bool)1;
            }
        } 
    } 
}
