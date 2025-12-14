/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13439
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
    var_20 ^= ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */int) 180987718U);
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                        var_22 = arr_1 [i_0 - 1] [i_0];
                        var_23 = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 2; i_4 < 10; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) arr_4 [i_0 - 1]);
                                arr_19 [i_0] [i_1] [11U] [i_2] [i_4 + 3] [i_0] = ((/* implicit */unsigned long long int) arr_17 [i_5] [i_5] [i_5] [i_4 + 1] [i_4] [i_4 + 2] [i_2]);
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)-17);
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) var_18);
    var_26 = ((/* implicit */unsigned short) var_11);
}
