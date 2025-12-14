/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125621
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) arr_0 [i_0 - 1] [i_1]);
                var_19 = ((/* implicit */unsigned char) 11315589626465088217ULL);
                var_20 = ((/* implicit */unsigned char) arr_3 [i_0 - 1] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) 7131154447244463398ULL);
        var_21 = ((/* implicit */long long int) arr_6 [i_2] [i_2]);
    }
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) 11315589626465088217ULL);
        arr_12 [i_3] [i_3] = ((/* implicit */signed char) -1474544036);
        var_23 = ((/* implicit */unsigned int) 11315589626465088217ULL);
    }
    var_24 = ((/* implicit */long long int) var_3);
}
