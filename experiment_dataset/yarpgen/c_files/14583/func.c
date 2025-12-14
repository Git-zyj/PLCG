/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14583
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
    var_12 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [17LL] [i_0 - 2]))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) min((var_14), (((((/* implicit */_Bool) 2LL)) ? (((/* implicit */long long int) min((((/* implicit */int) (signed char)-97)), (-1)))) : (((arr_15 [i_1] [i_2] [i_3]) ? (-1949566342378741540LL) : (-1949566342378741540LL)))))));
                                var_15 *= ((/* implicit */unsigned long long int) -496705554);
                                arr_16 [(_Bool)0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)2188;
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] = ((/* implicit */_Bool) -5);
            }
        } 
    } 
}
