/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174317
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
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = var_6;
        arr_3 [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0 - 3] [i_0]))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((min((var_2), (((/* implicit */unsigned long long int) arr_5 [(signed char)7])))) >> (((((/* implicit */int) arr_4 [i_1])) ^ (((/* implicit */int) arr_4 [i_1]))))));
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_1]))) ? (((/* implicit */int) min((arr_5 [i_1]), (((/* implicit */unsigned short) var_9))))) : ((~(((/* implicit */int) arr_5 [i_1]))))));
    }
    var_12 |= ((/* implicit */short) var_8);
}
