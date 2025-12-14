/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181735
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
    var_18 = ((/* implicit */unsigned long long int) 3559942103U);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_19 ^= (+(((/* implicit */int) (unsigned short)41038)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_20 -= ((/* implicit */short) (~(((unsigned int) (~(-119832664))))));
                                arr_12 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) (+(-2111238928)));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_0] = ((/* implicit */short) (unsigned short)24501);
                }
                var_21 = (~(var_2));
                var_22 *= ((/* implicit */unsigned int) 119832664);
                arr_14 [i_0] [i_0] [i_0] = var_5;
            }
        } 
    } 
}
