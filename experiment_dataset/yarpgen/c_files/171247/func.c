/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171247
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */short) ((((/* implicit */int) ((short) max(((signed char)-38), ((signed char)32))))) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((short) var_7))) : ((~(var_9)))))));
                var_12 = min((((int) ((signed char) var_3))), (min((((((/* implicit */int) var_4)) - (-26))), ((-(((/* implicit */int) var_5)))))));
                arr_6 [i_0] = ((/* implicit */signed char) arr_1 [(signed char)21]);
            }
        } 
    } 
    var_13 |= ((/* implicit */short) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) var_4))))))));
    var_14 = ((/* implicit */int) var_2);
    var_15 = ((signed char) ((signed char) (signed char)-26));
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) (short)-27826)) <= (((/* implicit */int) (signed char)82))));
}
