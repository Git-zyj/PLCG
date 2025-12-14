/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142781
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
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 6; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((min((((((/* implicit */int) var_10)) | (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0])))))) | (((/* implicit */int) var_10))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_3 [i_0]))));
                                var_17 *= ((/* implicit */long long int) ((signed char) (~(var_14))));
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_1] [i_2 - 1] [i_1 - 1])))))));
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (var_9))))) : (((/* implicit */long long int) ((((/* implicit */int) var_12)) + (var_2))))));
                                arr_18 [i_0] [i_4] [i_2] [i_3] = ((/* implicit */long long int) ((_Bool) var_6));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_3);
}
