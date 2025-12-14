/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141349
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                arr_6 [i_1 - 2] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */_Bool) min((var_9), (-1568330574)))) ? (-486257717) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((var_1) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned int) var_0)) : (min((3754392772U), (540574523U))))) : (max((((/* implicit */unsigned int) arr_1 [i_1 - 1])), (((((/* implicit */_Bool) var_9)) ? (540574510U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1792)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) 17592152489984LL);
    var_14 = ((/* implicit */long long int) var_3);
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)14859))))) : ((((~(var_3))) % (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))))));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 10; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (int i_4 = 2; i_4 < 8; i_4 += 2) 
            {
                {
                    var_16 &= ((/* implicit */signed char) var_11);
                    var_17 = ((/* implicit */_Bool) 1821199107);
                    var_18 = ((/* implicit */unsigned char) var_6);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_21 [i_6] = ((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-5480060952677304465LL)));
                                arr_22 [i_2] [i_6] [i_2] [i_2 + 1] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned int) 2147483647)), (3754392772U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
