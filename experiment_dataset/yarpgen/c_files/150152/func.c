/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150152
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
    var_12 = ((/* implicit */unsigned long long int) var_0);
    var_13 = ((/* implicit */unsigned int) ((long long int) (+(((/* implicit */int) var_11)))));
    var_14 = var_8;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)5858))) : (var_7)))) ? ((((~(((/* implicit */int) arr_0 [i_0])))) ^ (((/* implicit */int) arr_1 [i_0] [i_1 + 1])))) : (((/* implicit */int) arr_2 [i_0])));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_1 + 2] [i_2] [i_3] [i_3] [i_4 - 1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((unsigned long long int) var_6)))) + (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) var_9))))), (var_7))))));
                                arr_12 [0U] [i_1] [i_1] [i_1] [6] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_10)), (max((((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) ((short) var_3)))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_1] = ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)57889))))));
            }
        } 
    } 
}
