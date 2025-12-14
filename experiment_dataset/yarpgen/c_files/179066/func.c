/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179066
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
    var_14 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0 + 2] [i_1] = ((/* implicit */short) (-(max(((~(arr_0 [(short)2]))), (((/* implicit */int) var_10))))));
                var_15 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (var_1))))))), (max((var_9), (arr_4 [i_1]))));
                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_5 [(signed char)23] [i_0 - 1]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))))) % (((/* implicit */unsigned long long int) min((3567428565U), (((/* implicit */unsigned int) var_13)))))));
                arr_7 [(unsigned char)24] [i_1] [3] = (!((((+(arr_2 [i_1]))) == (((/* implicit */unsigned int) max((var_1), (((/* implicit */int) (short)32747))))))));
            }
        } 
    } 
}
