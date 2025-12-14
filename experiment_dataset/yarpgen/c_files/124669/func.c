/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124669
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 -= ((/* implicit */_Bool) (~(((((/* implicit */int) arr_5 [i_1 - 1])) + (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
                arr_6 [i_0] [i_1 - 1] [10] = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned short) arr_5 [i_0]))))))));
                var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0])) * (((/* implicit */int) arr_2 [(short)17] [i_1 - 1]))))) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_16))))))), (min((((/* implicit */unsigned long long int) ((unsigned int) arr_2 [1U] [i_1]))), ((((_Bool)1) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned short)4])))))))));
                arr_7 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_0])), ((~(max((4U), (((/* implicit */unsigned int) (_Bool)1))))))));
                var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)123))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((signed char) var_13));
    var_21 = ((/* implicit */_Bool) var_15);
}
