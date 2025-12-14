/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128993
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_15 = arr_9 [i_4] [i_3] [i_0];
                                arr_14 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] [i_4 + 1] = ((/* implicit */unsigned int) arr_0 [i_0]);
                                var_16 = arr_3 [(_Bool)1] [i_1] [13U];
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_7 = 3; i_7 < 24; i_7 += 1) /* same iter space */
                            {
                                arr_25 [i_0] [i_1] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) arr_8 [i_0] [11U] [i_0] [(_Bool)1]);
                                var_17 *= arr_4 [i_1] [i_1];
                            }
                            for (unsigned int i_8 = 3; i_8 < 24; i_8 += 1) /* same iter space */
                            {
                                var_18 &= arr_22 [i_0] [i_1] [(_Bool)1] [i_5] [i_5] [i_8 - 3];
                                var_19 = arr_19 [i_0] [(_Bool)1] [i_5] [(_Bool)1] [i_0];
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_0 [i_0]))));
                            }
                            var_21 ^= arr_23 [(_Bool)1] [i_1] [i_0] [(_Bool)1] [i_5] [i_0];
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = var_7;
}
