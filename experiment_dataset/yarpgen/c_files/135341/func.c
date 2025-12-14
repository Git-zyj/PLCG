/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135341
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), (1158205558))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)17))))) : (((unsigned long long int) (+(var_3))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
                            arr_10 [i_3] [i_2] [11U] [(signed char)1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_0])) >> (((((/* implicit */int) var_8)) + (12961))))), ((-(((/* implicit */int) arr_7 [i_1 + 1] [i_1]))))));
            }
        } 
    } 
    var_14 += ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)68))));
    var_15 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (var_8))))) / (max((((/* implicit */unsigned int) var_5)), (1837733091U))))) & (max((((/* implicit */unsigned int) ((short) var_9))), (643011388U)))));
}
