/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183963
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(var_8)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) 9007199254732800LL)) : (((/* implicit */unsigned long long int) ((int) var_8)))))))))));
    var_12 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) & ((-(((/* implicit */int) (!(((/* implicit */_Bool) 8633991210847263277ULL)))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_1] = ((/* implicit */int) ((unsigned short) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [(short)14])))))));
                var_13 = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_1 - 1])))));
                var_14 = ((/* implicit */signed char) var_6);
                var_15 = ((/* implicit */unsigned int) ((short) ((_Bool) arr_7 [i_1 - 1] [i_1] [i_1 - 1])));
            }
        } 
    } 
}
