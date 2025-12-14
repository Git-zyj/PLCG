/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120335
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
    var_10 = ((/* implicit */short) ((((/* implicit */int) (short)-7323)) != (((/* implicit */int) (unsigned short)30844))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            var_11 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)34692))));
            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) arr_3 [i_1]))));
        }
        var_13 = ((/* implicit */unsigned char) var_9);
    }
    for (int i_2 = 3; i_2 < 13; i_2 += 2) 
    {
        var_14 ^= ((/* implicit */int) arr_2 [i_2 + 1] [(unsigned char)5] [(unsigned char)9]);
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_7 [i_2 - 1]) + (arr_7 [i_2 - 1])))) ? (arr_7 [i_2 - 3]) : (((arr_7 [i_2 - 3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23860)))))));
        var_16 = ((/* implicit */unsigned long long int) var_0);
        var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) (short)255)) || (((/* implicit */_Bool) (unsigned short)30844))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) -1714701615)) | (arr_8 [2U] [2U]))), (((arr_7 [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63)))))));
        arr_12 [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
        arr_13 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((-715721577) | (((/* implicit */int) (signed char)127))))) < (max((var_1), (((/* implicit */long long int) var_6))))));
        var_18 = ((/* implicit */long long int) max((((/* implicit */int) arr_10 [i_3])), ((+(((/* implicit */int) (signed char)31))))));
    }
}
