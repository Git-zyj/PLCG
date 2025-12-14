/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110077
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
    var_12 = (~(((int) ((((/* implicit */_Bool) var_1)) ? (1108855259U) : (839497868U)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1])), (arr_2 [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
                arr_5 [i_0] [i_0] = 3455469420U;
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_13 &= ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */int) max((arr_6 [i_3] [i_2] [i_1] [i_0]), (arr_6 [i_0] [i_0] [i_0] [(short)8])))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3])));
                            var_14 = ((/* implicit */short) (~(((/* implicit */int) ((short) (-(-1502670680)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */short) max((((/* implicit */unsigned int) var_3)), (3648130631U)));
}
