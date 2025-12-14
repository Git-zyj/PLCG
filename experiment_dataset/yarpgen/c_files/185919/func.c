/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185919
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
    var_13 = ((/* implicit */short) ((((var_11) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37472))))) ? (((((/* implicit */_Bool) ((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((9223372036854775807LL) - (9223372036854775796LL)))))) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((var_11) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
    var_14 ^= var_2;
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_3))))))) ? (((unsigned long long int) ((((/* implicit */int) (short)22898)) * (((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) >= (var_0))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_16 ^= ((/* implicit */short) min((max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) - (arr_2 [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1] [3U] [6U])) <= (((/* implicit */int) (unsigned char)21))))))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)37455))))) - (((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 1])))))));
                arr_5 [(short)9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57402)) ? (((/* implicit */int) (unsigned short)28063)) : (((/* implicit */int) (unsigned short)7126))));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_4 [i_1] [i_1] [i_0]))));
            }
        } 
    } 
}
