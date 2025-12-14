/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143929
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 4; i_2 < 16; i_2 += 2) 
                {
                    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) 793261320))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_12 += ((/* implicit */short) arr_7 [i_0 - 1] [i_2 - 1]);
                                arr_11 [i_0] [i_3] [i_2] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) arr_7 [i_1] [i_3]);
                                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (~(min((6264454005904462580LL), (arr_10 [i_2 - 2] [i_2 - 2] [i_2 - 4] [(unsigned short)16] [i_0 + 1]))))))));
                                arr_12 [i_0] [i_4] [i_4] [i_3] [i_4] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0 + 1] [i_2 + 1] [i_1]))))) ? (((/* implicit */int) min((arr_5 [i_0 - 1] [i_2 - 1] [i_2]), (arr_5 [i_0 + 1] [i_2 - 2] [i_2])))) : (((/* implicit */int) arr_5 [i_0 - 1] [i_2 - 3] [i_3]))));
                            }
                        } 
                    } 
                }
                arr_13 [i_0] [(unsigned short)6] [(short)8] = ((/* implicit */unsigned int) 1014464465875285779LL);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_5 - 1] [i_5 + 1] [i_5] [i_5 - 1] [i_6] [i_6] [5ULL])))))));
                arr_19 [i_6] = ((/* implicit */_Bool) ((arr_8 [i_5] [i_5] [i_5] [i_5]) >> ((-(((/* implicit */int) arr_7 [i_5 - 1] [i_5 - 1]))))));
            }
        } 
    } 
}
