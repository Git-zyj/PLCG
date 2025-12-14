/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16817
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (unsigned char)75)))))))));
                arr_7 [i_1] = (-(((/* implicit */int) ((arr_1 [i_0 + 2]) < (((/* implicit */long long int) var_15))))));
            }
        } 
    } 
    var_19 = var_14;
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) * (var_0))) - (((/* implicit */unsigned long long int) ((int) var_8)))))) ? (((min((var_5), (((/* implicit */unsigned long long int) var_17)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_9) : (var_9)))))) : (((((/* implicit */unsigned long long int) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_13)))))) + (((((/* implicit */unsigned long long int) var_4)) - (var_1)))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 22; i_2 += 4) 
    {
        for (int i_3 = 1; i_3 < 23; i_3 += 3) 
        {
            {
                arr_13 [i_2 + 2] = ((/* implicit */unsigned char) ((int) (~(min((((/* implicit */unsigned long long int) var_12)), (arr_12 [i_2 - 1] [i_3]))))));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)193))) / (-5810951015162795152LL))))));
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) min((var_14), (((/* implicit */long long int) ((unsigned short) var_10)))))) ? (((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))) : (max((var_7), (var_14))))) : (min((((/* implicit */long long int) ((unsigned short) 12186509113257012441ULL))), (var_12))));
}
