/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106663
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3421007494U)) ? (3421007494U) : (3421007494U)));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */unsigned long long int) 3421007494U)) : (max((((/* implicit */unsigned long long int) var_0)), (arr_3 [i_1] [i_1] [i_0])))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_2 [i_0 - 2]))))));
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 2])) / (((/* implicit */int) (signed char)7))))) != (min((((/* implicit */long long int) ((arr_3 [i_0] [i_1] [i_0 - 2]) != (((/* implicit */unsigned long long int) -7005799760381221137LL))))), ((~(-7448320390256328543LL)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38809)) ? (2904394826U) : (2904394826U)));
}
