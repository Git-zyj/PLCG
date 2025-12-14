/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177949
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)8)) != (((((/* implicit */_Bool) 889814614)) ? (((/* implicit */int) (unsigned short)65505)) : (1656499861)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_19 ^= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 889814614))))) >= (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_2]))));
                    var_20 *= ((/* implicit */signed char) (-(((((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 2])) * (((/* implicit */int) arr_4 [i_1 + 3] [i_1 + 2]))))));
                }
            } 
        } 
    } 
}
