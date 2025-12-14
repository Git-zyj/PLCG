/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117276
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-81)) ? (2066071963U) : (2910481231U)))) : (6693702636540716357ULL)));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)113)) ? (arr_3 [i_0]) : (((/* implicit */int) ((-238064396) == (((/* implicit */int) (unsigned char)121)))))));
    }
    var_21 = ((/* implicit */int) ((((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned char)143))))))) - (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)83))))) ? (9223372036854775801LL) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)141)))))))));
    var_22 = ((/* implicit */unsigned int) var_2);
}
