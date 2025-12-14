/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102191
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
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10338)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_15)) ? (var_8) : (18226273562346698978ULL))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (max((((((/* implicit */_Bool) (short)13849)) ? (0ULL) : (5882100329415575477ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) var_17))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned long long int) arr_5 [i_3]);
                                arr_14 [7LL] [i_0] [i_3] [i_4] = ((/* implicit */short) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) (unsigned short)65535);
                }
            } 
        } 
    } 
}
