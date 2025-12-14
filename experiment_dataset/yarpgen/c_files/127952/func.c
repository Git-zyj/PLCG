/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127952
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) % (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))));
                    var_13 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) arr_6 [i_1])), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_8)) : (var_6))))), (max((max((var_6), (((/* implicit */long long int) arr_3 [i_2])))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)32)))))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */int) (_Bool)1);
                    arr_10 [20] [i_1] [i_1] [20] = ((/* implicit */signed char) (~(max((((/* implicit */long long int) (~(var_5)))), (max((((/* implicit */long long int) var_5)), (var_6)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) var_9);
}
