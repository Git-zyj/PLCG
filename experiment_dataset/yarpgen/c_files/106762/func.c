/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106762
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_11))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 1083979366)) : (18446744073709551612ULL)));
                    var_17 = ((/* implicit */long long int) var_9);
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [2LL] [i_0])) ? (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))) : (((((/* implicit */_Bool) ((arr_3 [i_0] [i_0]) / (21ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32755))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_0]))))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_13))) ? (((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) (short)-4445)))));
}
