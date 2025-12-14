/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135900
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
    var_17 += ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))), (var_8)));
    var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_4))));
    var_19 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_2 [i_2]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] [2LL] [i_1] [(unsigned char)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((short) var_6)), (((/* implicit */short) (unsigned char)0)))))) : (((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_5 [i_1] [i_1] [i_4])))));
                                arr_15 [i_0] [i_1] [3U] [i_4] = ((/* implicit */_Bool) min((1938283644U), (((/* implicit */unsigned int) (_Bool)0))));
                                var_20 += ((((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_4] [i_3] [i_4] [(short)5] [i_3])) ? (arr_12 [i_3] [i_1] [i_1] [i_1] [i_4] [i_4] [i_3]) : (arr_12 [i_0] [(unsigned short)9] [i_0] [(unsigned char)4] [i_0] [i_0] [i_0]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_7 [i_1] [i_1] [i_2]) : (arr_3 [i_1] [i_1])))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1] = ((4294967295U) >= (4064U));
                                var_21 = (~(((((/* implicit */_Bool) 4064U)) ? (1466474588) : (-1466474589))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) (short)6);
}
