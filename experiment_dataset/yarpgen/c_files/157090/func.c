/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157090
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
    var_17 = ((((unsigned long long int) 1765153797454398390LL)) * (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-32760)), (1720109474U)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_18 += (+(((/* implicit */int) arr_0 [i_0])));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_19 *= ((/* implicit */signed char) arr_2 [i_0]);
                                var_20 -= ((/* implicit */short) max((((/* implicit */int) (short)801)), (var_3)));
                                arr_12 [i_1] [i_4] [i_3] [i_2] [i_1] [i_1] = ((((/* implicit */int) ((_Bool) arr_6 [i_3] [i_3] [i_3] [i_1]))) + (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_1])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(2056412228)))) ? (-2056412244) : (((/* implicit */int) (short)-7597))));
    var_22 |= ((/* implicit */short) var_11);
}
