/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159867
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
    var_20 = var_4;
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_21 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))), ((((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (arr_1 [i_0 + 3] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3280863991U))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1])))))) & ((+(arr_1 [i_0] [i_1])))));
            arr_6 [i_0] [i_0] [(signed char)14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (arr_4 [i_0 - 1]) : (((/* implicit */int) ((((/* implicit */unsigned int) 31457280)) >= (var_6))))));
        }
    }
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_17))));
    var_24 = ((/* implicit */int) max((((/* implicit */long long int) var_15)), (((((((/* implicit */_Bool) (signed char)28)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-67))))) | (((/* implicit */long long int) ((unsigned int) var_14)))))));
}
