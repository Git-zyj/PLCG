/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182963
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
    var_17 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) var_0)), (min((var_10), (((/* implicit */unsigned int) var_1)))))) == (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) (short)22705)))))) * ((~(31457280U)))))));
    var_18 = ((/* implicit */unsigned char) (+(0U)));
    var_19 = ((/* implicit */_Bool) (unsigned char)128);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-22720)) / (((/* implicit */int) (_Bool)1)))) | (((((/* implicit */int) arr_2 [i_0])) ^ (arr_1 [i_0] [i_0])))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((arr_1 [i_0] [i_0]) - (((/* implicit */int) (_Bool)0)))) + (((/* implicit */int) (signed char)71))));
    }
    for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */int) (_Bool)1);
        arr_9 [i_1] = ((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) min((arr_0 [i_1]), (((/* implicit */signed char) arr_6 [i_1] [i_1])))))))), (arr_2 [i_1])));
    }
}
