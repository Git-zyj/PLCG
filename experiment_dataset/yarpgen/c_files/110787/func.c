/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110787
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
    var_10 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) var_5)) % (((/* implicit */int) var_7)))) : (((/* implicit */int) var_2)))));
    var_11 -= ((/* implicit */_Bool) 7375327733862872616ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) ((unsigned short) arr_2 [i_0] [(unsigned char)24] [i_1 + 1]));
                arr_5 [i_0 - 1] = ((/* implicit */unsigned short) (short)-16213);
                var_13 = ((/* implicit */_Bool) max((var_13), (((_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) (unsigned short)45346)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85))) : (arr_4 [i_1 + 1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_1 + 1] [i_1 + 1]))))))));
            }
        } 
    } 
}
