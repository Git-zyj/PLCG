/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184383
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
    var_11 = var_4;
    var_12 = ((/* implicit */long long int) var_10);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_13 = (-(((long long int) (-(var_1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_0] [i_2]))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) arr_0 [i_3]))))) ? (((/* implicit */long long int) (+(3927158774U)))) : ((+(arr_5 [i_0] [i_1 + 2] [i_2])))))) ? ((-(1173993922U))) : (((/* implicit */unsigned int) 309596621))));
                                var_16 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 - 2] [i_2] [i_0 - 1] [i_4]))))), (16256LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) ((7434322996748618082LL) >= (((/* implicit */long long int) ((unsigned int) var_4)))));
}
