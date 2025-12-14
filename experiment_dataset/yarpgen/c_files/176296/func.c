/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176296
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
    var_15 = ((/* implicit */unsigned long long int) (unsigned char)228);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) var_13);
                    var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_0)))) != (min((((/* implicit */long long int) var_1)), (var_13)))))) | (((/* implicit */int) var_4))));
                    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-498)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)2))))) ? (var_14) : (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1] [i_2])))))));
                    var_18 = ((/* implicit */short) min((var_18), (max((((short) arr_8 [i_0] [i_1] [i_0])), (var_4)))));
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_7))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 6104925258436717233LL)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_2)))))) : (var_11)));
}
