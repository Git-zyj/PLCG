/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18789
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) max((var_12), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_2 [17U])), (4294967265U)))), ((+(var_5))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_2 [i_0]), (arr_2 [i_0])))) ? (arr_4 [i_1] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 30U))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((var_5) / (((/* implicit */long long int) ((/* implicit */int) ((-8811443615074197061LL) <= (((/* implicit */long long int) var_8)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) < (((var_3) << (((var_11) - (781330165U)))))))))));
    var_16 = ((/* implicit */int) (~(var_11)));
}
