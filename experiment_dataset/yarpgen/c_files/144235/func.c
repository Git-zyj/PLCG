/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144235
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 16376)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_0 [i_0]))));
        arr_5 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        var_13 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) -16377)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [(signed char)10])))) : ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1))))));
    }
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */int) var_12)), (var_11)));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (12819286690873434718ULL) : (var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((((/* implicit */_Bool) (signed char)62)) ? (1595550857789081445LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
}
