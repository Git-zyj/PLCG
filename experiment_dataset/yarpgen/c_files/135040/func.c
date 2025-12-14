/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135040
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [(signed char)0] [i_1] = ((/* implicit */short) min((arr_5 [i_1] [i_0]), (((/* implicit */long long int) ((var_13) > (var_2))))));
                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 268304384U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10644))) : (min((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_0])), (2147418112U)))))) ? (((/* implicit */int) ((arr_2 [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) ((var_3) == (((/* implicit */long long int) var_4)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (+(var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)27926)), (2019828522)))) : (((var_2) ^ (((/* implicit */long long int) var_7))))))));
    var_18 = ((/* implicit */unsigned int) (+(max((min((((/* implicit */long long int) (signed char)93)), (var_15))), (var_15)))));
}
