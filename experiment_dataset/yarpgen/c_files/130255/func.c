/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130255
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned long long int) arr_1 [i_1 + 1]))))) ? (min((arr_7 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_7 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)6947)) : (((/* implicit */int) (_Bool)1)))))));
                            arr_10 [i_0] [i_3] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)1775))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_1))));
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (_Bool)1);
}
