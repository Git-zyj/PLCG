/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151139
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) arr_3 [(unsigned short)11]);
                var_14 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
            }
        } 
    } 
    var_15 = min((((/* implicit */int) (short)-32752)), ((+(((/* implicit */int) (unsigned char)235)))));
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                {
                    arr_15 [i_2] [i_2] [i_4] |= ((/* implicit */unsigned short) min((1713302521U), (2581664766U)));
                    arr_16 [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) arr_12 [i_3] [i_4]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_8);
}
