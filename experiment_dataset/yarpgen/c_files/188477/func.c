/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188477
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (short)20744))));
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) 528482304U)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_0))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) + (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned short)27803))))))))));
    }
    for (long long int i_1 = 1; i_1 < 24; i_1 += 1) 
    {
        var_13 -= var_3;
        var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-22401)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))) : (4294967295U)))) * (((arr_5 [i_1]) ? (((((/* implicit */_Bool) 612187225U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27798))) : (10939082719049199813ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))))));
    }
    var_15 = (~(((/* implicit */int) var_4)));
}
