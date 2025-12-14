/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15045
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (signed char)16))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 4; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_5 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_5 [i_0])))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [i_0] [i_0] [4] [i_0]))))))) && (((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)112)))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                            }
                        } 
                    } 
                    arr_16 [21ULL] [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((max((((/* implicit */unsigned int) arr_11 [i_1] [i_1 - 2] [i_1 + 2] [i_1] [i_1] [i_1 + 3])), (var_4))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_1] [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 3])) : (((/* implicit */int) arr_11 [i_1] [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 3])))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_16))));
}
