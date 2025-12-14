/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102737
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
    var_18 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)-1))))));
    var_19 = ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_9 [i_2] = ((((/* implicit */unsigned int) ((((/* implicit */int) min((var_16), (var_15)))) | (((/* implicit */int) max((arr_7 [i_0] [i_1] [i_0]), (((/* implicit */signed char) var_8)))))))) - (min((((/* implicit */unsigned int) ((var_2) != (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), (max((((/* implicit */unsigned int) var_8)), (var_14))))));
                    arr_10 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) max((max((((/* implicit */signed char) var_10)), (arr_0 [i_2]))), (((/* implicit */signed char) max((arr_3 [i_0]), (arr_3 [i_0]))))))) * (((/* implicit */int) min((((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) (signed char)127)))), ((!(((/* implicit */_Bool) 4294967294U)))))))));
                    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(arr_4 [i_0] [i_2]))))));
                }
            } 
        } 
    } 
}
