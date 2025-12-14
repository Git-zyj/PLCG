/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120151
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
    var_17 -= ((/* implicit */short) -2046480075);
    var_18 = var_4;
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [0LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) % (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_15)) : (7227305799470582255LL)))))) ? ((~(arr_2 [i_0 - 1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((long long int) 9223372036854775796LL)))));
                arr_7 [i_1] [i_1] [4] = ((/* implicit */unsigned long long int) ((max((arr_0 [i_0 - 1]), (((/* implicit */long long int) var_14)))) & (((/* implicit */long long int) ((/* implicit */int) max((var_9), (var_3)))))));
                arr_8 [i_0] [i_1] = ((((/* implicit */_Bool) (((_Bool)1) ? (arr_1 [i_0 - 1]) : (arr_0 [i_0 - 1])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((14672118356404990438ULL) | (((/* implicit */unsigned long long int) -9223372036854775771LL))))) ? (((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)33))) : (9223372036854775796LL))) : (((/* implicit */long long int) ((int) var_8))))));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_2 [i_0] [i_1] [i_0 + 1]))) : (((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0] [i_1] [i_0 - 1]) : (arr_2 [i_0] [i_1] [i_0 + 1]))))))));
                var_20 = ((/* implicit */long long int) (~(max((((int) -9223372036854775796LL)), (((/* implicit */int) var_16))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) var_7)) ? (((var_3) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18707))) : (((((/* implicit */_Bool) (short)-22673)) ? (-7227305799470582256LL) : (((/* implicit */long long int) ((/* implicit */int) (short)18707))))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
}
