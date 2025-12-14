/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159294
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (2558914731U) : (((/* implicit */unsigned int) 981556118)))) | (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) (+(134217216)))) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) var_2)))) : (((((/* implicit */int) var_6)) | (134217216))))) : (((/* implicit */int) var_1)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */_Bool) 1125762467889152ULL);
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_13 ^= ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */int) min((((/* implicit */short) arr_0 [i_1] [2ULL])), (arr_2 [i_1] [(_Bool)1])))), (((((/* implicit */_Bool) 18445618311241662464ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))))));
        arr_7 [5ULL] = ((/* implicit */signed char) ((_Bool) max(((+(arr_1 [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 18445618311241662457ULL)) ? (134217726) : (((/* implicit */int) arr_2 [i_1] [(unsigned short)4]))))))));
    }
}
