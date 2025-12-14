/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109971
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
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) (_Bool)1);
                                arr_14 [(short)9] [i_0 - 1] [(unsigned short)8] [(unsigned short)8] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) -668522392);
                                arr_15 [i_0] [i_1] [(short)7] [i_0] [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_0]))))), (min((((((/* implicit */unsigned int) ((/* implicit */int) (short)-20730))) + (130816U))), (((/* implicit */unsigned int) ((unsigned short) arr_2 [i_0] [i_0 - 1] [i_0])))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = max((((/* implicit */short) arr_6 [i_0 - 1] [i_0] [i_0])), (max((((/* implicit */short) arr_6 [i_0 - 1] [i_0] [i_0 - 1])), (var_7))));
                    var_10 = ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (unsigned char)160)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) arr_17 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0]);
                                var_12 = ((/* implicit */short) 9223372036854775807LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) var_9);
}
