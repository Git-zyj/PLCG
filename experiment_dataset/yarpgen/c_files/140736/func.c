/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140736
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
    var_19 -= (+(((/* implicit */int) (_Bool)1)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_1 - 1] [i_1] [7ULL] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)79)) * (-1)));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6)))))));
                                arr_15 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)79))));
                                arr_16 [i_4] [i_4] [i_4] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_1] [4ULL] [i_3] [i_1 + 1])) < (((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_2] [i_1 + 3]))))) >= ((-(-1391735025)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) min((1391735024), (((/* implicit */int) var_1))));
}
