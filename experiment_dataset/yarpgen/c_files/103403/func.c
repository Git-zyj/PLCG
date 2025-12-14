/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103403
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) min((var_5), (((arr_3 [i_0] [i_0] [(signed char)13]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((((/* implicit */int) max((arr_5 [i_2 + 1] [i_1] [i_2] [i_1 - 1]), (arr_5 [i_2 + 1] [i_1 + 2] [i_2] [i_1 + 2])))), (-285605906))))));
                    var_15 &= ((/* implicit */short) 144115188075855871LL);
                    arr_10 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */long long int) var_13);
}
