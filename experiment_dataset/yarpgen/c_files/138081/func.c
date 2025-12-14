/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138081
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
    var_20 |= ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (unsigned short)6))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_22 &= ((/* implicit */unsigned int) (!(arr_0 [i_0 + 2])));
                                arr_12 [17U] [i_3] [17U] [i_0] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) var_2)), (arr_7 [i_4] [i_2 + 2] [i_0 + 1])))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */short) arr_1 [i_1]);
            }
        } 
    } 
}
