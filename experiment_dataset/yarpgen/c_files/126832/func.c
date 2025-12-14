/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126832
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
    var_17 |= -1273116896;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_18 = min((arr_2 [i_0 - 2]), ((+(((/* implicit */int) (unsigned char)77)))));
        var_19 &= ((/* implicit */_Bool) min((((unsigned char) arr_0 [i_0 + 2])), ((unsigned char)79)));
    }
    for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        arr_6 [i_1] [i_1 - 1] |= ((/* implicit */unsigned long long int) arr_5 [i_1]);
        var_20 = arr_5 [i_1 - 1];
        var_21 ^= ((/* implicit */short) min((min((arr_4 [i_1 + 1]), (arr_4 [i_1 + 1]))), (min((arr_4 [i_1 + 1]), (((/* implicit */unsigned long long int) (unsigned char)77))))));
        var_22 &= ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) (unsigned char)79)), (arr_4 [i_1 - 1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0)))))));
        var_23 = ((/* implicit */unsigned char) max((var_23), (var_6)));
    }
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_11 [i_2] = min((((/* implicit */int) ((unsigned short) arr_3 [i_2]))), ((-(((/* implicit */int) ((unsigned short) var_14))))));
        arr_12 [i_2] = ((/* implicit */signed char) arr_8 [i_2]);
    }
}
