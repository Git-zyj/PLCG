/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179392
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (short)32767)) < (((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) ((unsigned short) ((_Bool) (unsigned char)2)))) : (((/* implicit */int) (unsigned short)35814))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) arr_0 [i_0])))))) ? (((((arr_2 [i_0]) / (((/* implicit */int) var_10)))) * (((((/* implicit */int) arr_0 [i_0])) / (arr_2 [i_0]))))) : (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0])))));
        arr_5 [i_0] = (unsigned short)29725;
        arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_1 [i_0] [i_0]));
    }
    for (signed char i_1 = 4; i_1 < 13; i_1 += 4) 
    {
        arr_9 [(short)9] [i_1 - 2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_1 - 1])) ? (arr_7 [i_1 - 2]) : (arr_7 [i_1 + 2]))) - (((((/* implicit */_Bool) arr_7 [i_1 - 2])) ? (arr_7 [i_1 - 1]) : (arr_7 [i_1 - 3])))));
        arr_10 [i_1] [i_1 - 3] = ((/* implicit */unsigned char) arr_8 [i_1]);
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)84)) == ((((_Bool)1) ? (((((/* implicit */_Bool) (unsigned short)35811)) ? (((/* implicit */int) (unsigned short)29721)) : (((/* implicit */int) (unsigned char)247)))) : (((/* implicit */int) (short)17598))))));
    var_21 = ((/* implicit */int) (unsigned short)24096);
    var_22 = (unsigned char)201;
}
