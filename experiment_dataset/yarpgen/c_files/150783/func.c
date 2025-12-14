/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150783
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
    var_16 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) var_14);
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_13))));
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_19 = var_5;
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_3))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) (signed char)-85);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1]))) != (arr_19 [i_6] [i_5] [i_2] [i_1] [i_0])));
                                var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [(unsigned char)0] [i_0] [i_2 - 2])) ? (((/* implicit */int) ((unsigned short) arr_5 [i_1 - 1] [i_1 + 2] [i_2 - 3]))) : (((/* implicit */int) var_15))));
                                arr_21 [i_0] [i_1] [i_1] [i_5] [i_6] = arr_0 [i_1];
                                var_22 = ((/* implicit */signed char) arr_0 [i_0]);
                                var_23 += ((/* implicit */unsigned int) var_2);
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] [i_2 - 2] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned int) arr_10 [i_2 - 3] [2U] [i_2 - 1] [i_1 + 1])) >= (876098149U))));
                }
            }
        } 
    } 
}
