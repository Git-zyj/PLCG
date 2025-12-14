/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161030
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_10 = max((((/* implicit */long long int) (unsigned char)251)), (((((/* implicit */_Bool) var_3)) ? (arr_5 [i_1]) : (arr_5 [i_1]))));
                    var_11 |= (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) -3)) ? (268435456) : (-12))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_0] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_3]))))) >= (max((((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1904397818U)) ? (((/* implicit */unsigned int) 3)) : (1904397818U))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(4294967295U)))) ? (((/* implicit */unsigned int) (-(var_9)))) : (1U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) 3);
    var_13 = (~(((/* implicit */int) var_3)));
}
