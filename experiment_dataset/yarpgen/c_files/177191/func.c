/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177191
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
    var_15 -= ((/* implicit */int) (!((((!(((/* implicit */_Bool) (short)18475)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-19105)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((((/* implicit */int) var_0)), (var_14)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) arr_1 [i_0]))));
                arr_7 [i_0] [(signed char)4] &= (((-(min((((/* implicit */unsigned long long int) -1092526569)), (arr_2 [i_0]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-1))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (var_13)))) ? ((+(var_4))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
}
