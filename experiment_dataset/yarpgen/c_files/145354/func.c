/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145354
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_14)))) ? (((/* implicit */unsigned long long int) (+(var_14)))) : (var_2)))) ? ((+(min((((/* implicit */unsigned long long int) var_8)), (0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_12)), (var_5)))))));
    var_16 |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(11056349593277373502ULL)))) ? (min((((/* implicit */unsigned long long int) var_8)), (577836907788370755ULL))) : (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */long long int) var_10)))))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)31978)) : (((/* implicit */int) var_13))))), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))))), (var_1))))) : ((((!(((/* implicit */_Bool) var_8)))) ? (min((((/* implicit */unsigned long long int) var_5)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
    var_18 = ((/* implicit */signed char) min((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) (-(var_6)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 12171989835459492562ULL)))))));
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)3752)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (4194135653395762634ULL))))))));
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */_Bool) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)31984)))))))));
    }
}
