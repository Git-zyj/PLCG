/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147533
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_10 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        arr_11 [14] [i_1] = ((var_2) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_6)))))));
                        var_11 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) < (var_8))))));
                    }
                    var_12 *= ((/* implicit */unsigned short) (+((-(var_9)))));
                }
            } 
        } 
    } 
    var_13 += ((/* implicit */int) var_3);
}
