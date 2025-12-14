/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119395
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) var_1)))) : (((((/* implicit */int) (signed char)-24)) ^ (((/* implicit */int) (signed char)7))))))) : ((~(var_3)))));
    var_20 = ((/* implicit */long long int) var_17);
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_21 += ((((_Bool) var_10)) ? (((/* implicit */long long int) ((arr_1 [i_0]) * (((/* implicit */int) var_17))))) : (arr_0 [2LL]));
        var_22 = ((/* implicit */long long int) ((unsigned int) arr_0 [i_0]));
        var_23 = ((/* implicit */_Bool) (~(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) max(((signed char)29), ((signed char)26))))));
        var_25 = ((/* implicit */int) (signed char)-7);
    }
    /* vectorizable */
    for (short i_2 = 3; i_2 < 17; i_2 += 4) 
    {
        arr_9 [(signed char)14] = ((/* implicit */int) (((+(var_13))) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7)))));
        arr_10 [i_2 + 2] [i_2 + 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-2))))) / ((~(var_5)))));
    }
    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_26 = ((/* implicit */unsigned int) max((max((((/* implicit */int) (unsigned short)55729)), (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) (signed char)127)))))), (((/* implicit */int) var_9))));
        var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)20))));
        arr_13 [i_3] &= ((/* implicit */int) arr_2 [i_3] [i_3]);
    }
}
