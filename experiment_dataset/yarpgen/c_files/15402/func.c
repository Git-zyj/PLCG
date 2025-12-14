/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15402
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
    var_12 -= ((/* implicit */signed char) var_2);
    var_13 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((min((arr_8 [(unsigned char)8] [i_1] [i_2 + 1]), (arr_8 [i_0] [i_1] [i_2 - 1]))) == (((arr_8 [i_1] [i_1] [i_2 - 2]) + (arr_8 [(signed char)3] [(signed char)3] [i_2 - 2])))));
                    arr_11 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((unsigned char) var_0)), (arr_9 [i_0] [i_0])))), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_5 [i_1] [3LL])), (var_11)))), (arr_8 [i_2] [i_2 - 3] [i_2])))));
                }
            } 
        } 
    } 
}
