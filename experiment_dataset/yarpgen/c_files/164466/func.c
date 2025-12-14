/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164466
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_11 -= ((/* implicit */long long int) ((((((((/* implicit */int) (signed char)-113)) - (arr_0 [i_0]))) - (((((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_0])) - (arr_3 [i_0] [10ULL]))))) + (((/* implicit */int) (unsigned short)42460))));
                    var_12 |= ((/* implicit */unsigned long long int) ((var_10) + (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) ((unsigned short) arr_6 [i_0] [i_1] [i_3] [i_4]));
                                var_14 = ((((/* implicit */int) (short)10202)) >> (((10224489903942068818ULL) - (10224489903942068794ULL))));
                                var_15 = ((/* implicit */signed char) (_Bool)0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */short) (!(var_2)));
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
}
