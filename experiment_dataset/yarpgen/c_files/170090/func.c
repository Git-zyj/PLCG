/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170090
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        arr_4 [(signed char)8] [(signed char)8] |= ((/* implicit */short) ((((arr_0 [i_0 + 3] [i_0 + 2]) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [20] [20]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0 + 3])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)14])) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) (short)19122))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)0]))))) : (((/* implicit */unsigned long long int) ((unsigned int) var_6)))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_2 [i_0] [i_0])), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned char) var_12))))) : (var_13)))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 4; i_1 < 20; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)49964))));
        var_17 = ((/* implicit */short) ((_Bool) var_10));
    }
}
