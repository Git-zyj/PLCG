/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146971
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
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
    var_13 = max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-82))))), (var_5));
    var_14 = (signed char)127;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_15 |= arr_0 [i_1] [i_1];
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_3), ((signed char)43)))) && (((/* implicit */_Bool) (signed char)-44))));
                arr_6 [i_0] [i_0] [i_0] = ((signed char) var_4);
                arr_7 [i_0] = ((/* implicit */signed char) ((((min((((/* implicit */int) ((signed char) arr_3 [i_1] [i_1]))), (((((/* implicit */int) (signed char)-17)) & (((/* implicit */int) arr_0 [(signed char)13] [i_1])))))) + (2147483647))) >> (((((/* implicit */int) ((signed char) (signed char)47))) - (16)))));
            }
        } 
    } 
}
