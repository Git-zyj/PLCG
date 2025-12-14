/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177958
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
    var_20 = ((/* implicit */signed char) var_16);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [19ULL] [i_2] [i_2] [(unsigned short)11] = ((/* implicit */_Bool) (~(((arr_8 [i_3] [i_2] [i_1] [i_0]) << (((arr_8 [i_3] [i_2] [i_1 - 1] [i_0]) - (3305144216U)))))));
                            var_21 = ((/* implicit */unsigned int) arr_0 [i_1 + 1]);
                            var_22 += ((/* implicit */unsigned int) arr_0 [i_0]);
                            var_23 += ((/* implicit */signed char) var_14);
                            var_24 = ((/* implicit */unsigned long long int) (-(min((arr_2 [i_0] [i_1 - 1]), (arr_2 [13U] [i_1 + 1])))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) 4120708723979471612ULL))));
            }
        } 
    } 
}
