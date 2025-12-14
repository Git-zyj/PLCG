/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1138
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
    var_13 = ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) min((((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) (unsigned short)127)))))), (arr_4 [i_0] [i_0] [i_0])));
                var_15 ^= ((/* implicit */unsigned long long int) (-(var_6)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (short i_4 = 2; i_4 < 24; i_4 += 2) 
            {
                {
                    arr_13 [i_4] [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(1426708916)))), (arr_7 [i_2] [i_3])));
                    var_16 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_6 [i_4 - 1] [i_4])))) & (((((/* implicit */_Bool) arr_12 [i_4 - 2])) ? (arr_12 [i_4 + 1]) : (0ULL)))));
                    var_17 = (-((-(((/* implicit */int) arr_8 [i_4 - 2])))));
                }
            } 
        } 
    } 
}
