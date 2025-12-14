/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182530
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
    var_17 *= (!(((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)101))) & (36028797018963967LL))) & (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_15)), ((unsigned char)250)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0])) == (var_1)))), (max((((/* implicit */unsigned short) var_5)), (arr_7 [i_0] [i_2 + 1] [i_0] [i_2])))));
                    arr_10 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_2] [i_1] [i_0])) > (((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))))), (max((12549214249093322003ULL), (((/* implicit */unsigned long long int) var_6))))))) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)255)))), ((~(arr_1 [i_2] [i_1])))))) : (var_16)));
                }
            } 
        } 
    } 
}
