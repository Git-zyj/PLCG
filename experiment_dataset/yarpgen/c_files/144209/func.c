/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144209
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
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) 496366982))));
    var_20 &= ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_5 [i_1]))));
                var_22 = ((/* implicit */short) ((min((4110287575736298836ULL), (((/* implicit */unsigned long long int) arr_4 [i_0 - 3])))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))));
                arr_6 [i_0] [i_1 - 3] [(unsigned char)3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) min((((unsigned char) (short)1307)), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)79)) >= (((/* implicit */int) (unsigned short)20351))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_18);
}
