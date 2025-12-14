/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148912
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
    var_19 += ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned char)173))))));
    var_20 = ((/* implicit */unsigned int) ((2305843009213677568ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((unsigned int) var_12))) : (var_12))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        var_21 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 2]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) 5810147697924114653ULL);
    }
}
