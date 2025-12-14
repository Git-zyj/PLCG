/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164283
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (~(var_13))))));
        arr_4 [i_0] [i_0] = (unsigned short)14759;
        arr_5 [i_0] [i_0 - 1] = ((/* implicit */int) (unsigned char)66);
        arr_6 [i_0] [6] = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_2 [i_0])) / (var_5)))));
    }
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) /* same iter space */
    {
        arr_9 [i_1 - 1] [(unsigned short)0] &= (((-(arr_1 [i_1] [i_1]))) - ((-(((((/* implicit */_Bool) arr_3 [10])) ? (387412640) : (arr_7 [i_1]))))));
        var_15 = ((/* implicit */int) min((var_15), (((((var_7) ^ (((/* implicit */int) arr_3 [i_1 + 1])))) ^ (min((((int) var_11)), ((~(-1783765723)))))))));
    }
    var_16 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */int) var_3)))) * (((/* implicit */int) ((var_6) > (((/* implicit */int) var_1)))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)190)));
}
