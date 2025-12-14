/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167924
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)0))));
                                var_13 = var_3;
                                arr_13 [i_2] [i_3] [8ULL] [(short)9] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 - 1] [i_2 + 2]))))) ? ((-(3308721122U))) : (min((((/* implicit */unsigned int) arr_1 [i_1] [i_1])), (((((/* implicit */unsigned int) arr_8 [i_2] [i_4])) - (arr_2 [i_1])))))));
                                var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])), (arr_11 [i_0] [i_1 - 1] [i_2] [i_3] [i_4]))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1] [i_3] [i_4]))))) : ((+(var_9))))) : (((unsigned int) arr_3 [i_0 - 1]))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */int) var_5);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((var_11) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_6))))) : ((+(15374867077287536291ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
}
