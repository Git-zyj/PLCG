/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188102
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
    var_20 = min((max((var_3), (min((((/* implicit */unsigned int) var_0)), (var_4))))), ((((_Bool)0) ? (4220755004U) : (1299985738U))));
    var_21 -= ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > ((-(max((((/* implicit */unsigned int) var_7)), (var_6))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((unsigned int) 816598192U);
                arr_7 [i_1] = var_2;
                var_22 = ((max((7U), (639268771U))) - (max((((((/* implicit */_Bool) var_4)) ? (3478369103U) : (var_6))), (3655698524U))));
                var_23 &= (-(arr_5 [16U]));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) max((var_24), (var_2)));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                            {
                                arr_15 [i_0] [18U] [i_1] [i_3] [i_4] = (~(arr_13 [i_0] [i_1] [i_2] [i_1] [i_4]));
                                var_25 *= 3917313235U;
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 1] [i_2] [i_3]))));
                                var_26 ^= 4294967295U;
                                arr_17 [i_1] [i_1] [i_2] [18U] [i_1] = ((/* implicit */_Bool) (-(((4294967295U) - (4294967295U)))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_22 [i_1] [i_2] [i_1] [i_1] [i_2] [i_2] = ((unsigned int) (+(((/* implicit */int) arr_8 [i_1 - 1]))));
                                var_27 = 3590291631U;
                                arr_23 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) arr_0 [i_3] [i_5]);
                                var_28 = min((0U), (3478369103U));
                            }
                            /* vectorizable */
                            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                            {
                                arr_26 [i_1] = arr_20 [i_6] [i_6] [i_1] [i_2] [i_1] [i_1] [i_0];
                                arr_27 [i_0] [i_1] = ((/* implicit */unsigned int) var_0);
                                arr_28 [i_1] [i_1] [14U] [i_3] [i_6] [i_1] [i_2] = 33554431U;
                                arr_29 [i_1] [i_1 - 1] = arr_14 [i_6] [12U] [i_1] [i_1] [i_1] [i_0] [i_0];
                            }
                            for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                            {
                                var_29 = ((/* implicit */_Bool) max(((-(arr_0 [i_0] [i_1]))), ((-(max((var_5), (arr_4 [i_1] [i_1] [i_0])))))));
                                arr_32 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7] = ((((/* implicit */_Bool) 33554431U)) ? (701662612U) : (2994981567U));
                                arr_33 [i_1] [i_1] [i_2] [i_3] [i_3] = (+(4294967295U));
                            }
                            arr_34 [i_0] [i_0] [i_2] [i_1] = max((min((arr_2 [i_1] [i_3]), ((~(7U))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (0U))));
                        }
                    } 
                } 
            }
        } 
    } 
}
