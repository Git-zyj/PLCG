/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117184
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)30494)) || (((/* implicit */_Bool) (signed char)41))))) % (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned short) arr_4 [i_1 + 1] [i_1 - 1]);
            arr_6 [i_0] [i_0] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) (_Bool)1))));
            arr_7 [(signed char)8] = ((/* implicit */_Bool) ((((/* implicit */int) (short)30579)) & (((/* implicit */int) arr_0 [i_0] [i_1 + 1]))));
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_5 [i_0] [i_0] [i_1]);
        }
        var_17 ^= ((/* implicit */signed char) arr_4 [i_0] [(unsigned short)15]);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_2 - 1])) + (((/* implicit */int) arr_9 [i_2 + 1]))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_2 - 4])) == (((/* implicit */int) arr_10 [i_2 - 4]))));
        var_20 ^= ((/* implicit */signed char) arr_9 [i_2 + 1]);
    }
    var_21 = ((/* implicit */unsigned long long int) var_5);
}
