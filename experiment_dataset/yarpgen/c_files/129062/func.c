/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129062
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)4)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1] [i_1])) + (((/* implicit */int) var_8))))) + (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_12 = ((/* implicit */unsigned short) arr_6 [i_1] [i_1]);
            arr_8 [i_2] = ((/* implicit */short) ((arr_6 [i_1] [i_2]) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_2]))));
        }
    }
    var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (3376555029U)));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) || (((/* implicit */_Bool) var_7))));
    /* LoopSeq 1 */
    for (signed char i_3 = 2; i_3 < 17; i_3 += 3) 
    {
        arr_12 [i_3] [i_3 - 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_3 + 2] [i_3 + 2]))));
        arr_13 [13] [i_3] = ((/* implicit */long long int) max((((/* implicit */int) arr_9 [i_3 + 1])), ((+(((/* implicit */int) arr_9 [i_3 - 1]))))));
    }
}
