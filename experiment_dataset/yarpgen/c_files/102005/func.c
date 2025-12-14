/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102005
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
    var_10 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_8), (((/* implicit */short) var_3)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_11 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                    var_12 = ((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-1))));
                    var_13 = ((/* implicit */_Bool) min((var_13), (var_4)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_15 [i_3] = ((/* implicit */signed char) (-((-(arr_10 [i_1] [i_3] [i_1] [i_1] [i_2 + 1] [i_1])))));
                                arr_16 [i_3] [i_3] = ((/* implicit */unsigned char) ((min((((((/* implicit */long long int) ((/* implicit */int) (signed char)-127))) + (arr_1 [i_3]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)1))))))) > (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))) + (1714192380U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))))) : (((((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (signed char)0))))) - (var_5)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (+(var_7))))));
}
