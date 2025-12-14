/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147582
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_1]);
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) > (min((((/* implicit */long long int) arr_3 [(unsigned char)14] [i_1])), (7176813036100788967LL))))))) : (arr_0 [i_0] [i_0])));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) (short)-25183);
    var_13 = (unsigned short)60212;
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) var_0))), (var_10)))))))));
}
