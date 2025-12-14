/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186185
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
    var_14 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) var_1);
        var_15 *= ((/* implicit */unsigned int) -2074699180000969253LL);
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) -2074699180000969253LL);
        var_17 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1]))))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1])) && (((/* implicit */_Bool) arr_6 [i_1] [i_1]))))))) : (((/* implicit */int) (!(var_6)))));
    }
    for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        var_18 = ((/* implicit */long long int) arr_9 [i_2] [i_2]);
        arr_11 [i_2] [i_2] = min((((/* implicit */long long int) ((((/* implicit */_Bool) -2074699180000969253LL)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) >= (((/* implicit */int) arr_9 [i_2] [i_2]))))) : (((/* implicit */int) ((((/* implicit */long long int) arr_10 [i_2])) >= (-1LL))))))), (min((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)202)), (3279037471U)))), (0LL))));
    }
    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        arr_15 [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3])) ? (arr_12 [i_3]) : (arr_12 [i_3])))) || (((/* implicit */_Bool) -681761204)))) || (((/* implicit */_Bool) arr_12 [i_3]))));
        var_19 |= ((/* implicit */short) 0);
    }
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)7)), (var_2)))) ? (var_9) : (((((/* implicit */_Bool) 1825309367)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-7594))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((var_6) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_13))))));
}
