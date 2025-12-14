/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181858
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
    var_17 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-20648))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 - 3])) << (((/* implicit */int) min((max((arr_4 [(signed char)2] [12ULL]), (((/* implicit */unsigned short) var_12)))), (((/* implicit */unsigned short) arr_1 [i_0 - 3])))))));
            }
        } 
    } 
}
