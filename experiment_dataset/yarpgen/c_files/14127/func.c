/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14127
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
    for (signed char i_0 = 4; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] |= ((/* implicit */int) min((0ULL), (((/* implicit */unsigned long long int) max((-3674381670842355020LL), (((/* implicit */long long int) arr_1 [i_0 - 2])))))));
                    var_18 ^= max((((arr_1 [i_0 - 3]) ^ (arr_1 [i_0 - 3]))), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_7)))))) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) var_11)) ? ((-(3674381670842355019LL))) : (var_15))))))));
    var_20 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_17)));
    var_21 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-2607)), (var_11)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) max((3674381670842355019LL), (3674381670842355036LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2629))) : (((((/* implicit */_Bool) (unsigned short)2335)) ? (var_7) : (var_7)))))));
}
