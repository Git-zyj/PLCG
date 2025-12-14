/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154885
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
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (_Bool)0)), (min((1006285661U), (max((1006285661U), (1006285661U)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned int) var_7);
                                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) max((max((arr_7 [i_2] [i_3 - 4] [i_1] [i_2]), (arr_7 [i_3] [i_3 - 2] [i_3] [i_3]))), (max((arr_7 [i_3] [i_3 + 1] [i_2] [i_3]), (arr_7 [i_3] [i_3 - 1] [i_2] [i_3]))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) (((+(max((arr_0 [i_2]), (((/* implicit */unsigned int) (signed char)3)))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_2 [i_2]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) && (((/* implicit */_Bool) var_17))))))));
                }
            } 
        } 
    } 
}
