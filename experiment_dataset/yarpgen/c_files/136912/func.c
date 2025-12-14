/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136912
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
    var_20 += ((/* implicit */short) (-(((((/* implicit */int) (signed char)63)) * (((/* implicit */int) (_Bool)1))))));
    var_21 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (signed char)-63)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_2)), ((short)6))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */signed char) (+(arr_6 [i_1])));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) (signed char)83)))))))), (max(((~(var_10))), (max((((/* implicit */unsigned int) var_8)), (var_10)))))));
                            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) min((var_19), (((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_18)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_14)));
}
