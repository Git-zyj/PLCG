/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186970
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
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_7)) ? (6027661949971862919LL) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) var_13)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(var_10)));
        var_16 = ((/* implicit */short) var_9);
        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 16711615577325586903ULL))));
        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */long long int) 2147483647)) : (var_4))))));
    }
}
