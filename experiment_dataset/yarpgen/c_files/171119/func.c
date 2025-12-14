/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171119
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
    var_12 = ((/* implicit */_Bool) (-((~(((var_1) ? (var_9) : (var_10)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((var_5), (((/* implicit */unsigned int) arr_4 [i_0])))), (((/* implicit */unsigned int) arr_1 [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_4)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) var_3);
                            arr_11 [i_0] [12LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(var_6))), (((/* implicit */long long int) min((((/* implicit */short) arr_9 [i_0] [3ULL] [3ULL])), (arr_0 [i_0]))))))) ? (max((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) arr_4 [i_0])) ? (var_0) : (var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
}
