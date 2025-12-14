/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161215
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
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [(unsigned short)15] [i_0] [10ULL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)40483))))))) ? ((-(((/* implicit */int) arr_4 [i_4 + 2] [i_4 + 2] [i_4 + 1])))) : (((/* implicit */int) arr_6 [i_0] [i_0 - 1]))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_9 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_6 [i_0 + 3] [i_0 + 3]), ((unsigned short)65530))))) : (var_2))) : (((((/* implicit */_Bool) arr_11 [i_4] [i_4 - 1] [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */unsigned int) arr_5 [i_0])) : (var_8)))));
                            }
                        } 
                    } 
                } 
                var_21 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) arr_13 [i_0 + 3] [i_0 - 2] [i_0] [17ULL] [i_0])))));
            }
        } 
    } 
    var_22 |= var_12;
    var_23 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) var_14))))), (((var_11) >> (((((/* implicit */int) var_0)) - (155))))))), (((/* implicit */unsigned long long int) ((int) max((((/* implicit */short) var_12)), (var_6)))))));
}
