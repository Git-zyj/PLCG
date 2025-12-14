/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16375
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_14 = ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_0])) % (((((/* implicit */_Bool) (unsigned short)20091)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)18230))))));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))));
    }
    for (int i_1 = 3; i_1 < 18; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) arr_5 [i_1]);
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) (signed char)-21)), (((((/* implicit */_Bool) (+(626958781)))) ? ((-(((/* implicit */int) arr_7 [i_1] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_5 [i_1])))))))));
    }
    var_16 = ((/* implicit */unsigned int) (unsigned short)16383);
}
