/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117853
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
    for (long long int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    var_11 |= ((/* implicit */int) ((-9218159) == (((/* implicit */int) (signed char)-113))));
                    arr_9 [i_0 - 3] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((arr_5 [i_0]) == (arr_5 [i_0]))))));
                    var_12 ^= ((/* implicit */int) ((unsigned char) max(((signed char)15), ((signed char)-121))));
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0] [i_2])) | ((+(((/* implicit */int) (unsigned char)3))))));
                }
            } 
        } 
    } 
    var_14 = ((int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_7)));
}
