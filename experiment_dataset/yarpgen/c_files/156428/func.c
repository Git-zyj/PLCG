/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156428
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? ((-(((((arr_0 [9]) + (9223372036854775807LL))) << (((((/* implicit */int) (short)24926)) - (24926))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775808ULL))))))));
                var_17 -= ((min((max((16147290747604113239ULL), (((/* implicit */unsigned long long int) (unsigned short)34295)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_3 [i_0] [i_1] [5U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [12LL])))))))) / (((arr_2 [i_1] [i_0]) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_0])) : (0ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)70))))))));
                var_18 |= ((/* implicit */short) ((2300661625U) << (((((/* implicit */int) (short)7081)) - (7058)))));
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned char) var_13);
    var_20 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_6)) : (var_0)))) ? (((/* implicit */int) ((unsigned short) 2147483647))) : (((/* implicit */int) max(((unsigned short)31240), ((unsigned short)61007)))))))));
}
