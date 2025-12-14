/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130697
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
    var_16 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (-(((/* implicit */int) (signed char)-78)));
                var_17 = ((/* implicit */int) ((_Bool) min(((-(2318212837U))), (((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_0])))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((var_7) ? (((((_Bool) var_1)) ? (((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) var_5)))) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) min(((unsigned char)9), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-31))))))))))));
}
