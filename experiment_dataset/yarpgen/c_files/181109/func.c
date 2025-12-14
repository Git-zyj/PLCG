/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181109
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((var_1) < (((/* implicit */unsigned int) ((int) 9223372036854775789LL)))))));
    var_12 = ((/* implicit */unsigned int) (signed char)27);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */int) min((var_13), ((~((~(((/* implicit */int) var_5))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((var_1) >= (((/* implicit */unsigned int) var_6))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))));
        var_15 ^= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))));
        var_16 = ((/* implicit */_Bool) ((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 1])))));
    }
    for (unsigned char i_2 = 2; i_2 < 23; i_2 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_8)), (2U)));
        var_18 = ((/* implicit */int) min((var_18), (((((((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))) < (var_10))) ? (max(((+(((/* implicit */int) (signed char)27)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (9223372036854775807LL)))))) : (((/* implicit */int) arr_1 [i_2] [i_2 + 1]))))));
        var_19 = ((/* implicit */unsigned long long int) max((((var_1) / (((/* implicit */unsigned int) arr_7 [i_2 - 2])))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) var_1);
        var_21 = (!(((/* implicit */_Bool) var_8)));
        var_22 = ((/* implicit */int) max((var_22), ((~(((/* implicit */int) ((unsigned char) var_5)))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)-123)))))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1)) ? ((-(((/* implicit */int) var_5)))) : (((((/* implicit */int) (signed char)117)) + (((/* implicit */int) (short)-32760))))));
    }
}
