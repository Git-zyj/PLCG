/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120409
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3800816201U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) : (13365938714618352800ULL)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_0] [9U] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_1] [i_0])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))))) : (max((((/* implicit */long long int) 4294967295U)), ((-9223372036854775807LL - 1LL))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_3 [(signed char)15] [i_1]);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (1U) : (494151101U)))))) : (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1)))) | (var_1)))));
}
