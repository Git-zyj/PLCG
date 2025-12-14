/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140564
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) arr_0 [i_0]);
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_4 [i_1] [i_1]) | (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                {
                    var_13 = ((/* implicit */long long int) arr_12 [i_2] [i_3] [i_4] [i_4]);
                    arr_14 [i_2] [i_3] [i_4] = (-((-(((/* implicit */int) ((unsigned char) -2764511718703319665LL))))));
                }
            } 
        } 
    } 
}
