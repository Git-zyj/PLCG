/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186581
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)81)) | (arr_0 [i_0] [(_Bool)1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : ((-(arr_0 [i_0] [i_0]))))) * (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_10))))) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0] [i_0]))) ? (((((unsigned long long int) arr_0 [i_0] [i_0])) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)79)))))) : (((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) arr_1 [i_0]))))))));
        arr_3 [(_Bool)1] [14LL] |= ((/* implicit */unsigned int) arr_1 [9]);
        var_14 += ((((/* implicit */_Bool) ((10160287293698760199ULL) << (((arr_0 [i_0] [i_0]) + (1062187049)))))) ? (max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) arr_1 [i_0])))) : (min((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) (signed char)81)))), (arr_0 [i_0] [i_0]))));
    }
    var_15 &= var_0;
    var_16 += ((/* implicit */long long int) ((var_4) << (((((/* implicit */int) var_8)) + (23047)))));
}
