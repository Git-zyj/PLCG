/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133126
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
    var_19 = var_4;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) != ((+(((/* implicit */int) (_Bool)1)))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(6626972317340300298ULL)))) ? (6626972317340300289ULL) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (unsigned short)13321)) >> (((9223372036854775798LL) - (9223372036854775783LL)))))))));
                arr_7 [i_0] [i_0] [i_1] = var_12;
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
}
