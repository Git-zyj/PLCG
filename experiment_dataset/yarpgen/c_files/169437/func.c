/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169437
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
    var_19 |= ((/* implicit */_Bool) min((var_1), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) 387669311)) ? (-1736365364) : (((/* implicit */int) var_15))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_15 [(unsigned char)16] [i_3] [i_3] [(signed char)6] [(short)14] |= ((/* implicit */long long int) (short)6341);
                                arr_16 [i_1] = ((/* implicit */_Bool) arr_10 [i_4] [i_1] [i_4] [i_4]);
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_1] [i_1] [(unsigned char)20] = ((/* implicit */long long int) arr_1 [i_0]);
                    var_20 = ((/* implicit */unsigned short) var_14);
                    var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_1 - 1] [(short)20] [(short)20]))))), (arr_9 [i_1] [i_1] [i_1] [i_1 + 2] [i_2] [i_2])));
                }
            } 
        } 
    } 
}
