/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100408
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] = ((max((((((/* implicit */long long int) ((/* implicit */int) var_1))) & (var_8))), (min((9223372036854775807LL), (var_8))))) <= (((/* implicit */long long int) var_0)));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_12 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((((var_4) && (((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((short) arr_8 [(signed char)3] [(short)2] [i_2] [i_1 - 1]))) : (((((/* implicit */_Bool) ((signed char) arr_5 [i_4] [i_1] [i_0]))) ? (((/* implicit */int) min(((_Bool)0), ((_Bool)0)))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) var_1))))))));
                                var_10 = ((/* implicit */unsigned int) (signed char)27);
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */short) (signed char)36);
                    var_12 = (!(((/* implicit */_Bool) arr_4 [i_1] [i_0])));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */long long int) var_4)), (var_8))))) ? (((((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27))) : (var_0))) - (var_0))) : (((((/* implicit */_Bool) min((var_7), (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_1)))))) : (((var_4) ? (((/* implicit */unsigned int) var_7)) : (var_0)))))));
}
