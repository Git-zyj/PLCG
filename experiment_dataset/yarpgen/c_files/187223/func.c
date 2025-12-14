/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187223
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_0);
        arr_3 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_0])) ? (arr_0 [0U] [0U]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))));
    }
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_9)), (var_5)))))) ? (((/* implicit */long long int) var_0)) : (((max((((/* implicit */long long int) var_0)), (9223372036854775807LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)0)))))))));
}
