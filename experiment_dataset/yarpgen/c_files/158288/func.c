/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158288
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
    var_16 = var_4;
    var_17 = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) -6756401743262563567LL)) ? (6359028373413136522LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))), (((/* implicit */long long int) var_2))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_18 += ((/* implicit */unsigned short) ((((arr_0 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14171)))));
        var_19 |= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_13))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) ((unsigned int) arr_4 [i_1]));
        arr_5 [i_1] [(short)10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1])))))));
    }
    var_21 = ((/* implicit */unsigned short) var_6);
    var_22 = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65532))) : (1152921504606842880LL)))));
}
