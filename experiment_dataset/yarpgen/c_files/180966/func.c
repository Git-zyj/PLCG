/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180966
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) < (var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_16 -= ((/* implicit */unsigned char) max(((+(((/* implicit */int) (_Bool)0)))), (max((arr_4 [i_1 + 1] [i_1] [i_0]), (((/* implicit */int) var_14))))));
                arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 6742078667574411764ULL)) ? (max((((/* implicit */unsigned int) var_13)), (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) / (4294967295U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_2))));
                            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? ((((+(5U))) << (((((/* implicit */int) arr_6 [i_1 - 1] [i_1])) - (212))))) : ((((+(5U))) << (((((((/* implicit */int) arr_6 [i_1 - 1] [i_1])) - (212))) + (84)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
