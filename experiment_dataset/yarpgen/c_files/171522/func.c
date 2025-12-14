/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171522
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (signed char)-1))) & (((/* implicit */int) arr_1 [(signed char)4] [(signed char)7]))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)7), ((signed char)0)))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_1 [(signed char)6] [i_0 - 1]))))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 1])) : (((/* implicit */int) var_13))))));
        var_14 -= ((/* implicit */signed char) (+((-((+(((/* implicit */int) arr_2 [i_0]))))))));
        var_15 = ((/* implicit */signed char) min((((((/* implicit */int) (signed char)112)) ^ (((/* implicit */int) (signed char)0)))), (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_2 [i_0 - 1])))), (((((/* implicit */_Bool) arr_1 [(signed char)2] [i_0])) && (((/* implicit */_Bool) var_5)))))))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (~(((/* implicit */int) min((((signed char) (signed char)96)), (var_12)))))))));
    }
    var_17 = var_2;
}
