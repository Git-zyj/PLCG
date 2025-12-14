/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143654
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-1149))))) ? (((/* implicit */long long int) arr_4 [i_0 + 1])) : ((~(var_12))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_16 [4] [i_3] [i_3] = ((/* implicit */signed char) (+(6839615608757746042ULL)));
                                var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_13 [i_0 + 1] [i_1] [i_2] [i_3 + 1] [i_3] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) ((long long int) ((unsigned short) (~(var_12)))));
    var_15 &= ((/* implicit */unsigned int) ((var_2) > (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
}
