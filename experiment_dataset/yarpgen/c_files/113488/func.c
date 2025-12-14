/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113488
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
    var_11 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (var_3)))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (arr_2 [i_0] [i_0]))))) * (((/* implicit */int) var_10))));
        var_13 = (+(((/* implicit */int) ((_Bool) arr_0 [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_14 ^= ((/* implicit */_Bool) min((((/* implicit */int) var_8)), (max((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_2)) : (1610612736))), (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))))));
        var_15 += ((/* implicit */_Bool) (+(min((((int) var_7)), (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_10)))))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_16 += ((long long int) var_5);
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))));
    }
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))))), (((signed char) var_10)))))));
        var_19 = ((/* implicit */long long int) (-((-(var_3)))));
    }
}
