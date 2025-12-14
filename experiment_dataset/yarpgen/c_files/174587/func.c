/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174587
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
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((unsigned short) var_4))))))));
    var_18 = ((/* implicit */_Bool) var_4);
    var_19 = ((int) var_3);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 1446989624U)) : (arr_3 [i_1] [i_0])))));
            }
        } 
    } 
}
