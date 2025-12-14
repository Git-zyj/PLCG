/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115072
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
    var_10 = ((/* implicit */short) ((unsigned short) var_5));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((1925555394U) - (1925555374U)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_1] [(unsigned short)0] [i_1] = ((/* implicit */signed char) ((arr_2 [i_0] [i_1 - 3]) + (((/* implicit */int) ((arr_1 [i_0 + 1] [i_0 + 1]) != (((/* implicit */int) arr_4 [(signed char)8])))))));
                arr_7 [i_0 + 1] [i_1] = ((((/* implicit */_Bool) ((long long int) max((arr_5 [i_0] [i_1] [i_0 + 1]), (((/* implicit */long long int) 3)))))) ? (((/* implicit */int) ((arr_3 [i_0 + 2]) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-10065)))))))) : (((((/* implicit */int) (unsigned char)128)) >> (((306777445U) - (306777444U))))));
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) min((((/* implicit */signed char) ((((/* implicit */long long int) arr_1 [i_0] [i_0 - 1])) > (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_5 [i_0] [i_0] [i_0])))))), (var_0))))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_0);
}
