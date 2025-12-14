/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180771
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
    var_15 = var_3;
    var_16 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] [i_1] [i_2] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((int) ((unsigned int) var_12)));
                                arr_14 [i_0 - 1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) arr_7 [i_0 + 1] [i_1] [i_0 + 1] [i_4]);
                            }
                        } 
                    } 
                    arr_15 [(_Bool)1] [(_Bool)1] [i_1] [i_2] = arr_12 [i_2] [i_2] [i_1] [i_2] [i_0];
                    arr_16 [i_0] [i_0] [i_0] [7U] = ((/* implicit */long long int) var_13);
                }
            } 
        } 
    } 
}
