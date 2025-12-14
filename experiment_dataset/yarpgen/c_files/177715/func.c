/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177715
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
    var_14 = ((/* implicit */long long int) ((unsigned char) (+(((/* implicit */int) var_11)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (3780436918U));
        var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
        arr_3 [i_0] [(signed char)6] = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
        arr_4 [i_0] = ((/* implicit */short) (-(var_12)));
    }
    /* LoopSeq 2 */
    for (int i_1 = 1; i_1 < 10; i_1 += 2) 
    {
        var_17 = ((/* implicit */short) (-(min((3780436933U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4)))))))));
        var_18 = ((/* implicit */unsigned short) (-((-(var_12)))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((short) var_8))), (((((/* implicit */_Bool) (+(var_12)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))) : (var_13))) : (((/* implicit */unsigned long long int) var_2)))))))));
    }
    for (short i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_5)))));
        arr_12 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((15202635053891049350ULL), (((/* implicit */unsigned long long int) 370728522U))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_13))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)18214)), (var_1))))));
    }
}
