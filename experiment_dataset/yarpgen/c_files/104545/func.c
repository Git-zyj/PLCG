/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104545
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 17; i_2 += 3) 
            {
                {
                    var_18 ^= max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_2 [i_0] [i_1 + 1]) : (((/* implicit */unsigned long long int) var_15))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-112)) >= (((/* implicit */int) arr_3 [i_0])))))))), (((((((((/* implicit */_Bool) var_17)) ? (-8262486963134098115LL) : (((/* implicit */long long int) arr_4 [i_0] [i_2])))) + (9223372036854775807LL))) << ((((((+(((/* implicit */int) var_6)))) + (42))) - (7))))));
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (+((+(arr_2 [i_2 - 4] [i_2 + 2]))))))));
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */int) var_2);
}
