/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12618
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
    var_20 += ((/* implicit */_Bool) var_7);
    var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */int) min((var_15), (var_15)))), ((~(((/* implicit */int) var_5))))))), (min((min((12111444394162023695ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_17)), (var_19))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(arr_3 [i_0] [i_0]))))));
                var_23 += ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) 1814359902)), (arr_2 [i_1 - 1])))));
            }
        } 
    } 
}
