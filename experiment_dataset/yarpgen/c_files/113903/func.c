/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113903
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) (unsigned short)40141)) : (((/* implicit */int) (signed char)-119))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)4)) / (((/* implicit */int) (unsigned char)240))))) ? ((-(3277175102U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236)))))) ^ (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (var_6))), (max((var_12), (var_11)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) -374753841538925373LL))));
                arr_7 [i_0] [i_0] [5] = (-(((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((((/* implicit */_Bool) 420731875627991381ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) : (arr_4 [i_0] [i_0] [14ULL]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))))));
            }
        } 
    } 
}
