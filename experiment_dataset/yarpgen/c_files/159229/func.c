/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159229
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
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) var_13)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 |= ((/* implicit */unsigned long long int) var_12);
                        var_19 = ((/* implicit */long long int) var_1);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_0] [i_0] [i_5] = ((/* implicit */long long int) var_8);
                                arr_19 [i_0] [i_4] [i_4] [i_2] [i_1 + 1] [i_0] [i_0] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_9))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) var_15);
                }
            } 
        } 
    } 
}
