/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126705
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [i_2] [i_1] [(_Bool)0] = ((/* implicit */_Bool) ((signed char) ((unsigned char) (unsigned char)128)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)111))));
                                var_16 ^= ((/* implicit */unsigned char) (-(var_6)));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_2] [i_2] = ((unsigned int) max((arr_13 [i_0] [0ULL] [i_2]), (((/* implicit */unsigned int) (unsigned char)128))));
                }
            } 
        } 
    } 
    var_17 ^= ((/* implicit */unsigned char) (+((-((+(((/* implicit */int) (unsigned char)127))))))));
}
