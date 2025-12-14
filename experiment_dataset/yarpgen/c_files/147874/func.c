/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147874
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
    var_20 ^= ((/* implicit */unsigned short) var_14);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_21 += max(((unsigned char)122), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12))) != (arr_1 [i_0])))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) + (((((/* implicit */int) var_4)) * (((/* implicit */int) arr_0 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_0 [i_0]))))));
        var_23 += ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)5)) / (((/* implicit */int) (signed char)5))));
    }
}
