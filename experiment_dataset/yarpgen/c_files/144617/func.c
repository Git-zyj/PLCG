/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144617
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
    var_20 = ((/* implicit */signed char) (((+((+(((/* implicit */int) var_12)))))) > (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (var_12)))) == (((int) var_0)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((unsigned long long int) (!(((arr_0 [i_0] [i_0]) || (arr_0 [i_0] [i_0])))))))));
        var_22 = ((/* implicit */long long int) (-(((((/* implicit */int) arr_0 [i_0] [0ULL])) + (((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0]))))))));
        var_23 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0]))) != (((/* implicit */int) arr_1 [i_0]))))) / (((((/* implicit */int) ((arr_0 [i_0] [i_0]) || (((/* implicit */_Bool) arr_1 [i_0]))))) ^ (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [19U])) > (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
    }
    var_24 += ((/* implicit */unsigned long long int) ((unsigned int) ((var_15) - (max((var_13), (((/* implicit */long long int) var_3)))))));
}
