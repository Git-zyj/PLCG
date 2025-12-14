/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154180
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2] [(_Bool)0])) >> (((4294967291U) - (4294967266U)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) 4U))))) : (((/* implicit */int) ((4294967291U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1 - 2] [(_Bool)1]))))))));
                    arr_10 [15U] [i_1] [15U] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 - 2] [i_1 - 2] [i_1 - 2])) ? (((/* implicit */long long int) arr_7 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2])) : (6550056417893280829LL))));
                    var_20 = ((/* implicit */int) ((unsigned int) ((arr_7 [i_0] [i_1 - 2] [0U] [i_1 - 2]) == (arr_7 [i_0] [i_1 - 1] [i_2] [i_1 - 2]))));
                    arr_11 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((signed char) ((arr_3 [i_0] [i_0]) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_2])), (var_11)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_11)))))) >= ((-(6550056417893280822LL)))))) : (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (var_7)))) ^ (((int) (_Bool)1)))))))));
    var_22 = ((/* implicit */_Bool) ((signed char) (((+(504403158265495552LL))) > (((/* implicit */long long int) ((/* implicit */int) ((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
    var_23 -= ((/* implicit */long long int) ((int) var_11));
}
