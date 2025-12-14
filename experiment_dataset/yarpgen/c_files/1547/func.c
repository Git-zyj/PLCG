/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1547
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4611615649683210240LL)) ? (max((4611615649683210240LL), (9223372036854775807LL))) : (arr_0 [i_0])))) ? (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_4))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) : (((/* implicit */unsigned long long int) var_5))));
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) (short)0)))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((var_6) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))))))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) (unsigned char)93)) & (((/* implicit */int) var_9)))));
        var_13 = ((/* implicit */_Bool) ((unsigned long long int) (short)-5730));
    }
    var_14 = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
    var_16 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_6)), (var_11))))) % (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (4611615649683210240LL)))))), (min((4998162472998266361ULL), (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_1) : (var_2))))))));
    var_17 = ((/* implicit */unsigned short) ((max((min((((/* implicit */unsigned long long int) (_Bool)1)), (3722125744518155280ULL))), (((7386319469345292870ULL) + (13448581600711285254ULL))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) : (var_5)))) ? (min((var_1), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
}
