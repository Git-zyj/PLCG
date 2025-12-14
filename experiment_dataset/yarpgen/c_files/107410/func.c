/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107410
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)65528))));
        arr_3 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_14) : (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */int) ((unsigned long long int) ((arr_1 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) (short)22860))))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((4223432041U) * (((/* implicit */unsigned int) ((min((arr_0 [i_1] [i_1]), (((/* implicit */int) var_6)))) & (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-30595))))))))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) var_2);
        var_17 = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_2] [i_2])) & (((/* implicit */int) var_9))));
        var_18 += ((/* implicit */_Bool) arr_8 [i_2]);
        arr_10 [i_2] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)33109)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_2])))) ^ (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_8 [i_2])))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_9 [i_3]) : (arr_9 [i_3]))))));
        arr_15 [i_3] = ((/* implicit */long long int) (short)973);
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((8275705534654277941LL), (((/* implicit */long long int) (unsigned short)60575))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)35570)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((var_11) && (((/* implicit */_Bool) arr_13 [i_3] [i_3])))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) + (1977070427U)))));
    }
    var_20 -= ((/* implicit */signed char) var_11);
    var_21 = (~(((long long int) ((unsigned long long int) var_8))));
}
