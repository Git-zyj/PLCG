/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10062
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
    var_18 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) (((-(max((arr_1 [i_0]), (arr_1 [i_0 + 4]))))) == (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))));
        var_20 -= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_1))))) < (((int) -342296964)))))));
    }
}
