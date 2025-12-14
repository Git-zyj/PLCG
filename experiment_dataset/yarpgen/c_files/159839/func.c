/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159839
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
    var_14 = max((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) var_12)) ? (var_1) : (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
    var_15 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) -8884354437393822668LL)) || (((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) max((((/* implicit */short) var_0)), ((short)-12014)))) : (((/* implicit */int) var_0)))) >> (((((-8884354437393822642LL) & (8884354437393822690LL))) >> (((-8884354437393822668LL) + (8884354437393822691LL)))))));
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) -8884354437393822668LL)) ? ((~(8884354437393822667LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_2)) == (8884354437393822676LL)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_1 [i_0]))));
        var_18 = ((((/* implicit */long long int) ((/* implicit */int) var_6))) != (arr_2 [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        arr_7 [(_Bool)1] = ((/* implicit */int) var_8);
        arr_8 [(short)9] = ((/* implicit */unsigned char) arr_5 [i_1 - 1]);
        arr_9 [i_1] [i_1 + 3] = arr_0 [i_1];
    }
}
