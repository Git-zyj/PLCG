/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165910
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
    var_19 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            {
                var_20 = ((arr_3 [i_0]) - ((-(arr_3 [i_0]))));
                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */_Bool) 6940446615334315276LL)) || (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */long long int) (~(arr_2 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) min((((/* implicit */int) (short)27868)), (-927448501)))) ? (arr_3 [i_1 + 1]) : (arr_3 [i_0]))));
                var_22 = ((/* implicit */int) (-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (3U) : (((/* implicit */unsigned int) -451987936))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((var_9) >> (((((/* implicit */int) (unsigned char)74)) - (47))))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) && (((/* implicit */_Bool) (+((-(var_4))))))));
}
