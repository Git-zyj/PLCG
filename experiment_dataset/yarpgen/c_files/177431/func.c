/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177431
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
    var_16 = ((/* implicit */_Bool) var_14);
    var_17 &= ((/* implicit */unsigned long long int) 433278767);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    var_18 &= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((arr_2 [i_2 - 2]) & (((/* implicit */unsigned int) var_10))))), (min((arr_4 [i_1 - 1] [i_0 + 2]), (arr_4 [i_1 - 1] [i_0 - 1])))));
                    var_19 ^= ((/* implicit */unsigned short) 467122985);
                    arr_7 [i_0] [i_1] [(signed char)20] [i_1] = ((/* implicit */int) arr_1 [i_1 - 2] [i_2 + 2]);
                    var_20 += ((/* implicit */long long int) max((((unsigned long long int) arr_6 [i_0 - 1])), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0 + 2])) % (-927987207))))));
                    arr_8 [(unsigned short)16] [i_0 + 1] [(short)8] [(unsigned short)10] &= ((/* implicit */int) ((arr_1 [i_1 - 1] [i_1 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((467122982) < (467122982)))))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */int) ((short) ((arr_4 [i_0 + 1] [i_0 + 1]) / (((/* implicit */long long int) arr_0 [i_0 - 1])))));
        var_21 &= ((/* implicit */unsigned long long int) var_0);
    }
}
