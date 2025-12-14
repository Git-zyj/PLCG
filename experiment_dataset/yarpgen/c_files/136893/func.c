/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136893
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
    var_19 = ((/* implicit */signed char) var_17);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_1]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) var_16);
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_8 [i_3 + 2] [i_2]), (arr_8 [i_3 + 2] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_3])) ? (arr_2 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (var_5))))))) : (max((((/* implicit */unsigned long long int) arr_10 [i_2 + 2] [i_2] [i_2] [i_2] [i_2] [i_2])), (min((var_13), (((/* implicit */unsigned long long int) arr_10 [i_3] [i_2] [i_1] [i_1] [i_0] [i_0])))))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
            }
        } 
    } 
}
