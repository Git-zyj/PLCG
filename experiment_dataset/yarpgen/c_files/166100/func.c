/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166100
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
    var_13 = ((/* implicit */int) ((unsigned short) min((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)65535)))), ((-(((/* implicit */int) var_5)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_6 [i_1] [i_0 - 1] [i_0 - 1]))))));
                    var_15 = ((/* implicit */_Bool) ((max((min((((/* implicit */int) (signed char)-73)), (11352237))), (((/* implicit */int) min((arr_3 [(unsigned short)7] [15]), (arr_0 [i_0] [i_2])))))) << (((61779308U) - (61779288U)))));
                    var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3613920123U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(short)2] [i_0] [i_0])))))) ? (min((((/* implicit */int) (unsigned short)51402)), (min((((/* implicit */int) arr_2 [i_0] [(unsigned short)12])), (1012431853))))) : (((/* implicit */int) arr_6 [14LL] [i_1] [i_2]))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_3 [16LL] [16LL]);
                }
            } 
        } 
    } 
}
