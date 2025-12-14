/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142538
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
    var_12 = ((/* implicit */unsigned long long int) ((unsigned short) var_9));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) var_9);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) var_11);
                                arr_16 [4] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (unsigned short)44283);
                                var_14 = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_13 [i_2 + 2] [i_2 - 1] [i_2 - 2])) << (((((/* implicit */int) arr_13 [i_2 + 2] [i_2 - 1] [i_2 - 2])) - (67)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = min((((/* implicit */unsigned char) var_6)), (var_5));
}
