/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15803
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
    var_10 |= ((/* implicit */signed char) max((max((5844327425101464978LL), (-5844327425101464990LL))), (-5844327425101464978LL)));
    var_11 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >= ((~((~(((/* implicit */int) var_4))))))));
    var_12 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) max((var_13), (((((/* implicit */long long int) (-(((/* implicit */int) (short)30338))))) % ((~(-3945713648432345608LL)))))));
                var_14 = -1233484648784649414LL;
                arr_5 [i_1 - 1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-30341)) + (2147483647))) >> ((((-(arr_2 [i_0] [i_0]))) - (736639749)))));
                var_15 = ((/* implicit */signed char) (~(arr_2 [i_1 - 1] [i_1 - 1])));
            }
        } 
    } 
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((unsigned long long int) ((max((9223372036854775807LL), (((/* implicit */long long int) var_7)))) << (((max((((/* implicit */unsigned long long int) var_4)), (17828105240293263485ULL))) - (17828105240293263485ULL)))))))));
}
