/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154434
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (var_8)))) ? (arr_0 [i_0 - 2]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? ((+(var_4))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))) : ((-(arr_2 [i_0 - 2])))));
                var_12 -= ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_2 [i_0 - 2]) : (((/* implicit */long long int) 985279654))))) ? (((((/* implicit */_Bool) -2742302866845910175LL)) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 1]))) : ((~(arr_2 [i_0 - 2])))));
            }
        } 
    } 
    var_13 ^= ((/* implicit */_Bool) var_8);
}
