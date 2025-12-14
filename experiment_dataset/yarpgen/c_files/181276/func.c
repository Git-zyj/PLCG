/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181276
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
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    var_16 *= ((/* implicit */unsigned short) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_2] [i_2]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned short) var_0))), (var_13)));
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_4])), (max((((/* implicit */unsigned long long int) var_2)), (var_7)))))) ? (((unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0 - 3] [i_3] [i_2] [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_6 [i_2] [i_2 - 1] [i_2 - 1]), (var_10))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = var_13;
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (max((min((((/* implicit */unsigned int) -148639653)), (0U))), (min((21U), (((/* implicit */unsigned int) var_1))))))));
}
