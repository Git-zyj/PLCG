/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185552
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
    var_20 ^= max((var_1), (((/* implicit */int) var_17)));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */int) var_18)) << (((((long long int) max((arr_1 [i_0]), (((/* implicit */unsigned short) var_6))))) - (65432LL))));
        /* LoopSeq 1 */
        for (long long int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1 - 3] [i_1]);
            var_21 = (+(arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 1]));
        }
    }
    for (short i_2 = 2; i_2 < 10; i_2 += 3) 
    {
        arr_12 [i_2] [i_2 - 2] = ((/* implicit */int) var_2);
        var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((int) arr_8 [i_2 + 2] [i_2 - 1])) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_6))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 4) 
    {
        arr_17 [i_3] = ((/* implicit */_Bool) var_13);
        var_23 = ((/* implicit */int) ((unsigned long long int) arr_15 [i_3 - 1] [17]));
        arr_18 [i_3 - 1] = ((/* implicit */unsigned int) ((signed char) var_16));
    }
}
