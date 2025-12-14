/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16926
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
    var_10 = ((/* implicit */_Bool) min((((/* implicit */short) ((-895978739) <= (1572864)))), (var_3)));
    var_11 = ((/* implicit */long long int) var_4);
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_0)), (arr_1 [i_0]))), (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-116))) + (10360276698043995LL))) - (((/* implicit */long long int) (-(2111437371U))))))));
        var_12 = arr_1 [i_0 + 1];
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 4; i_1 < 12; i_1 += 4) 
    {
        var_14 = ((/* implicit */long long int) ((arr_5 [i_1 - 2]) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_5 [i_1 - 2]))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (((/* implicit */int) arr_5 [i_1 - 3])) : (((/* implicit */int) arr_6 [i_1 - 1]))));
    }
    for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) 1848278591U)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_8 [i_2]))), (((/* implicit */long long int) var_0))))));
        var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_8 [i_2 - 1])) ? (arr_8 [i_2 - 2]) : (arr_8 [i_2 - 2])))));
        var_17 = ((/* implicit */int) min((((/* implicit */long long int) (+(2446688699U)))), (((((/* implicit */_Bool) (+(13571417004873899783ULL)))) ? (arr_8 [i_2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2446688716U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_9))))))));
    }
    var_18 = (~(((var_5) ? (((/* implicit */int) var_2)) : (var_7))));
}
