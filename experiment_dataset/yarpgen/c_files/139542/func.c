/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139542
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
    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_16)), (((((/* implicit */_Bool) var_17)) ? (max((4294967276U), (((/* implicit */unsigned int) var_19)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((/* implicit */int) var_0)), (-1))))));
                var_22 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (signed char)52))) << (((((/* implicit */int) ((unsigned char) (unsigned char)197))) - (186)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((unsigned int) (unsigned short)33505));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((max((min((7ULL), (((/* implicit */unsigned long long int) (unsigned char)178)))), (max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) ((short) arr_2 [i_2] [i_2])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
