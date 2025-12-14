/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144698
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
    var_17 = ((/* implicit */int) ((var_14) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_3)))) ? ((~(((/* implicit */int) (unsigned char)54)))) : ((~(((/* implicit */int) (unsigned char)188)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) arr_0 [7]);
        arr_2 [i_0 + 2] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0])) ? (arr_1 [(_Bool)1] [i_0]) : (4734507250636497012LL)))) ? (((((/* implicit */_Bool) 13571481020167385254ULL)) ? (arr_1 [(_Bool)1] [4U]) : (arr_1 [i_0 + 2] [(_Bool)1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1])))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) arr_0 [3])) : (469859645)))) ? (((/* implicit */unsigned int) -1701875397)) : (3887099052U)));
    }
}
