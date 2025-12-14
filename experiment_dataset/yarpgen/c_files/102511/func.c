/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102511
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                var_15 &= ((/* implicit */long long int) (((~((~(((/* implicit */int) arr_1 [i_0] [i_1 - 1])))))) <= (((/* implicit */int) (((~(var_3))) <= (min((((/* implicit */unsigned long long int) arr_2 [i_0] [(unsigned char)17] [i_1 - 4])), (var_8))))))));
                var_16 = arr_5 [i_0] [i_0] [i_0 + 1];
                arr_6 [i_0] = ((/* implicit */_Bool) (-(((((arr_5 [i_0] [i_0 + 1] [i_1 - 2]) + (9223372036854775807LL))) >> (((-42259914) + (42259933)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) 5491260606921940612ULL)) ? (1286592499U) : (((/* implicit */unsigned int) 42259914))))))) ? (((/* implicit */unsigned long long int) var_5)) : ((-(min((var_8), (((/* implicit */unsigned long long int) var_11))))))));
    var_18 = ((/* implicit */unsigned short) var_0);
}
