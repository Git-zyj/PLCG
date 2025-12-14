/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110910
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
    for (short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-21))) != (2896255634587589063LL))))) && (((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_1 [i_0 - 1] [i_0]))))))));
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */long long int) arr_0 [i_0 - 1] [i_0]);
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [1U] [i_0 + 1]))) - (arr_1 [i_0] [(short)4]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [(_Bool)1] [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0] [10LL])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) ((short) arr_1 [i_0] [i_0 + 1])))))) : (max((arr_1 [i_0 + 1] [i_0]), (max((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0 - 1] [i_0]))))));
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_2 [i_1] [(_Bool)0]))))));
        arr_9 [i_1] = ((/* implicit */_Bool) arr_0 [i_1] [i_1]);
        var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_6 [i_1]), (arr_6 [i_1]))))));
        arr_10 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_6 [i_1])))));
    }
}
