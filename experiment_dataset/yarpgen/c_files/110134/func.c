/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110134
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
    var_11 = ((4294967295U) > (((/* implicit */unsigned int) (~((-2147483647 - 1))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */int) (!(var_10)));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0 + 2] [i_1] [i_1] [i_0] [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */short) arr_8 [i_0 + 1] [i_3 - 1] [i_4 - 1] [i_2 + 4])), (var_9)))), (((((/* implicit */int) ((((/* implicit */int) (signed char)50)) != (((/* implicit */int) (signed char)93))))) << (((((/* implicit */int) arr_12 [i_0] [i_0 + 2] [i_1] [i_2] [i_0 + 2] [i_4] [i_1])) + (100)))))));
                                arr_15 [i_1] [i_1] [i_0] [i_2 + 2] [i_1] [i_0] &= ((/* implicit */signed char) (+(var_6)));
                                var_13 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_9);
    var_15 = ((/* implicit */long long int) ((short) max((((/* implicit */int) var_2)), ((~(((/* implicit */int) (unsigned char)35)))))));
}
