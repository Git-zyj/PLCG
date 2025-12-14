/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13631
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */signed char) ((arr_1 [i_0] [i_0]) != (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) arr_3 [i_1] [i_2])) > (arr_5 [i_2] [i_1] [i_2])));
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((arr_0 [i_0] [i_0]) >> (((arr_1 [i_0] [i_1]) + (4101438775098030932LL))));
                    arr_8 [i_2] = ((/* implicit */long long int) arr_0 [i_2] [i_1]);
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_3 [i_0] [i_0])) | (arr_5 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 23; i_3 += 3) 
    {
        arr_13 [i_3] = ((/* implicit */long long int) ((signed char) arr_11 [i_3]));
        var_21 = arr_12 [i_3 + 1];
    }
    var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) var_3))));
}
