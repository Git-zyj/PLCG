/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180923
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) var_0);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (int i_3 = 4; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_10 [i_3] [i_0] [i_1] = ((/* implicit */unsigned int) (+((+(arr_9 [i_0] [i_3] [4U] [i_3 - 1] [i_3 - 2] [i_0])))));
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) max((((unsigned short) (unsigned char)69)), (((/* implicit */unsigned short) ((var_9) != (arr_0 [i_1])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 ^= var_12;
}
