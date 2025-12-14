/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102314
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * ((-(((/* implicit */int) (short)-13291))))))) ? ((+(max((var_15), (((/* implicit */int) var_8)))))) : (((/* implicit */int) (unsigned char)229))));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) var_6)) : (var_13)))))) && (((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) var_4);
                var_19 = (-(max((((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)43))) : (arr_3 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_6) : (((/* implicit */int) (unsigned char)229))))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)192)) ? (min(((-(((/* implicit */int) (unsigned char)175)))), ((+(((/* implicit */int) arr_4 [i_0] [i_1 + 1])))))) : ((+(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
