/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180353
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
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_19 = var_5;
                            arr_8 [i_0] [i_0] = var_3;
                            var_20 -= ((/* implicit */int) var_16);
                        }
                    } 
                } 
                arr_9 [i_0] [i_0] [5] = ((/* implicit */unsigned char) var_9);
                arr_10 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_10))));
    var_22 = ((/* implicit */int) var_3);
    var_23 = var_9;
}
