/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105943
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_11 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (signed char)73)), (((((/* implicit */_Bool) arr_3 [(signed char)2])) ? (arr_3 [i_0]) : (arr_3 [i_0])))));
                var_12 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (-(arr_2 [i_1] [10ULL])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (arr_2 [i_1] [i_0]))));
                arr_4 [i_1] [i_0] [5ULL] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (6857272236317423412ULL)))) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) 268435456)));
                arr_5 [i_0] = ((/* implicit */unsigned int) ((min((1110163684), (((/* implicit */int) arr_1 [i_1] [i_0])))) + (((((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_1 [11LL] [i_0])))) + (2147483647))) << (((((((((/* implicit */_Bool) arr_1 [1ULL] [11])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) (short)-6104)))) + (14976))) - (5)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_1))));
}
