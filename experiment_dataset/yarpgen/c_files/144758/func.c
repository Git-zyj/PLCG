/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144758
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
    var_10 = ((/* implicit */short) ((_Bool) var_9));
    var_11 = ((/* implicit */unsigned short) (-(((long long int) var_8))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) var_6);
        arr_4 [i_0] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_1 [i_0])))) ^ (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (signed char i_1 = 2; i_1 < 23; i_1 += 3) 
    {
        arr_8 [i_1 - 1] = ((/* implicit */signed char) (~(((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(signed char)9]))))) >> (((((/* implicit */_Bool) arr_6 [i_1 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_1]))))))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((arr_5 [i_1 - 2] [i_1 - 1]), (arr_5 [i_1 + 1] [i_1 - 2])))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (((int) arr_7 [i_1])) : (((int) var_2))))));
        arr_10 [i_1] = ((/* implicit */unsigned short) ((max((((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (arr_6 [i_1 - 1]))), (((/* implicit */unsigned long long int) ((arr_6 [(unsigned short)9]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(_Bool)1] [i_1])))));
        arr_11 [i_1 + 1] = arr_7 [(short)15];
    }
    var_12 = var_4;
    var_13 = ((/* implicit */_Bool) var_6);
}
