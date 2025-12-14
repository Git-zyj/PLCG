/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105799
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
    var_18 = ((/* implicit */long long int) (-(min(((+(((/* implicit */int) (short)32763)))), (((/* implicit */int) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_19 = (!(((/* implicit */_Bool) 23506760672847729ULL)));
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1 + 2])) ? (min((((/* implicit */unsigned long long int) var_9)), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) 3745651851U)))) * (min((((arr_2 [i_0] [i_0] [i_0]) / (arr_1 [i_0]))), (((arr_2 [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (min((((/* implicit */unsigned long long int) var_2)), (((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((var_1) < (min((((/* implicit */long long int) ((1383241754U) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), ((~(var_1))))))))));
    var_23 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))));
}
