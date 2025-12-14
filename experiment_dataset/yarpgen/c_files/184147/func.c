/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184147
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
    var_11 = ((/* implicit */short) var_4);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_12 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)229))));
        arr_4 [i_0] = ((/* implicit */short) arr_2 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 3; i_1 < 9; i_1 += 3) 
    {
        var_13 = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_1 - 2] [i_1 + 3]))));
        var_14 *= ((/* implicit */signed char) arr_7 [i_1] [i_1 - 3]);
        arr_8 [i_1] = ((/* implicit */signed char) var_2);
        arr_9 [i_1] = ((/* implicit */unsigned char) arr_7 [i_1] [i_1]);
    }
    for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_6))));
        arr_12 [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
    }
    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
    {
        var_16 ^= ((/* implicit */unsigned char) arr_14 [i_3] [(unsigned char)14]);
        var_17 -= ((/* implicit */unsigned char) arr_13 [(unsigned short)2]);
    }
    var_18 += ((/* implicit */unsigned char) var_3);
}
