/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168215
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
    var_10 = ((/* implicit */signed char) var_8);
    var_11 = ((/* implicit */short) var_2);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_12 = max((((((/* implicit */int) arr_1 [i_0])) << ((((-(arr_0 [(unsigned short)4] [1]))) + (6180353239072959975LL))))), (((/* implicit */int) ((unsigned char) var_7))));
        var_13 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) ((10390093661700998107ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
    }
}
