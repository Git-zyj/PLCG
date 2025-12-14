/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125306
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)23527)) && (((/* implicit */_Bool) (unsigned short)23527))));
                    arr_9 [i_0] [1] [i_2] [i_2] = ((/* implicit */unsigned char) var_0);
                    arr_10 [i_0] = ((var_9) << (((((/* implicit */int) arr_2 [(unsigned short)6] [i_1 - 3] [(unsigned short)6])) - (55))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_3] [i_1] [i_2] = ((/* implicit */short) ((arr_14 [i_0] [i_1] [i_1] [i_0] [i_4]) + ((+(((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_2])) >= (((/* implicit */int) arr_0 [i_2] [i_1])))))))));
                                var_14 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_4 - 1] [i_1 - 3])) ? (max((((/* implicit */int) arr_0 [i_0] [i_0])), (var_3))) : (((/* implicit */int) ((var_9) >= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1])))))))), (((/* implicit */int) min((arr_7 [i_1 + 1] [i_1 - 1]), (((/* implicit */short) var_11)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
}
