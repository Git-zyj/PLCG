/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168939
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_6))));
    var_21 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((var_11) + (6817933872081035768LL)))))) ? ((~(((/* implicit */int) (short)21982)))) : ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_16))))))), (var_10)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))))));
                var_22 = ((/* implicit */unsigned int) arr_3 [i_0]);
                arr_7 [i_0] = ((/* implicit */short) (-(1087176107)));
                arr_8 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (((unsigned long long int) ((short) var_13)))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_16);
    var_24 = ((/* implicit */long long int) max((var_24), (var_13)));
}
