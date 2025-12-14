/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13898
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
    var_13 ^= max((((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)24812)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))))), (var_4));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_12)))) ? (min((((((/* implicit */_Bool) (unsigned short)24818)) ? (var_4) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (unsigned short)34792)))) : (((/* implicit */unsigned long long int) (~(min((((/* implicit */int) (unsigned short)24818)), (arr_1 [8]))))))));
                var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) max((arr_3 [i_0] [i_1]), (((/* implicit */long long int) var_11))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0])) : (((/* implicit */int) (short)0))))) : (arr_3 [i_0] [i_1]))) <= ((-((((_Bool)1) ? (((/* implicit */long long int) var_9)) : ((-9223372036854775807LL - 1LL))))))));
                var_16 = ((/* implicit */unsigned int) (unsigned short)42783);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (-1713846195)))) < (var_6)))));
}
