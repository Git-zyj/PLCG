/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130600
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
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_14) : (201326592U)))) ? (-1798124663070504081LL) : (((/* implicit */long long int) var_7))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_19 = ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_9))))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (arr_1 [i_0])));
    }
    var_21 = ((/* implicit */unsigned char) var_6);
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (524287LL)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)144)) : (var_11))) : (((/* implicit */int) var_2))))) ? (3025921105733938781LL) : (-1798124663070504081LL)));
    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
}
