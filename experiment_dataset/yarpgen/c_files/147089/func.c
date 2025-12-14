/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147089
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
    var_17 = max((((/* implicit */long long int) (short)19300)), (2946411824942296190LL));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((long long int) max(((unsigned char)162), ((unsigned char)7)))))));
        arr_2 [(unsigned char)9] [i_0 - 1] = min((((((/* implicit */long long int) ((/* implicit */int) var_5))) + (arr_0 [i_0 - 1]))), (((/* implicit */long long int) (~(((/* implicit */int) var_8))))));
    }
    var_19 |= var_11;
    var_20 &= ((/* implicit */unsigned char) ((short) (-(((/* implicit */int) (unsigned char)255)))));
}
