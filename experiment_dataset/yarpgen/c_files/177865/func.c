/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177865
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
    var_13 = ((/* implicit */unsigned int) var_5);
    var_14 &= ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_0 + 2] [i_1 + 1]))))) ? (((/* implicit */int) max((arr_5 [i_0] [11] [i_1 + 1]), (arr_5 [i_0] [6LL] [i_1 - 1])))) : (((/* implicit */int) arr_5 [i_0] [3LL] [i_1 - 1]))));
                arr_8 [0LL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) (+(268515380U))))));
                var_16 = ((/* implicit */unsigned int) ((max((0ULL), (((/* implicit */unsigned long long int) arr_2 [i_0 + 3])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)19))))))))));
                var_17 = ((/* implicit */int) var_2);
                var_18 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) (~(-4)))), (-1342483965518483790LL))) & (((/* implicit */long long int) arr_0 [i_0]))));
            }
        } 
    } 
}
