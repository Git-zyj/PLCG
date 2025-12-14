/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182665
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1])), (min((arr_0 [i_1 - 1]), (arr_0 [i_0])))));
                arr_6 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_1 - 1]);
                arr_7 [i_0] [4LL] = ((/* implicit */int) max((min((arr_1 [i_1 - 1] [i_0]), (arr_1 [i_1 - 1] [i_0]))), (((/* implicit */unsigned int) min((arr_3 [i_0] [i_1] [i_1 - 1]), (arr_3 [i_0] [i_1] [i_1 - 1]))))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_8)), (arr_1 [i_0] [i_0])));
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned char) var_5);
    var_16 &= ((/* implicit */signed char) var_13);
}
