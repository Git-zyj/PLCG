/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107463
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
    var_18 = ((/* implicit */unsigned char) var_14);
    var_19 = ((/* implicit */long long int) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)7685)) ^ (((/* implicit */int) (signed char)-13))))));
        var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned short)2])) ? (arr_0 [(_Bool)1]) : (arr_0 [(signed char)12])));
        var_21 -= ((/* implicit */short) var_9);
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) 1381958998709451876ULL))));
    }
}
