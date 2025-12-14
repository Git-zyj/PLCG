/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156269
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((max((((/* implicit */int) var_3)), ((~(((/* implicit */int) arr_1 [i_0])))))) + (((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_1])))) << (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) var_16)))))))));
                var_19 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_0]) >= (arr_3 [i_1]))))) / (var_10)))));
                arr_4 [i_0] = ((/* implicit */int) arr_2 [i_0] [i_1]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_12)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((((/* implicit */int) var_16)) - (100)))))) ? (((((/* implicit */_Bool) 8704275553270199829ULL)) ? (((/* implicit */int) (short)-16195)) : (((/* implicit */int) var_17)))) : ((+(((/* implicit */int) var_17))))))) : (var_6))))));
}
