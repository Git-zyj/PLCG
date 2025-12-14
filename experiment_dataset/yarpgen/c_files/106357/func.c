/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106357
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
    var_10 = ((/* implicit */unsigned int) (-(((unsigned long long int) ((((/* implicit */int) (unsigned short)19993)) + (-709696268))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) -709696256))));
        arr_2 [i_0] [(signed char)5] = ((/* implicit */_Bool) (((-(arr_1 [i_0] [i_0]))) << (((((arr_1 [11LL] [(_Bool)1]) + (6846547091524503196LL))) - (10LL)))));
        arr_3 [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) < (((/* implicit */long long int) var_6)))))) < (3889963040U)));
    }
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) min(((~(-709696252))), (((/* implicit */int) (_Bool)1)))))));
}
