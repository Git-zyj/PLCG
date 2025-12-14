/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137800
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
    var_18 = ((/* implicit */short) (~(((/* implicit */int) max((var_8), (var_5))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [(short)10])) * (((/* implicit */int) (short)-32758))))))), ((+(arr_3 [i_1 + 3] [i_1 - 1])))));
                    var_20 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32764))));
                    var_21 = (short)32758;
                    var_22 ^= ((/* implicit */long long int) arr_3 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_23 ^= var_1;
    var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (((((/* implicit */_Bool) min((var_7), (var_7)))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) (short)32758)))))))));
    var_25 = ((/* implicit */unsigned long long int) var_2);
}
