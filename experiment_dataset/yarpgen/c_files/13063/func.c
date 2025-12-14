/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13063
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_1]), (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_1] [i_1])), (var_9))))) : (((arr_2 [i_1] [i_0]) | (arr_2 [i_0] [i_1])))));
                arr_6 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)23293))))), (((((/* implicit */_Bool) (+(325668011U)))) ? (2510436339U) : (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-68))));
        arr_9 [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-124))));
    }
    var_13 = ((/* implicit */int) min((var_7), (((/* implicit */short) var_5))));
}
