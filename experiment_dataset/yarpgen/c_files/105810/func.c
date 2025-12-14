/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105810
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
    var_16 -= ((/* implicit */short) max(((+(((/* implicit */int) var_15)))), (((/* implicit */int) var_11))));
    var_17 = ((/* implicit */short) ((unsigned int) var_3));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [(signed char)6] [(signed char)6] [(signed char)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))) : (arr_5 [i_1] [i_1])))) ? (max((arr_3 [i_0]), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_5 [i_0] [i_0])))))))) : (((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0])), (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (arr_5 [i_0] [i_0])))));
                var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_0)))) ? (max((var_8), (((/* implicit */int) var_1)))) : ((+(((/* implicit */int) var_1))))))) ? (((long long int) (-(arr_2 [i_0] [i_0])))) : (((/* implicit */long long int) arr_2 [i_0] [i_0])));
                var_19 &= ((/* implicit */long long int) arr_5 [i_0] [i_0]);
                arr_7 [i_0] = ((/* implicit */short) (((~(max((((/* implicit */int) var_9)), (var_8))))) < (((/* implicit */int) ((short) var_9)))));
            }
        } 
    } 
}
