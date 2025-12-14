/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16255
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (~(var_3))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_2] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_1))) - (((/* implicit */int) arr_5 [i_0] [i_1 - 3] [i_1 - 3] [i_1]))))), (max((((long long int) var_3)), (((/* implicit */long long int) (-(var_10))))))));
                    var_15 *= ((/* implicit */signed char) max((((/* implicit */unsigned short) (unsigned char)28)), ((unsigned short)65530)));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_2);
                }
            } 
        } 
    } 
    var_16 = var_2;
    var_17 = ((min((((/* implicit */unsigned long long int) min((var_6), (var_6)))), (((var_3) << (((/* implicit */int) var_6)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned char) var_13)))))) != (min((((/* implicit */unsigned long long int) var_13)), (var_3))))))));
}
