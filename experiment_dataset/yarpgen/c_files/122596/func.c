/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122596
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
    for (int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_11 ^= ((/* implicit */long long int) (unsigned short)1225);
                    var_12 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_2 + 1])) | (((/* implicit */int) arr_4 [i_2 + 1]))))) > (1048575U)));
                    var_13 ^= ((/* implicit */int) var_3);
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */unsigned int) var_5);
    var_15 = ((/* implicit */int) 1048575U);
}
