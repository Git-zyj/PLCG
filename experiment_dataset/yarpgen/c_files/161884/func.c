/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161884
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [i_1] |= ((/* implicit */int) ((0LL) ^ (0LL)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_11 -= ((/* implicit */unsigned short) max((arr_0 [i_0]), (((/* implicit */long long int) arr_6 [i_3] [5LL] [i_0]))));
                            var_12 = ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_0]);
                            arr_11 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0]);
                            var_13 = arr_3 [i_1] [i_1];
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]);
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
                arr_14 [i_0] [i_1] = ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) min((max((arr_0 [i_1]), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) arr_1 [i_1]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_6);
    var_15 = ((/* implicit */signed char) max((min((var_5), (((/* implicit */unsigned long long int) (_Bool)1)))), (min((var_5), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) var_9)))))))));
}
