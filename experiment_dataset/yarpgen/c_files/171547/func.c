/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171547
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min((((/* implicit */unsigned long long int) var_12)), (var_7))))));
        var_14 = ((/* implicit */short) (-((-(var_5)))));
    }
    for (short i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        var_15 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((var_3) - (((/* implicit */unsigned long long int) var_11)))) >> (((max((18446744073709551615ULL), (var_3))) - (18446744073709551554ULL))))))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_16 = ((/* implicit */unsigned short) var_1);
            var_17 -= var_7;
        }
        /* vectorizable */
        for (unsigned short i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            arr_12 [15U] &= ((/* implicit */unsigned short) (~(arr_3 [i_3 + 4] [i_3 + 2])));
            var_18 -= ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))))));
        }
        for (short i_4 = 2; i_4 < 22; i_4 += 2) 
        {
            arr_15 [i_1] [i_1] [(short)8] = ((/* implicit */short) 0ULL);
            var_19 = ((/* implicit */short) ((var_5) + (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (short)-28807))))) ? (min((13796723510879640377ULL), (((/* implicit */unsigned long long int) arr_1 [i_1] [i_4])))) : (((/* implicit */unsigned long long int) ((arr_10 [i_1] [i_1] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1]))))))))));
        }
    }
    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), (((((/* implicit */int) ((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6501)))))) / (((/* implicit */int) var_2))))));
}
