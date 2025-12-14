/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154722
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
    var_11 = ((/* implicit */_Bool) min((max((((/* implicit */long long int) var_4)), (var_6))), (((/* implicit */long long int) max((2754299809U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))))))));
    var_12 = ((/* implicit */signed char) 4467570830351532032ULL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) var_5);
                                var_14 = ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0] [i_4]);
                                var_15 = ((/* implicit */long long int) (((-(arr_0 [i_1 - 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) (short)62)), (1488534359U))))))));
                                arr_10 [i_4] [i_0] [i_0] [i_1] = ((/* implicit */int) (signed char)48);
                                arr_11 [i_0] [i_1] [i_4] = ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                    var_16 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_8 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) - (((/* implicit */int) var_2)))))));
                    var_17 = ((/* implicit */long long int) (short)11051);
                }
                arr_12 [i_0] [i_0] [(signed char)18] &= ((/* implicit */unsigned int) (+((+(((int) 4467570830351532032ULL))))));
            }
        } 
    } 
}
