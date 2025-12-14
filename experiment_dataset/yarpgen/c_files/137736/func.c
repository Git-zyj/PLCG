/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137736
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) (-(((/* implicit */int) max((var_3), (arr_1 [i_0] [i_0]))))));
        var_14 ^= ((/* implicit */int) ((short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(unsigned char)21] [i_0]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((_Bool) min((arr_2 [i_1]), (arr_2 [i_1]))));
        var_15 = ((/* implicit */long long int) max((var_15), (var_7)));
        var_16 = ((/* implicit */unsigned short) ((var_8) << (((((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) arr_4 [i_1] [i_1]))))) ? (arr_6 [i_1] [i_1]) : (((unsigned int) arr_3 [i_1] [(unsigned short)4])))) - (1652747228U)))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_3))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_0 [i_2] [i_2]))));
        var_19 = ((/* implicit */_Bool) arr_9 [i_2] [i_2]);
    }
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (+(var_8))))));
}
