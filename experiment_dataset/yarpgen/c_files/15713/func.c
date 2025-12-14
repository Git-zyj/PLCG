/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15713
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
    var_12 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_9)))) <= (var_6)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]));
        arr_3 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_13 = ((/* implicit */long long int) ((unsigned char) 1662798267U));
        var_14 = ((((/* implicit */_Bool) ((unsigned short) arr_7 [i_1] [i_1]))) ? ((+(arr_1 [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (-340729358) : (((/* implicit */int) var_8))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (signed char i_3 = 3; i_3 < 24; i_3 += 4) 
        {
            {
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_0))));
                arr_14 [i_2] [(unsigned short)4] = ((/* implicit */short) (((-(arr_13 [6LL] [i_3 + 1] [i_3 - 3]))) - (((((/* implicit */_Bool) arr_9 [i_3] [i_3 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_3 - 1]))) : (arr_12 [i_3 - 3] [i_3 - 1])))));
            }
        } 
    } 
}
