/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127753
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
    var_16 = ((/* implicit */unsigned int) var_6);
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_15)), (((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (unsigned char)15)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_3 [i_0] [14LL] [i_0]) : (arr_3 [i_0] [12] [i_0])))) ? (max((var_14), (-9223372036854775790LL))) : (((/* implicit */long long int) arr_2 [i_0 - 1]))))));
                arr_5 [(short)8] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_3)))) ? (((arr_2 [i_1]) % (((/* implicit */int) var_13)))) : (((/* implicit */int) max((((/* implicit */short) (signed char)4)), (arr_4 [i_1]))))))) * (((unsigned int) arr_1 [(unsigned char)10]))));
            }
        } 
    } 
}
