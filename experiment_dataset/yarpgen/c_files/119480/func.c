/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119480
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
    var_14 = ((/* implicit */unsigned char) ((var_6) < (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_11 [i_2] [i_1 - 1] [i_1] = ((/* implicit */long long int) ((3543054632U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                            var_15 = ((/* implicit */unsigned char) (!(((_Bool) var_7))));
                        }
                    } 
                } 
                var_16 -= ((/* implicit */long long int) (!(((((((/* implicit */_Bool) arr_6 [i_1] [(unsigned char)12] [6ULL] [(unsigned char)12])) ? (((/* implicit */int) arr_1 [i_0] [i_1 - 1])) : (((/* implicit */int) (unsigned char)248)))) <= (((/* implicit */int) min((((/* implicit */short) arr_1 [i_0] [i_1])), (var_5))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
    var_18 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) max((var_12), (((/* implicit */short) var_1))))))));
    var_19 = ((/* implicit */_Bool) var_2);
}
