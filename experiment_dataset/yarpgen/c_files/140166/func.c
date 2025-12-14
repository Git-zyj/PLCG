/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140166
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
    var_12 += ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (0ULL)));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 3; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0 - 3] [i_1] [i_2] [i_2] [i_3] [i_4 - 2] = ((/* implicit */long long int) ((signed char) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) var_2))))));
                                var_13 = var_5;
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_4] [i_1] = ((/* implicit */_Bool) min((arr_8 [i_1] [i_2] [i_3]), ((((_Bool)1) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)0)));
    var_15 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)0)), (var_4)))), (var_6))) | (((/* implicit */unsigned long long int) var_7))));
}
