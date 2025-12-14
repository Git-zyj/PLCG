/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109410
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_14))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_0] [i_0]))))), (((((unsigned long long int) var_13)) + (arr_14 [i_2 + 1])))));
                                var_22 = ((/* implicit */unsigned char) arr_15 [i_1] [i_2 - 2] [i_4] [i_4 + 1] [i_4 + 1]);
                            }
                        } 
                    } 
                    var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((-20), (0)))) ? (((long long int) var_16)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 4627185148990866241ULL))))));
                }
            } 
        } 
    } 
}
