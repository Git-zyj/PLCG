/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180987
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (14562482678539144528ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (2444840100198012018ULL)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_13 = -1;
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) ^ (arr_5 [i_0] [i_0])));
            arr_7 [i_1] [i_1] [i_0] = arr_2 [i_0];
        }
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((var_6) < (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))));
        arr_8 [4LL] [2U] = ((/* implicit */_Bool) var_0);
    }
}
