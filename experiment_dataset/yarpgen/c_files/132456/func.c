/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132456
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
    for (short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) arr_2 [i_0 - 2]));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_0] [(_Bool)1]), (((/* implicit */long long int) var_1))))) ? (min((((/* implicit */int) arr_2 [i_0])), (max((var_2), (((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [17U] [i_0 + 1])))))) >= (var_4))))));
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_7 [(unsigned short)4] [(unsigned short)4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_1]))))) * (arr_5 [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1])) & (((/* implicit */int) arr_6 [i_1]))))) : (arr_0 [i_1] [i_1])));
        var_15 = ((/* implicit */signed char) ((((((arr_6 [i_1]) || (((/* implicit */_Bool) (unsigned char)155)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_0 [i_1] [i_1])))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) || (((/* implicit */_Bool) arr_1 [i_1])))) ? (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1])))))))) : (max((min((((/* implicit */long long int) var_13)), (arr_0 [i_1] [i_1]))), (((/* implicit */long long int) var_10))))));
        var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_0 [i_1] [i_1]))))))), (max((((/* implicit */unsigned int) min((var_3), (((/* implicit */unsigned short) var_9))))), (arr_5 [i_1])))));
    }
}
