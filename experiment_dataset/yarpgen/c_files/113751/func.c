/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113751
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
    var_14 = ((/* implicit */unsigned long long int) var_13);
    var_15 = ((/* implicit */short) min((((/* implicit */signed char) ((((/* implicit */int) var_2)) != (((/* implicit */int) ((_Bool) var_4)))))), (max((var_9), (((/* implicit */signed char) (!(var_13))))))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_2))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0 - 1] [13ULL] = ((/* implicit */unsigned long long int) var_5);
        var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2] [i_0]))) : (1152921487426977792ULL)))));
        arr_3 [i_0] [i_0] = ((unsigned long long int) arr_0 [i_0 - 1] [i_0]);
    }
}
