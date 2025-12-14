/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131855
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
    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) max((var_1), (var_1)))) : (((/* implicit */int) max((var_16), ((unsigned char)15))))))), (1403250441U)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_10)))) ? ((-(((/* implicit */int) arr_1 [i_0 - 2])))) : (((/* implicit */int) var_13)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                            arr_10 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_6 [i_1 + 1] [i_0] [i_0] [i_0 - 1]) + (arr_6 [i_1 + 3] [i_0] [i_0] [i_0 + 3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58151))) : (((((/* implicit */_Bool) var_18)) ? (arr_6 [i_1 + 3] [i_0] [i_0] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_3] [i_3 - 1] [i_1 - 3] [i_1 - 1] [i_0 - 2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = var_18;
}
