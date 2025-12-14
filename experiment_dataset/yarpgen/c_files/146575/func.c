/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146575
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
    var_12 -= ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) (-((+(var_7)))));
        arr_2 [i_0] [16U] = var_0;
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_0))));
        arr_3 [0ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (var_6)))) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) & (arr_0 [i_0] [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_15 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (arr_1 [i_1] [i_1]))))) != ((~(arr_1 [i_1] [i_1]))));
        arr_8 [i_1] |= ((/* implicit */long long int) ((var_0) ^ (((/* implicit */unsigned int) ((((arr_0 [i_1] [i_1]) + (2147483647))) << (((((/* implicit */int) var_10)) - (61))))))));
        var_16 = ((/* implicit */signed char) (+(((/* implicit */int) (short)25378))));
    }
    var_17 = ((/* implicit */int) ((((/* implicit */long long int) var_1)) % (var_7)));
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
    var_19 = ((/* implicit */long long int) min((((((/* implicit */int) var_5)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))), ((!(((/* implicit */_Bool) var_9))))));
}
