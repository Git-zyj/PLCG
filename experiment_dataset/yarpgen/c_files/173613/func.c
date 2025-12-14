/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173613
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(1128403995))))))) : (((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) / (min((-216361481), (((/* implicit */int) (unsigned char)2))))))), (5616519780680052136ULL)));
        arr_4 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) arr_1 [i_1] [i_1]);
        arr_9 [i_1] = ((/* implicit */_Bool) var_6);
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_2])) <= (((/* implicit */int) arr_11 [i_2]))));
        var_14 |= ((/* implicit */unsigned short) arr_10 [i_2]);
        arr_13 [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_2]))));
        arr_14 [(short)5] = ((((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) var_0)))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(unsigned char)22]))))));
    }
    var_15 = ((/* implicit */unsigned int) var_8);
    var_16 = var_4;
}
