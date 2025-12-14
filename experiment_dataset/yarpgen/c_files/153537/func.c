/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153537
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_2 [(_Bool)1] [i_0] = ((/* implicit */unsigned char) arr_0 [3U]);
        var_12 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_8))));
        arr_6 [i_1] [i_1] |= arr_4 [i_1];
        var_14 = ((/* implicit */unsigned short) var_8);
    }
    for (int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_15 = ((/* implicit */signed char) (+(arr_3 [i_2] [i_2])));
        arr_10 [i_2] [4ULL] = ((/* implicit */int) arr_7 [i_2]);
        arr_11 [i_2] = ((/* implicit */short) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2])))))))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 1) 
    {
        var_16 = ((/* implicit */_Bool) (-(arr_14 [i_3])));
        var_17 = ((/* implicit */_Bool) arr_8 [i_3 + 1]);
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_3 [(short)22] [i_3 - 1])))))))));
        var_19 = (~((+(arr_14 [i_3]))));
    }
    var_20 = ((/* implicit */_Bool) var_9);
}
