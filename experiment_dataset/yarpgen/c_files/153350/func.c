/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153350
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 -= ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_1] [i_1])), (arr_1 [i_0]))))));
                            var_19 &= ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_7 [i_3] [i_3])))), (((/* implicit */int) arr_7 [i_0] [i_0]))));
                            arr_10 [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3])) && (((((/* implicit */_Bool) -5911090898499183690LL)) || (((/* implicit */_Bool) arr_9 [i_2] [i_0] [i_2] [i_3])))))))));
                        }
                    } 
                } 
                var_20 ^= arr_7 [i_0] [i_1];
            }
        } 
    } 
    var_21 ^= ((/* implicit */unsigned char) var_9);
}
