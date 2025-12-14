/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162494
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
    var_16 = ((/* implicit */int) (((-(var_11))) + (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((10282016188467879796ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2071943418))))))))) + (max((((int) var_4)), (((/* implicit */int) var_12))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 3241077463U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))) : (((((/* implicit */_Bool) (unsigned short)2194)) ? (10282016188467879787ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_6 [i_0]))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)98);
                }
            } 
        } 
    } 
}
