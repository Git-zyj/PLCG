/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113414
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
    var_11 = ((/* implicit */short) var_5);
    var_12 &= (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_13 = 10069348614581722141ULL;
        var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) (unsigned short)65528))));
        var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((/* implicit */int) (unsigned short)17218)) : (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
}
