/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149766
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
    var_20 = ((((/* implicit */_Bool) ((var_13) % (max((var_0), (var_13)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) : (max((((/* implicit */unsigned long long int) (signed char)72)), (989729968696453226ULL))));
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (-(var_9))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_22 *= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */int) (signed char)-72)))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1 - 1]))) ? (((/* implicit */int) (signed char)-85)) : (arr_3 [(short)3] [i_1] [i_0])));
            }
        } 
    } 
}
