/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119550
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
    var_12 &= ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_13 += ((/* implicit */int) arr_1 [i_0 + 2]);
        var_14 += min((((((/* implicit */_Bool) (~(var_2)))) ? ((-(((/* implicit */int) arr_2 [(signed char)14])))) : (((/* implicit */int) ((arr_3 [14]) < (((/* implicit */int) arr_2 [(unsigned short)8]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_7)))))));
        var_15 = ((/* implicit */unsigned short) arr_2 [i_0]);
    }
    var_16 += ((/* implicit */unsigned int) (+(var_8)));
}
