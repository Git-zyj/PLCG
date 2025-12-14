/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124160
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
    var_10 += ((/* implicit */short) ((int) ((((/* implicit */int) var_3)) >= ((~(((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_11 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_3 [i_0] [i_1] [i_0])))))), (9745186016294380921ULL)));
                var_12 = (~(((unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)8)), ((unsigned short)32720)))));
            }
        } 
    } 
}
