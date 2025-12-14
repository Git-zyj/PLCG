/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157419
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (min((-1), (309428404)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_8)))))) : (var_2)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) (short)17)) ? (17) : (((/* implicit */int) (unsigned char)114)));
        arr_3 [i_0] = ((/* implicit */signed char) (~(18446744073709551599ULL)));
        arr_4 [i_0] [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) -1))));
    }
    var_11 = ((/* implicit */unsigned long long int) (+(5726171391483909849LL)));
    var_12 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 12117250772565451196ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15))) : (9724543595839743396ULL))));
}
