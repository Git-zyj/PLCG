/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155952
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
    var_14 = ((/* implicit */int) ((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_15 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [(signed char)10] = ((/* implicit */unsigned short) ((arr_2 [i_0]) ? (((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0])))) : (((((/* implicit */int) arr_2 [i_0])) << (((/* implicit */int) arr_2 [i_0]))))));
        arr_4 [(signed char)5] = ((/* implicit */signed char) var_2);
    }
    var_16 ^= ((/* implicit */unsigned long long int) var_9);
}
