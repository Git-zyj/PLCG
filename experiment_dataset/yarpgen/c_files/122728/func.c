/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122728
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 8468861786426484878ULL)) || (((/* implicit */_Bool) var_2))))), (((unsigned int) max((var_8), (((/* implicit */long long int) var_1)))))));
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) var_8)) ? (8468861786426484883ULL) : (((/* implicit */unsigned long long int) ((int) var_8))));
                                arr_13 [i_0] [(unsigned short)18] [i_2 + 1] [i_3] [i_4] = ((/* implicit */int) ((signed char) var_16));
                                arr_14 [i_0] [i_1] [i_2 + 2] = ((/* implicit */unsigned short) var_5);
                                var_19 ^= ((/* implicit */unsigned char) (+(var_0)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((var_10) / (((/* implicit */int) ((unsigned char) var_6)))));
}
