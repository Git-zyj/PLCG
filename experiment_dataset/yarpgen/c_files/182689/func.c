/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182689
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
    var_10 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */long long int) max((var_11), (((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7)))))))));
                    arr_6 [i_0] [i_2] [i_2] = var_7;
                    var_12 = ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) var_9)))));
                    arr_7 [i_2] = ((unsigned char) var_7);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((long long int) ((((3304852784U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
    var_14 = ((/* implicit */unsigned int) var_1);
    var_15 = ((/* implicit */unsigned short) var_5);
}
