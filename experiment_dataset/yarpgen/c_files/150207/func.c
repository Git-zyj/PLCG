/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150207
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
    var_10 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? ((~(((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_4))))))) : (((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) ((short) arr_2 [i_0] [i_0 + 1]))), (((((/* implicit */int) (unsigned short)48786)) - (((/* implicit */int) var_0))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)123)), (min((((/* implicit */unsigned int) var_2)), (((arr_5 [i_0] [i_0] [i_1] [i_2]) | (arr_5 [i_0] [i_1] [i_2] [i_2])))))));
                }
            } 
        } 
    } 
}
