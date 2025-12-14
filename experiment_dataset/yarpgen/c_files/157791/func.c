/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157791
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) 4294967283U))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */long long int) (~(var_8)))) > ((+(((((var_1) + (9223372036854775807LL))) >> (((-5654701675293045874LL) + (5654701675293045904LL)))))))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (~(max((((/* implicit */unsigned int) var_8)), (3494328522U))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)35010)) ? (((/* implicit */int) (short)17836)) : (((/* implicit */int) (short)-30704)))), ((~(((/* implicit */int) ((var_4) != (((/* implicit */long long int) 65535U)))))))));
    }
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_11))));
    var_17 = ((/* implicit */int) min((((/* implicit */long long int) var_7)), (min(((+(var_4))), (((/* implicit */long long int) var_3))))));
}
