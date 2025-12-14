/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15074
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
    var_11 = ((/* implicit */unsigned char) ((18446744073709551607ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(var_6))))))));
    var_12 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) (+(max((1343704748), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (21U))))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) ((short) arr_2 [i_0 + 1] [i_1] [i_0 + 1]));
            }
        } 
    } 
}
