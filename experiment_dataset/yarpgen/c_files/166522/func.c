/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166522
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
    var_15 = ((/* implicit */short) ((min((((((-6323606917924787003LL) + (9223372036854775807LL))) << (((((((/* implicit */int) var_2)) + (23070))) - (29))))), (((/* implicit */long long int) min(((unsigned char)1), (((/* implicit */unsigned char) var_10))))))) ^ (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (var_14))))))))));
    var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned short)29875))));
    var_17 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_1])))));
                arr_4 [i_0] = (unsigned short)12;
            }
        } 
    } 
}
