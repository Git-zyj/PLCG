/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173027
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
    var_18 = ((unsigned int) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((unsigned int) (~(arr_0 [i_1])));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_19 = 33423360U;
                        var_20 = min((((var_4) * (((((/* implicit */_Bool) 4285321063U)) ? (var_3) : (var_13))))), (var_15));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 2; i_4 < 23; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_4] = var_12;
                            var_21 = ((((/* implicit */_Bool) ((var_1) / (4294967295U)))) ? ((-(var_16))) : ((+(((((/* implicit */_Bool) 7U)) ? (128790009U) : (4285321063U))))));
                        }
                        var_22 = (-(arr_9 [i_3] [i_3] [i_2] [i_1] [i_1] [i_0]));
                    }
                    var_23 = ((/* implicit */unsigned int) min((var_23), ((+(((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2 - 2] [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2])) ? (var_2) : (((var_11) << (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - (1571865355U)))))))))));
                }
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    arr_16 [i_5] [i_0] [i_0] [i_0] = 608262382U;
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            {
                                var_24 = ((unsigned int) arr_17 [i_0] [i_0]);
                                var_25 &= ((unsigned int) (-(610686929U)));
                                arr_22 [i_0] [i_0] [i_0] [i_0] = arr_12 [i_0] [i_1] [i_5] [i_6] [i_7];
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
