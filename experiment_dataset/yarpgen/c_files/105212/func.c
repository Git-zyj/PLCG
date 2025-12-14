/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105212
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
    var_13 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_14 |= ((/* implicit */_Bool) (+(((/* implicit */int) min((max((((/* implicit */unsigned short) (_Bool)1)), (var_11))), (((/* implicit */unsigned short) (!((_Bool)1)))))))));
                            var_15 ^= ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */unsigned long long int) 16777215LL)) : (max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_3])), (var_4))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6)))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) max((((/* implicit */int) arr_5 [i_0])), (min((arr_9 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])))))))));
            }
        } 
    } 
}
