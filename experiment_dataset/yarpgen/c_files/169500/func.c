/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169500
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (-(((/* implicit */int) (signed char)26)))))) ^ (((/* implicit */int) (((+(((/* implicit */int) (signed char)79)))) < (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) (unsigned char)127)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_19 += ((/* implicit */signed char) ((((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) (unsigned char)0)))) - (((/* implicit */int) var_13))));
        var_20 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)123))));
        var_21 = ((/* implicit */unsigned char) var_11);
        var_22 = ((/* implicit */unsigned char) ((signed char) (signed char)20));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (min((((/* implicit */int) var_14)), (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (signed char)53)))))) : (((/* implicit */int) arr_4 [i_1]))));
        var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */int) (signed char)-32)) ^ (((/* implicit */int) (signed char)60)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1]))))))) <= (((((/* implicit */_Bool) min(((signed char)40), ((signed char)29)))) ? (((/* implicit */int) (signed char)47)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_1]))))))));
        arr_5 [i_1] [i_1] = (signed char)-5;
    }
    var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? ((~(((((/* implicit */int) (signed char)-58)) ^ (((/* implicit */int) (signed char)-126)))))) : (((/* implicit */int) var_2))));
    var_26 = var_11;
}
