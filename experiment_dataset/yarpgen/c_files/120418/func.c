/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120418
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
    var_11 += ((/* implicit */unsigned short) ((short) var_2));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_6))));
        arr_2 [(unsigned char)12] |= ((long long int) var_2);
        var_13 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) ((unsigned long long int) ((short) arr_4 [i_1] [i_1])));
        var_15 = ((/* implicit */signed char) var_7);
    }
    for (short i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        arr_7 [i_2] = ((/* implicit */unsigned char) 1776667995U);
        var_16 = ((/* implicit */unsigned long long int) ((short) ((unsigned char) ((unsigned short) arr_0 [i_2]))));
        arr_8 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned short) var_3));
    }
    var_17 = ((/* implicit */unsigned short) 1776667989U);
    var_18 ^= ((/* implicit */short) var_0);
    var_19 ^= ((/* implicit */long long int) ((unsigned long long int) var_7));
}
