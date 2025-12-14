/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162293
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0]))));
                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
                var_21 = ((/* implicit */signed char) (+(((/* implicit */int) ((min((var_17), (((/* implicit */long long int) var_13)))) < (((/* implicit */long long int) ((/* implicit */int) min((var_0), (arr_1 [i_0]))))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [i_3] [5LL] [i_3] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) -1854734724)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) | (0U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((6U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))))) >= (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) % (arr_10 [i_1]))))))))));
                                var_22 = (!(((/* implicit */_Bool) 4U)));
                                var_23 = ((/* implicit */short) 4294967295U);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) min((min((0U), (4294967295U))), (0U)));
    var_25 = ((/* implicit */unsigned int) (((+(((/* implicit */int) max((var_14), (((/* implicit */unsigned short) var_18))))))) & (((/* implicit */int) var_15))));
    var_26 = ((/* implicit */unsigned char) var_6);
}
