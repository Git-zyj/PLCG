/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174385
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) var_7);
                arr_6 [4LL] [i_1] |= ((/* implicit */long long int) (-(((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_1]))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) min((((((/* implicit */int) arr_8 [(_Bool)1] [i_2] [i_3])) + (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) var_6))))));
                            arr_14 [i_0] [i_0] [(unsigned short)13] [i_0] = ((/* implicit */long long int) ((short) ((var_0) / (((/* implicit */long long int) var_1)))));
                            var_19 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((long long int) arr_2 [(short)4] [i_1]))) ? (arr_9 [i_3] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) var_15))))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_6))))), (((long long int) var_0)))))));
                        }
                    } 
                } 
                var_20 = min((((/* implicit */long long int) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) var_2)))))), (((long long int) ((unsigned int) var_0))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) min((((unsigned long long int) ((((/* implicit */int) (unsigned short)30648)) + (-2147483646)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))));
    var_22 = ((/* implicit */unsigned int) var_0);
}
