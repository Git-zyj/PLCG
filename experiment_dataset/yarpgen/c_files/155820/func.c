/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155820
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
    var_15 |= ((/* implicit */int) (short)32767);
    var_16 = ((/* implicit */short) max((var_16), ((short)32741)));
    var_17 |= ((/* implicit */int) (short)-32726);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32741))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32758))) : ((+(2441026239U)))));
                arr_6 [0ULL] [0ULL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32767)) ? ((+(1792110509870412352ULL))) : (((/* implicit */unsigned long long int) (-(1881900968))))));
                var_19 -= (short)32767;
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (_Bool)1))));
            }
        } 
    } 
}
