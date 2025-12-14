/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183769
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_1 [i_0])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((arr_1 [i_0]) || (((/* implicit */_Bool) arr_0 [i_0])))))))) ? (((/* implicit */int) arr_1 [i_0])) : ((+(((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))))));
        var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) ((arr_1 [(_Bool)1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_0 [7LL])))))))));
        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0])))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        var_23 = ((/* implicit */long long int) min((var_23), (arr_4 [i_1] [i_1])));
        var_24 &= ((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1]);
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (arr_3 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))))));
    }
    for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_26 ^= min((((/* implicit */long long int) (_Bool)0)), (((arr_3 [i_2]) / (arr_3 [i_2]))));
        arr_8 [i_2] &= arr_0 [i_2];
        arr_9 [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_2]))))) : (arr_3 [i_2])))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))) > (arr_4 [i_2] [7LL])))), ((+(16949151287489153770ULL)))))));
    }
}
