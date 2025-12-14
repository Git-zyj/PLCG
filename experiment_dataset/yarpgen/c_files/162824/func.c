/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162824
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
    var_13 += ((/* implicit */short) var_12);
    var_14 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)4)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) var_5)) : (var_2)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 + 1])))))));
                            var_16 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(269588498U)))) ? (arr_4 [i_0]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-11659)) ? (max((var_0), (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_1])))))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (var_10)))))));
                var_18 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (signed char)93))))))) >= (((unsigned long long int) min((((/* implicit */long long int) (short)-24726)), (-3826970884464411311LL))))));
            }
        } 
    } 
}
