/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149654
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
    var_10 += ((/* implicit */short) (unsigned short)15315);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_11 ^= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */long long int) arr_1 [i_0])) : (var_6)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (8191U))) : (((/* implicit */unsigned int) (-(arr_0 [4ULL])))))));
        var_12 *= ((/* implicit */signed char) 12507759032867468417ULL);
        var_13 = arr_1 [i_0];
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_14 *= ((/* implicit */_Bool) ((int) (+(4294959104U))));
        var_15 = arr_3 [i_1] [(unsigned short)10];
    }
    var_16 ^= ((/* implicit */int) (((!(((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned short)52844)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)-12367)) ^ (((/* implicit */int) (unsigned short)52844))))) ? (((unsigned int) var_4)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (var_4))))))));
}
