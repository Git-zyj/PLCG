/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13948
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
    var_10 = ((/* implicit */unsigned int) (+(((((/* implicit */int) ((((/* implicit */int) (short)26755)) <= (1073741824)))) + (((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) arr_5 [(unsigned char)0] [i_0 - 1])))) - (((/* implicit */int) ((unsigned char) arr_5 [i_1 - 1] [i_1])))));
                var_12 = ((((_Bool) max((((/* implicit */int) arr_1 [i_1] [(_Bool)1])), (arr_4 [(_Bool)1] [(_Bool)1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((int) (unsigned short)51009))))) : (max((((/* implicit */unsigned int) arr_2 [i_0 + 3])), (var_0))));
            }
        } 
    } 
}
