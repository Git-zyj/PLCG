/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11571
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */unsigned long long int) var_6)) : (((var_7) >> (((var_5) + (699662434)))))))) ? ((-(((/* implicit */int) (signed char)-25)))) : (var_8)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_1 - 1])) : (((/* implicit */int) var_15))))));
                var_19 &= (((((+(((/* implicit */int) arr_4 [i_1 + 1])))) + (2147483647))) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [(signed char)4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)24))) : (arr_3 [(unsigned short)4] [(unsigned short)4])))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) min(((signed char)-91), ((signed char)-127)))))));
            }
        } 
    } 
}
