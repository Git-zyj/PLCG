/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161294
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (unsigned short)30415);
                    var_11 = ((/* implicit */unsigned long long int) var_3);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                {
                    arr_19 [7LL] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)2))));
                    var_12 *= ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_14 [i_3 - 2] [i_3 + 1] [i_3 + 1]), (arr_14 [i_3 - 2] [i_3 + 1] [i_3 + 1]))))));
                }
            } 
        } 
    } 
}
