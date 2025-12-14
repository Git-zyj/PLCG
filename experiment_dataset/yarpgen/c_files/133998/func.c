/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133998
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((signed char)127), (var_3))))))) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) (signed char)-127))))));
    var_14 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)17))))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-35)) / (((/* implicit */int) var_3))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [(signed char)5]))))))) ? (min((((/* implicit */int) ((signed char) arr_1 [i_0]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) var_5)))))) : ((~((~(((/* implicit */int) var_6))))))));
        arr_3 [(signed char)13] = ((signed char) (~(((/* implicit */int) arr_0 [i_0 + 2]))));
        arr_4 [i_0] = ((signed char) ((((((/* implicit */int) (signed char)36)) / (((/* implicit */int) (signed char)(-127 - 1))))) + (((/* implicit */int) arr_1 [i_0 + 1]))));
    }
}
