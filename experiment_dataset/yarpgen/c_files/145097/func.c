/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145097
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) var_12);
                var_17 = ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) var_9)), (var_14)))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((var_11) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0))))))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((var_16) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_0)))))))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((14200316059732674123ULL) & (((/* implicit */unsigned long long int) -139394580))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((/* implicit */unsigned int) ((var_16) ? (((/* implicit */int) var_16)) : (var_7)))) ^ (((var_3) ? (var_2) : (((/* implicit */unsigned int) var_7))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((min((var_3), (var_6))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15)))) : (((((/* implicit */int) var_15)) & (((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((var_11) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) var_9)) ? (var_4) : (var_4))))) : (((/* implicit */unsigned long long int) min((min((-3842205979186538680LL), (((/* implicit */long long int) (short)-28642)))), (((/* implicit */long long int) (short)-28640)))))));
}
