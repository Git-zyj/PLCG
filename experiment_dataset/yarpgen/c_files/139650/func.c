/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139650
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_12 += arr_1 [i_0] [(signed char)4];
        arr_2 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) arr_0 [16] [i_0])))), (((((/* implicit */int) (short)-841)) ^ (((/* implicit */int) (short)-23027))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) (-(arr_4 [i_1] [i_1])));
        arr_7 [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-20))))));
    }
    var_13 = var_3;
    var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((((/* implicit */int) var_3)) + (72)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_0)))), (max((((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) (signed char)-20)))), (((int) var_11))))));
    var_15 ^= ((/* implicit */int) var_3);
}
