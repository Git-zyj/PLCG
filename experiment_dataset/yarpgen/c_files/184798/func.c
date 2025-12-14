/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184798
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
    var_14 = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (unsigned short)32145)) ? (((/* implicit */int) var_4)) : (16777215))))), (((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_15 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [10LL]))) : (arr_0 [i_0 - 1] [i_0 - 1])));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1])) ? (arr_0 [i_0 + 1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) var_2);
        arr_6 [i_1] [(short)8] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1]))))) - ((+(8424955307742537597LL)))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((arr_1 [(_Bool)1]) > (min((((/* implicit */unsigned int) ((((/* implicit */long long int) arr_1 [(signed char)15])) <= (var_1)))), (arr_3 [i_1 + 2])))));
        arr_8 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -197232038)) ? (((/* implicit */unsigned long long int) arr_1 [i_1 - 2])) : (var_13)))) && (((/* implicit */_Bool) arr_4 [12])))) ? (min((((/* implicit */int) arr_4 [i_1 + 1])), (((int) 1378682292U)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8409)) || (((/* implicit */_Bool) 3U)))))));
    }
}
