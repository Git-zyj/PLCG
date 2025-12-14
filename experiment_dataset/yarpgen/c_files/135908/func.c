/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135908
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
    var_14 = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) ((var_6) != (((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) << (((/* implicit */int) var_10))))))) : (((/* implicit */int) var_9))));
    var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) (~(((/* implicit */int) var_11))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) arr_1 [i_0 + 1]);
        var_17 *= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (short)6138)) == (((/* implicit */int) var_8))))) + (((/* implicit */int) var_0))))), (((4294967270U) + (((/* implicit */unsigned int) var_12))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_18 ^= ((/* implicit */short) arr_2 [(short)10]);
        var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) 553675317))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (2371510914U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64)))))))), (((((/* implicit */_Bool) (short)32757)) ? (9895652371636553447ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4917)))))));
        var_20 = ((/* implicit */int) var_7);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) ((int) ((short) 3748477855U)));
        var_22 = var_0;
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2 + 1])) ? (((/* implicit */int) ((((/* implicit */int) (short)-26562)) != (((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */int) var_1))));
    }
    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) max((((/* implicit */int) (short)-32753)), (var_13))))) - (((/* implicit */int) (unsigned char)192))));
    var_25 = (~(((/* implicit */int) (unsigned char)232)));
}
