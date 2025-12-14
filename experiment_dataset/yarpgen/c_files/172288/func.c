/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172288
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
    var_18 = ((/* implicit */signed char) min((var_18), (var_15)));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) arr_7 [i_1 - 2] [i_1 + 2] [i_1]))), (((int) max((arr_12 [(signed char)4] [i_1] [(signed char)4] [i_3] [i_4]), (((/* implicit */int) arr_8 [i_0 + 1] [(signed char)1] [i_0 + 1])))))));
                                arr_14 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2]))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_1] [i_1] [i_0] = arr_5 [i_1 - 1] [i_0 + 1];
                    arr_16 [i_0] [i_1 + 1] [i_2] = ((/* implicit */int) arr_8 [i_0] [i_1] [i_0]);
                }
            } 
        } 
    } 
}
