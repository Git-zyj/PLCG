/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133496
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
    var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) (unsigned short)49327)) : ((~(((/* implicit */int) var_8)))))) >> (((max((max((var_13), (((/* implicit */int) var_18)))), (((/* implicit */int) var_4)))) - (351804207)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_0 + 1] [i_1] [i_1] = ((/* implicit */short) arr_0 [i_1]);
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((((/* implicit */unsigned long long int) arr_2 [i_0])), ((-((+(arr_3 [(signed char)16]))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(min(((~(((/* implicit */int) var_17)))), (min((((/* implicit */int) var_14)), (var_13))))))))));
}
