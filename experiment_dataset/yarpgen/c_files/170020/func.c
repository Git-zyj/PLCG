/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170020
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
    var_17 = ((/* implicit */short) (~(((/* implicit */int) var_11))));
    var_18 = ((_Bool) ((((/* implicit */int) ((_Bool) 1048575))) - ((+(var_13)))));
    var_19 = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) var_5)))))), (min((max((1891465087566690977ULL), (((/* implicit */unsigned long long int) var_11)))), (min((((/* implicit */unsigned long long int) var_11)), (var_10))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1891465087566690977ULL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))))));
                arr_6 [(short)4] = ((/* implicit */int) (+(((((arr_2 [i_1] [i_0]) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) << ((((+(((/* implicit */int) var_5)))) - (167)))))));
                var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (~(1891465087566690977ULL)))) ? (((/* implicit */int) arr_2 [5LL] [5LL])) : (((((/* implicit */_Bool) var_2)) ? (arr_3 [i_0]) : (((/* implicit */int) var_8))))))));
            }
        } 
    } 
}
