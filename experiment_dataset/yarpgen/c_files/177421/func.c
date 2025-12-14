/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177421
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */short) ((unsigned long long int) min(((-(((/* implicit */int) var_0)))), (min((((/* implicit */int) var_3)), (var_4))))));
                arr_7 [i_0 - 1] [i_1 - 1] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_13))))), ((+(var_8)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) ((short) min((((/* implicit */int) ((unsigned char) var_8))), (var_4))));
                            arr_15 [i_2] = ((/* implicit */unsigned long long int) min(((+(max((((/* implicit */long long int) var_4)), (var_12))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10)))))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) var_14))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (var_10))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */short) max((((long long int) ((unsigned short) var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_14))))))))));
    var_19 = ((/* implicit */long long int) (+(((/* implicit */int) var_3))));
    var_20 = ((/* implicit */unsigned short) (~(max((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (var_10))), ((-(var_10)))))));
    var_21 = ((/* implicit */_Bool) var_9);
}
