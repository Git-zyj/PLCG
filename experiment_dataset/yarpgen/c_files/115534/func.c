/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115534
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
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        arr_4 [i_0] = (-(((/* implicit */int) arr_3 [i_0] [i_0])));
        arr_5 [12U] &= ((/* implicit */int) arr_3 [(unsigned short)6] [i_0]);
        var_13 = ((/* implicit */unsigned short) (+((~(1470647891)))));
        arr_6 [i_0] [i_0] = (+(((/* implicit */int) var_5)));
        arr_7 [i_0] = ((/* implicit */int) ((long long int) ((2576531334U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_8 [i_1]))));
        arr_11 [i_1] = arr_1 [i_1] [i_1];
    }
    var_15 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) max((-298378036), (((/* implicit */int) (unsigned short)0))))), (var_6))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (unsigned char)142)) : (390088508))))))))));
    var_16 |= ((/* implicit */unsigned long long int) var_8);
}
