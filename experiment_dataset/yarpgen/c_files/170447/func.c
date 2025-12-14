/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170447
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
    var_15 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    arr_10 [i_0] [i_0] [i_2] = var_3;
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */int) var_1);
                    var_16 = ((/* implicit */short) var_14);
                }
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_8))));
                arr_12 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 8191U)) ? (((/* implicit */int) (short)-3)) : (((/* implicit */int) (unsigned short)18650))));
            }
        } 
    } 
}
