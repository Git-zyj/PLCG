/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133853
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
    for (short i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [(unsigned short)6])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */int) (unsigned short)32401)) : (((/* implicit */int) (unsigned short)5888)))))));
                var_19 = ((/* implicit */signed char) max((((36028797018963968LL) / (((/* implicit */long long int) ((/* implicit */int) (short)4096))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 + 2])))))));
                arr_5 [i_1] [i_0] [i_0 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_1] [i_0] [i_0])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
            }
        } 
    } 
    var_20 = var_6;
}
