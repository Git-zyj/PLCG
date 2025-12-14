/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128321
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_10 [9LL] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)8191)), (arr_9 [i_0])))) % (((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_9 [i_0]))))));
                    arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)24732))));
                    arr_12 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */short) arr_9 [i_0]);
                    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (short)-8191))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)37809)) : (((/* implicit */int) arr_3 [i_2]))))) || (((/* implicit */_Bool) ((short) (_Bool)1))))))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned int) var_6);
    var_12 = ((/* implicit */unsigned short) var_0);
}
