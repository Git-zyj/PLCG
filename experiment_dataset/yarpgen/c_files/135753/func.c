/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135753
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
    var_13 |= ((/* implicit */short) ((_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (var_11))) % (((/* implicit */int) var_5)))));
    var_14 = ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [(unsigned short)14] [(unsigned short)14] [i_2] [i_2] = ((/* implicit */unsigned char) var_12);
                    arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_7 [i_0] [i_1 - 1] [i_1 - 3] [i_0]))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) -1115833287)) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2])) : (var_1)))))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) -1542711962))));
                }
            } 
        } 
    } 
}
