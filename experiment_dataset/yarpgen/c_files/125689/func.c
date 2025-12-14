/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125689
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
    var_16 |= ((/* implicit */unsigned short) max((((/* implicit */int) min((((/* implicit */unsigned short) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16308)))))), ((unsigned short)59978)))), (max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)30))))));
    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_13)))) ? (-168015470) : ((((((~(((/* implicit */int) var_3)))) + (2147483647))) >> (((((((/* implicit */int) (unsigned short)49236)) - (((/* implicit */int) var_3)))) - (20647)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) min((var_18), ((~(((/* implicit */int) var_7))))));
        arr_2 [i_0 - 1] = ((/* implicit */unsigned char) ((unsigned short) arr_0 [i_0 - 1] [i_0 - 1]));
        var_19 = ((/* implicit */unsigned short) ((arr_1 [i_0 + 3]) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)64194))) + (27522051821216361LL))) : (((((/* implicit */_Bool) var_8)) ? (27522051821216361LL) : (((/* implicit */long long int) var_1))))));
    }
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 10U)) ? (min((((/* implicit */int) ((unsigned short) 27522051821216364LL))), (var_1))) : ((~(((/* implicit */int) var_3)))))))));
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16299))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
}
