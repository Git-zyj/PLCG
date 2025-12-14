/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110118
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) var_7))));
                arr_8 [(short)4] [i_1 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_9)) : (var_11))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        arr_13 [i_2] |= ((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((unsigned long long int) var_11)));
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))))) ? (var_11) : (var_0)));
        var_17 ^= var_3;
        arr_15 [i_2] = ((/* implicit */unsigned short) var_9);
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        arr_19 [i_3] [i_3] &= ((/* implicit */unsigned char) var_1);
        arr_20 [i_3] [i_3] &= ((/* implicit */_Bool) ((short) var_1));
    }
    var_18 &= ((/* implicit */unsigned int) var_0);
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
}
