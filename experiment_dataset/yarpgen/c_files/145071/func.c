/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145071
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [i_2] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 2] [i_1 + 1] [i_1 - 3])) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) arr_6 [i_1] [i_1 - 2] [i_1 + 1] [i_1 - 3]))))) ? ((~(((unsigned long long int) (signed char)44)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1]))));
                    arr_8 [i_1] [i_2] = (~(((int) 4503599627370496ULL)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_0)) - (((/* implicit */int) (signed char)58))))))) ? (((/* implicit */unsigned long long int) ((int) -118862848))) : (((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
}
