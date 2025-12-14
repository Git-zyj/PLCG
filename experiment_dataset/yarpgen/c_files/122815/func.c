/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122815
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_18 = ((arr_5 [14] [i_1]) == (((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_16))))))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_9 [1] [i_1] [(unsigned char)4]) : (((/* implicit */int) var_14))))) | (min((var_3), (((/* implicit */unsigned long long int) var_7))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_8))))) & ((~(var_12)))))));
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */unsigned int) ((_Bool) (unsigned short)0))), (min((261931477U), (((/* implicit */unsigned int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_19 = (((~((~(((/* implicit */int) var_1)))))) | (((/* implicit */int) var_1)));
}
