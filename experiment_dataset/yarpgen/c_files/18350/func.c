/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18350
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) 3734406631U)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)167))))) : (((/* implicit */unsigned int) ((2147483632) >> (((((/* implicit */int) (unsigned short)56063)) - (56045))))))))) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483633)) ? (var_5) : (var_4)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((var_0) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))))));
    var_11 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [6U] |= ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_12 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) arr_0 [i_0] [(signed char)10]);
        var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_9)))) ? (((var_6) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) -2147483641)) || (((/* implicit */_Bool) 0U)))))))));
    }
}
