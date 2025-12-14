/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16864
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
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */signed char) ((short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)128)) : (var_10)))) & (((var_2) << (((((/* implicit */int) arr_0 [i_0] [i_0])) - (31156))))))));
                var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */int) (short)19438))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [7LL] [i_1]))))) : (((int) (unsigned char)24))))) ^ ((-(((unsigned long long int) arr_3 [i_0] [i_1]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (2507075370807985314LL) : (2507075370807985314LL)))))))) % ((~(var_0)))));
}
