/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178300
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
    var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_12)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (min((12989325746313912464ULL), (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) (+((~(4294967295U))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_2]))))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))) : (arr_1 [i_1] [i_2]))) : (((arr_1 [13LL] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [7LL]))))))))));
                    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)6] [(signed char)6])) ? (min((((/* implicit */unsigned int) arr_3 [i_0] [i_2])), (14U))) : (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2]))))) ? ((+(arr_0 [i_2] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [9] [i_1] [i_2])) ? (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_0])) : (arr_6 [4U] [i_1] [i_2]))))));
                    var_20 -= ((/* implicit */unsigned long long int) arr_6 [i_2] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */unsigned short) min((((/* implicit */signed char) ((var_0) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))), (var_14)));
}
