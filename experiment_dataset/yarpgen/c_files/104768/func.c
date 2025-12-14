/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104768
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
    var_11 = ((/* implicit */int) var_1);
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_8))));
    var_13 = ((/* implicit */short) 4294967295U);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 6; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_7))))))), (((/* implicit */int) var_9))));
                                var_14 = ((/* implicit */unsigned char) max((((/* implicit */short) arr_13 [i_0] [i_0] [i_2] [i_3] [i_0])), (arr_6 [i_1] [i_1])));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])))))))));
                    var_16 = arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2];
                    var_17 = ((/* implicit */int) var_1);
                }
            } 
        } 
    } 
}
