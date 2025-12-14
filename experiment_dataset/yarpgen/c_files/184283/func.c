/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184283
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
    var_16 = ((/* implicit */int) min((((/* implicit */long long int) max((((int) (short)12908)), (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_2)))))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-12918))) - (var_1)))) : (var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_17 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_0 [i_1]))))) ? (((3309680102381715887LL) + (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((int) arr_1 [i_1])))))) ? (((/* implicit */int) (short)12908)) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1 + 1] [i_0])) > (((/* implicit */int) arr_0 [i_0]))))));
                var_18 += ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_19 = ((/* implicit */unsigned char) var_1);
                var_20 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))) ? (((/* implicit */unsigned int) (-(2147483647)))) : (max((2482848496U), (((/* implicit */unsigned int) (signed char)-104)))))) <= (((/* implicit */unsigned int) (((+(2147483647))) & (((((/* implicit */int) (short)-1)) * (((/* implicit */int) arr_3 [i_0] [i_0] [(short)20]))))))));
            }
        } 
    } 
}
