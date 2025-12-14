/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104123
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
    var_19 = var_2;
    var_20 = ((/* implicit */int) ((var_5) <= (((/* implicit */int) max((var_12), ((_Bool)1))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((var_0) ? (var_5) : (((/* implicit */int) (signed char)-64))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))) : ((~(((var_12) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((((/* implicit */int) (signed char)116)) == (((/* implicit */int) (_Bool)1)));
                var_23 = ((/* implicit */int) (signed char)63);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_16 [i_3] [i_1] [(signed char)18] = ((/* implicit */_Bool) (signed char)40);
                                arr_17 [i_0] [i_1] [i_2] [i_1] [i_4 + 2] = (_Bool)1;
                                arr_18 [i_1] = ((/* implicit */_Bool) ((signed char) arr_14 [i_2 + 1] [i_4 - 1] [i_4] [i_4] [2] [i_4]));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) (signed char)6);
                    arr_21 [i_1] [i_1] [i_1] = ((/* implicit */int) (_Bool)1);
                }
                arr_22 [i_0] [(signed char)16] |= ((/* implicit */int) (_Bool)1);
            }
        } 
    } 
}
