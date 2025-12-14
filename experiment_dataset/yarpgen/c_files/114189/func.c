/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114189
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
    var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) -7890802772816260660LL)) ? (1212740859) : (((/* implicit */int) (unsigned char)0))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned char) min((var_14), (var_11))))), (((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */long long int) -1212740859)) : (-6442156257612712781LL)))));
        var_20 &= ((/* implicit */long long int) ((int) ((((/* implicit */int) (unsigned char)129)) | (((/* implicit */int) arr_0 [i_0])))));
        var_21 = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    var_22 &= ((/* implicit */_Bool) min((-7890802772816260660LL), (((/* implicit */long long int) var_11))));
    var_23 = ((/* implicit */unsigned char) var_0);
    var_24 = ((/* implicit */int) var_8);
}
