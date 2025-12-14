/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131858
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
    var_11 = ((((/* implicit */int) var_9)) & (((/* implicit */int) ((_Bool) (_Bool)0))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (var_9)))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))))), (max((((((/* implicit */int) (_Bool)1)) + (var_8))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) var_2)))))))));
                    arr_9 [(signed char)14] [(signed char)14] [i_2] = ((/* implicit */int) min((((arr_6 [i_0] [i_0] [i_1] [i_2]) << (((arr_6 [i_2] [(unsigned char)2] [i_1] [i_0]) - (8918037210106476179LL))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_0)))))));
                }
            } 
        } 
    } 
    var_12 &= ((/* implicit */unsigned long long int) ((var_8) & (((((/* implicit */int) var_9)) | (((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_4)) - (147)))))))));
}
