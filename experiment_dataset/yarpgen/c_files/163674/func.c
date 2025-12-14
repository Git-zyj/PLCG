/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163674
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 14; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) -1139026807)) - (arr_5 [i_0]))), (min((1040187392U), (((/* implicit */unsigned int) (unsigned short)65530))))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) -1139026808)) + (4294967295U)))) : (((((/* implicit */_Bool) ((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65530)))))) ? (arr_6 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6)))))));
                                arr_15 [i_3] [i_3] [(unsigned char)8] [i_3] [i_4] |= ((/* implicit */int) var_4);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((unsigned char) ((var_5) | (-1139026807)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_9);
}
