/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12375
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((var_0) + (((/* implicit */long long int) var_9))))))) ? (((/* implicit */long long int) arr_0 [i_0] [i_0])) : ((-(((long long int) 814429690))))));
                            var_12 *= ((/* implicit */unsigned long long int) (+((-(((var_7) * (((/* implicit */unsigned int) var_1))))))));
                        }
                    } 
                } 
                arr_9 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-((+(-814429687)))))) ? (((var_0) - (((/* implicit */long long int) arr_8 [i_0] [i_1] [9ULL] [i_1 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))) > (var_6)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (-((-(min((var_9), (var_3))))))))));
    var_14 = ((/* implicit */int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_9) : (var_3)))) - (var_0))) + (((((/* implicit */_Bool) -814429703)) ? (min((var_0), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) var_9))))));
}
