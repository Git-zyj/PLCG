/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116666
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
    var_18 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) (short)-2)) : (((/* implicit */int) var_17))))), (var_8)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (var_14)))), (-4LL))) : (20LL)));
                var_19 = ((/* implicit */unsigned int) (short)-10081);
                arr_6 [(short)7] [(short)7] = ((/* implicit */_Bool) (short)-3904);
                arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (-21LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [8ULL]))))))) ? (((/* implicit */int) ((signed char) ((3LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)10080))))))) : (((/* implicit */int) (short)19))));
            }
        } 
    } 
}
