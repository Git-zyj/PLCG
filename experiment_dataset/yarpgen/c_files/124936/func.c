/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124936
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
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) var_12);
        var_20 = ((/* implicit */signed char) min((var_20), (((signed char) min((((/* implicit */long long int) ((unsigned int) arr_1 [i_0] [i_0 - 1]))), (min((var_11), (var_11))))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1)) << (((18446744073709551615ULL) - (18446744073709551588ULL)))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) -173272361))));
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_1 - 2])) >> (((4294967295U) - (4294967274U)))));
        var_23 = ((/* implicit */short) 0ULL);
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [(unsigned char)24])))))));
        var_24 = ((/* implicit */_Bool) 6997715606267586256ULL);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 13; i_2 += 3) /* same iter space */
    {
        var_25 += ((/* implicit */unsigned short) ((var_13) ? (511U) : (((/* implicit */unsigned int) -173272361))));
        arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)128)) ? ((+(arr_4 [i_2 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) arr_1 [i_2] [i_2]))))))));
        var_26 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)65531))));
    }
    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (min((((/* implicit */unsigned int) var_1)), (var_8))))))))));
}
