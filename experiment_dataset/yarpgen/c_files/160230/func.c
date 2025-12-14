/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160230
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((long long int) 4294967293U)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_20 += ((/* implicit */signed char) (((~(((/* implicit */int) ((signed char) var_4))))) / (((((/* implicit */int) arr_4 [i_0] [i_1])) - (((/* implicit */int) (!((_Bool)0))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_1 + 2] [i_1 + 3] [i_1 - 1] [i_1 - 1] = ((/* implicit */long long int) arr_1 [i_0] [i_1 + 1]);
                            var_21 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_5))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_2))))) + (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_0] [i_0])) >= (((/* implicit */int) (signed char)21))))), (max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)28)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
