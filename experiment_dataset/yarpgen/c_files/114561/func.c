/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114561
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
    var_15 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) var_5);
                                arr_13 [i_4] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) var_0);
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) var_11);
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 19; i_5 += 4) 
                    {
                        for (signed char i_6 = 1; i_6 < 16; i_6 += 4) 
                        {
                            {
                                arr_21 [i_6] [i_1] [i_6] = ((/* implicit */unsigned short) var_4);
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_7))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) var_3);
                }
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_6))));
            }
        } 
    } 
}
