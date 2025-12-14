/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111284
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
        arr_2 [i_0] [2ULL] &= ((/* implicit */int) min((((arr_0 [i_0]) / (((/* implicit */unsigned long long int) var_7)))), (((((/* implicit */_Bool) (short)-18818)) ? (arr_0 [(signed char)2]) : (arr_0 [i_0])))));
    }
    var_21 = ((/* implicit */unsigned char) var_19);
    var_22 = ((/* implicit */signed char) 12ULL);
}
