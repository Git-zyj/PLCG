/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177886
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((_Bool) (!(((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 235549756))))))))));
    var_17 = ((/* implicit */int) min((var_17), (var_3)));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (short)32754)) & (((/* implicit */int) var_2))))))) ? (2900258201998411001ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_15)) < (((/* implicit */int) var_6))))) - (((((/* implicit */_Bool) 2900258201998411001ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_19 = arr_1 [i_0];
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1 + 2] [i_1])) >= (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1] [i_1]))))))))));
            }
        } 
    } 
    var_20 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((18446744073709551600ULL), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((var_9) | (((((/* implicit */_Bool) var_0)) ? (var_0) : (1327206913)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_10)) : (var_13)))))));
}
