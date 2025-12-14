/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163061
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)140)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551615ULL) > (4ULL)))))))) ? (((/* implicit */int) var_7)) : ((~(((((/* implicit */int) (short)30097)) & (((/* implicit */int) (unsigned short)12163)))))))))));
    var_18 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        arr_4 [i_0 - 2] = ((/* implicit */int) max((var_6), (((/* implicit */unsigned long long int) max((arr_3 [i_0 - 2]), (((/* implicit */int) var_10)))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((min((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) ((int) arr_1 [2ULL]))))) == (((/* implicit */unsigned long long int) (-((~(873894518))))))));
        arr_6 [i_0] [i_0] = ((/* implicit */signed char) 609525858U);
        arr_7 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -1898495599565732029LL)) ? (arr_2 [(unsigned short)8] [i_0]) : (18446744073709551599ULL)));
    }
}
