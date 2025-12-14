/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139168
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
    var_11 = ((((((/* implicit */_Bool) (~(var_8)))) ? (min((((/* implicit */unsigned int) var_3)), (3907049667U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (3907049639U))))))) << ((((-(((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_9)))))) + (50))));
    var_12 = ((/* implicit */short) min((((unsigned int) (~(((/* implicit */int) (unsigned char)238))))), (((/* implicit */unsigned int) var_2))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)181)) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned int) arr_0 [i_0 - 1] [i_0])), (var_4))) : (min((((/* implicit */unsigned int) var_0)), (var_4)))))) ? (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned short) (signed char)67)), ((unsigned short)0))))) : (((/* implicit */int) max((((unsigned short) var_7)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
        var_15 *= ((/* implicit */unsigned int) ((unsigned short) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))) < (var_4)))));
    }
    for (signed char i_1 = 3; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [i_1 - 2] [i_1]))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 + 3])))))) + (((arr_1 [i_1 + 1]) << (((arr_1 [i_1 - 2]) - (2298929923U)))))));
    }
}
