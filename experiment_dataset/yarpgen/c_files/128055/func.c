/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128055
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
    var_20 = var_10;
    var_21 = var_5;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_3 + 1])))))));
                            arr_12 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)22] [i_0] [i_3 - 1])) ? (max((var_9), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_0])))) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0]))));
                            arr_13 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */signed char) ((((arr_0 [(signed char)16]) < (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_0] [i_3 - 1])))) ? (((/* implicit */int) (short)32736)) : (((/* implicit */int) (!(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(unsigned short)8] [i_0])) && (((/* implicit */_Bool) var_14)))))))));
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((0LL) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1] [i_3 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) var_17)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) arr_10 [i_1] [i_1] [i_1] [i_1]);
            }
        } 
    } 
}
