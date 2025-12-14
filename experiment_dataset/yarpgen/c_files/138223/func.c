/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138223
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
    var_19 = ((/* implicit */unsigned int) (+(max((((/* implicit */int) var_3)), (((var_1) << (((((var_12) + (843405368))) - (16)))))))));
    var_20 = ((/* implicit */int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (max((((/* implicit */unsigned long long int) var_2)), (var_16))))), (((/* implicit */unsigned long long int) ((unsigned int) ((signed char) (signed char)96))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) min((max((((/* implicit */unsigned int) max((arr_2 [i_0]), (arr_0 [i_0])))), ((+(var_4))))), (max((var_14), (((/* implicit */unsigned int) (~(var_12))))))));
                    var_22 = arr_7 [i_1];
                }
            } 
        } 
    } 
}
