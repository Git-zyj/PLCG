/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10022
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_13 += ((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)0))))));
        var_14 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)41466)) ? (((/* implicit */int) (unsigned short)24068)) : ((-(((/* implicit */int) (unsigned short)41470))))))));
        var_15 += ((/* implicit */signed char) (+(((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) >> (((((((/* implicit */_Bool) arr_1 [0LL] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) (short)-27021)))) - (604894732)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((-1679937837) ^ (((/* implicit */int) arr_3 [i_1] [i_1])))))));
        var_17 += ((arr_4 [i_1]) << (((/* implicit */int) arr_5 [i_1] [i_1])));
    }
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_7))));
}
