/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150493
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
    var_15 = ((/* implicit */unsigned char) var_14);
    var_16 = ((/* implicit */signed char) ((var_7) ? (((/* implicit */int) ((_Bool) ((long long int) (_Bool)1)))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (((((/* implicit */int) var_1)) | (((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (var_2))), (((/* implicit */int) ((unsigned char) arr_3 [16U])))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) > (min((((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_0] [i_2] [i_2]))), (min((((/* implicit */unsigned long long int) arr_1 [i_3])), (arr_6 [i_2] [i_3])))))));
                            var_19 = ((/* implicit */short) ((unsigned char) (+((+(((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
