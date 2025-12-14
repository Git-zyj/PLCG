/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158860
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_1]))))) : (-8490331319091037323LL)));
                var_16 = ((/* implicit */long long int) (~(((arr_1 [i_0]) | (arr_1 [i_0])))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((unsigned long long int) var_6));
    var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) var_14))));
    var_19 = ((/* implicit */short) ((((/* implicit */int) max((max((var_13), (var_1))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3)))))))) % (((/* implicit */int) (unsigned char)12))));
}
