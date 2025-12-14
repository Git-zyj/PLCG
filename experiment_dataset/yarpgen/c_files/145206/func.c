/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145206
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
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_16 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_2))) ? (arr_4 [i_1] [(signed char)6]) : (((long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((int) var_7))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_14) : (var_3)))), (((((/* implicit */unsigned long long int) arr_0 [8ULL])) ^ (5354967089515983142ULL))))));
                arr_6 [i_0] [i_1 + 3] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) ((536805376LL) >> (((((/* implicit */int) arr_1 [i_0 - 3])) - (5515)))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) % (var_12)))))))));
            }
        } 
    } 
}
