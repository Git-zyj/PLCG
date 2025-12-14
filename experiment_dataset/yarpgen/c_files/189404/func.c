/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189404
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((min((arr_6 [(_Bool)0]), (arr_5 [i_0]))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)29755))))))))));
                var_20 = ((/* implicit */unsigned short) arr_6 [i_1]);
                var_21 = ((unsigned long long int) (_Bool)1);
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) (+(max((9ULL), (((/* implicit */unsigned long long int) var_10))))));
    var_23 = ((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (-437836603)));
}
