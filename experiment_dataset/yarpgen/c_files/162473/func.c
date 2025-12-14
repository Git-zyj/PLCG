/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162473
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) arr_7 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */short) ((signed char) (+(arr_0 [i_0 - 1]))));
                                var_14 = ((/* implicit */long long int) arr_6 [9LL]);
                            }
                        } 
                    } 
                    var_15 -= (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_0] [i_0] [6] [i_2] [i_2] [7]))))), (((unsigned int) arr_1 [i_0]))))));
                    var_16 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_5 [i_0] [i_0 - 1])), (((-5766767504160443176LL) | (-3823179583051866923LL)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_11);
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */int) (_Bool)1)), (-1967120944))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((((1420842759U) << (((/* implicit */int) (_Bool)1)))) - (2841685507U))))))));
    var_19 &= ((/* implicit */unsigned short) var_3);
    var_20 = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_0)))) >> (((((/* implicit */int) var_10)) + (23217)))));
}
