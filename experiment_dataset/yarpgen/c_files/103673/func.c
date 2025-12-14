/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103673
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
    var_19 = ((/* implicit */unsigned int) 562949953421311ULL);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */short) (_Bool)1);
                                var_21 = ((/* implicit */short) max((1462128669), (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) var_12);
                    var_23 = arr_12 [i_0] [i_1] [i_2] [i_2];
                    var_24 = ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_0])), ((unsigned char)255))))));
                }
            } 
        } 
    } 
}
