/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119793
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (+(1917762154U)))) >= (arr_2 [(short)5] [(short)5]))) ? (((/* implicit */int) (signed char)-59)) : ((~(((/* implicit */int) (unsigned char)221)))))))));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_2 [i_0] [22U]))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)21486)) << (((((-7375324517076985006LL) + (7375324517076985024LL))) - (4LL)))));
}
