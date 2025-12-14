/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114815
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
    var_19 -= (-(min((((/* implicit */unsigned long long int) var_16)), (((((/* implicit */_Bool) -383510298)) ? (((/* implicit */unsigned long long int) 761525172U)) : (var_8))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((_Bool) arr_3 [i_0 - 2]));
                var_21 &= ((/* implicit */unsigned char) min((((((var_17) != (((/* implicit */int) var_16)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((_Bool) arr_3 [2]))))), (((/* implicit */int) ((arr_0 [i_0 + 1]) < (arr_0 [i_1 - 2]))))));
                arr_4 [i_0 + 1] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((var_10), (arr_3 [i_0 - 2])))) ? (((/* implicit */int) var_16)) : (((((var_18) + (2147483647))) >> (0U)))))));
                var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-7220)) ? (((/* implicit */unsigned long long int) var_18)) : (0ULL)))))) ? (((/* implicit */int) ((_Bool) 224178677))) : (((/* implicit */int) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 2]))))))));
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) max((arr_1 [(signed char)7]), (((/* implicit */long long int) 133693440)))))));
            }
        } 
    } 
}
