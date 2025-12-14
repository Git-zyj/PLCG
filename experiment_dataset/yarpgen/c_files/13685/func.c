/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13685
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
    for (int i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((arr_1 [i_0 + 1]) < (min((arr_1 [9]), (((/* implicit */int) arr_2 [i_0]))))));
                var_12 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (arr_5 [i_0] [i_1] [i_1]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2])))));
                arr_7 [i_1] [i_0] [i_1 - 3] = ((/* implicit */unsigned char) min(((short)4338), (((/* implicit */short) (signed char)43))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) var_0);
    var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) ((signed char) var_3)))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)28955)) : (((/* implicit */int) var_0))))) * (max((((/* implicit */unsigned long long int) var_11)), (var_9)))))));
}
