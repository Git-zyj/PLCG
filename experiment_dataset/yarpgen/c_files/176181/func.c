/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176181
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
    var_14 |= var_5;
    var_15 = ((/* implicit */unsigned int) ((unsigned short) var_4));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 3])))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 - 2])))))));
            arr_8 [i_0] &= ((((/* implicit */_Bool) var_1)) ? (1815649478U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2]))));
        }
        for (int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_17 -= ((/* implicit */_Bool) (((_Bool)1) ? (1815649477U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49679)))));
            arr_13 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15857))));
        }
        arr_14 [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (4194303U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
    }
    for (unsigned char i_3 = 3; i_3 < 13; i_3 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (unsigned short)49692)) ? (((/* implicit */int) arr_5 [i_3 - 2] [i_3] [i_3 + 1])) : ((-2147483647 - 1)))));
        arr_18 [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (3271402278U) : (3240067742U)))))));
    }
    var_19 = ((/* implicit */short) var_12);
}
