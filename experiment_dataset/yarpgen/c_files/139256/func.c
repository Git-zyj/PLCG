/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139256
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
    var_18 |= ((/* implicit */long long int) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (arr_3 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0 + 2])))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((short) (unsigned char)1)))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 8; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-32745))));
        var_21 = ((/* implicit */unsigned char) (-(arr_6 [i_1 + 1] [i_1])));
        arr_7 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    }
    var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-522)))) & (((/* implicit */int) var_17))))) ? (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)254)))) * (((/* implicit */int) var_16)))) : (((/* implicit */int) max((((/* implicit */short) var_9)), (((short) var_11)))))));
}
