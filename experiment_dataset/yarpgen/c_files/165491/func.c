/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165491
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
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_5)) != (18446744073709551615ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_11))))));
    var_20 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) (unsigned short)8192)) ? (12597588676315737903ULL) : (((/* implicit */unsigned long long int) -1739890887)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_21 |= ((/* implicit */long long int) (short)1493);
        var_22 = ((/* implicit */unsigned long long int) (+(16777215U)));
        var_23 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) arr_2 [i_0 - 1]))))));
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_24 |= ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_1 - 3]))));
        arr_5 [4ULL] |= ((/* implicit */unsigned short) (!(((1ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))));
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (arr_1 [2ULL]) : (((/* implicit */unsigned long long int) ((7413851993818350335LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62)))))))))));
        var_26 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) var_1)))));
    }
}
