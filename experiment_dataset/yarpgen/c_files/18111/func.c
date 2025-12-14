/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18111
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
    var_19 = (signed char)-3;
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_0 [i_1] [i_0]), (var_4))))))))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 1])))), ((~(((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1]))))));
                var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_15), ((signed char)-3)))) && ((!(((/* implicit */_Bool) var_0)))))) ? (((/* implicit */int) ((unsigned char) max(((signed char)11), (var_12))))) : ((~(((/* implicit */int) max(((signed char)-108), ((signed char)61))))))));
            }
        } 
    } 
}
