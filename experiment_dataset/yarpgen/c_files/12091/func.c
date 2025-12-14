/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12091
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) var_3);
                    arr_9 [i_1] [i_2 + 1] = ((/* implicit */unsigned char) arr_2 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) 2510267725471793001LL)), (9ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))), (var_6))))));
}
