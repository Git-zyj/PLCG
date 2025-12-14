/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168118
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
    var_11 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))) ^ (var_2)))))) ? (((((((/* implicit */int) var_4)) == (((/* implicit */int) (unsigned char)114)))) ? (((var_0) + (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] [i_0] |= ((/* implicit */long long int) ((unsigned int) (-((-(((/* implicit */int) var_8)))))));
                    var_12 += ((/* implicit */unsigned char) ((signed char) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) arr_5 [i_0])))))));
                }
            } 
        } 
    } 
}
