/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175830
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) (+((-((-(((/* implicit */int) (short)-6699))))))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (short)-1710))));
        var_13 = arr_1 [i_0];
        var_14 = ((/* implicit */unsigned long long int) (-(429255261)));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_15 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) var_8))) - ((-(((/* implicit */int) (signed char)115))))));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((short) (unsigned char)252));
        var_16 |= ((/* implicit */signed char) (+(((/* implicit */int) (short)-29211))));
    }
    for (short i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */short) var_1);
        arr_10 [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65284))));
        arr_11 [i_2] = ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_11)));
    }
    /* LoopSeq 1 */
    for (long long int i_3 = 2; i_3 < 16; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)207)) / (((/* implicit */int) arr_12 [i_3])))) / (((/* implicit */int) (signed char)118))))) ? (((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) (unsigned char)76))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165)))));
        var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_9 [i_3 + 2])))));
    }
}
