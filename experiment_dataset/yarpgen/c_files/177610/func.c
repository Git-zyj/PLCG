/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177610
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_3 [i_1 + 1] [i_0])), (((((/* implicit */_Bool) max((1841577320), (((/* implicit */int) var_1))))) ? (min((((/* implicit */unsigned int) var_2)), (arr_0 [i_1]))) : (((arr_0 [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_3))) && (((/* implicit */_Bool) ((arr_6 [i_2] [i_1] [i_1] [i_0]) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))))))));
                    var_13 = ((/* implicit */short) arr_4 [i_0] [i_1 + 1] [i_2] [i_2]);
                }
                /* vectorizable */
                for (unsigned int i_3 = 1; i_3 < 23; i_3 += 4) 
                {
                    var_14 *= ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_3] [i_3] [i_3 + 1] [i_3]))));
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((unsigned short) var_8)))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        for (short i_5 = 1; i_5 < 23; i_5 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) arr_1 [i_0]);
                                var_17 = ((/* implicit */unsigned char) 14186413786917780452ULL);
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned short) arr_8 [i_5 + 1] [i_0] [i_0])))));
                                var_19 = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)42213));
                            }
                        } 
                    } 
                }
                var_20 += ((/* implicit */_Bool) ((unsigned long long int) min(((short)2592), (((/* implicit */short) arr_4 [i_0] [i_0] [i_0] [i_1])))));
            }
        } 
    } 
    var_21 *= var_8;
    var_22 = ((/* implicit */int) var_8);
}
