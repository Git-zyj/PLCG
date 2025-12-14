/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140918
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
    var_19 = ((/* implicit */unsigned short) var_18);
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (max((((/* implicit */unsigned long long int) ((unsigned char) var_5))), (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) 1552440802339852197LL)))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)31548)) : (((/* implicit */int) var_18))))) + (min((((/* implicit */unsigned long long int) var_5)), (var_2)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
    }
    var_21 |= ((/* implicit */signed char) (((((~(((/* implicit */int) min(((unsigned short)33987), (((/* implicit */unsigned short) var_15))))))) + (2147483647))) << (((((/* implicit */int) (unsigned short)24)) - (24)))));
}
