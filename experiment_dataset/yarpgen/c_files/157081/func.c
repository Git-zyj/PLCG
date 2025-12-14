/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157081
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
    var_17 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_3 [i_2] [i_1 - 1])))) <= (min((0U), (((/* implicit */unsigned int) (unsigned char)197))))))) != (((((/* implicit */int) arr_4 [i_1 - 1] [i_2] [i_1 + 1] [i_1 - 1])) >> (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_2])) == (((/* implicit */int) arr_1 [i_0])))))))));
                    var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2])) & (((/* implicit */int) arr_0 [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) : (arr_3 [i_0] [i_1 + 2]))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1 + 2] [i_2] [i_2]))) : (2648231247U))))), (((/* implicit */unsigned int) ((_Bool) arr_2 [i_1] [i_1])))));
                }
            } 
        } 
    } 
}
