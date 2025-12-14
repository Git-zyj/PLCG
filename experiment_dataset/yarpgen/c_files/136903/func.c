/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136903
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
    var_13 = ((/* implicit */unsigned short) ((signed char) min((min((((/* implicit */long long int) var_6)), (3586529556506803681LL))), (((/* implicit */long long int) var_8)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) min((((/* implicit */long long int) var_9)), (3586529556506803681LL)));
        var_15 ^= ((/* implicit */long long int) 4294967295U);
    }
    for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            arr_11 [i_1 + 1] = ((/* implicit */short) (-(0LL)));
            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_5 [i_1 + 3]))));
        }
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)255)), (1810968861)))), (4025082750U)))) + (var_5))))));
        arr_12 [i_1] = ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 3]))) - (19LL))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)122))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        var_18 = ((/* implicit */signed char) ((((18446744073709551607ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
        arr_15 [i_3] = ((((-1419850943) + (2147483647))) >> (((((/* implicit */int) var_6)) - (219))));
        var_19 |= ((/* implicit */unsigned int) (signed char)4);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                for (unsigned int i_6 = 1; i_6 < 8; i_6 += 3) 
                {
                    {
                        arr_25 [i_6 - 1] [i_4] [i_4] [i_3] [i_4] [i_3] = ((/* implicit */signed char) ((unsigned int) var_6));
                        arr_26 [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_3] [i_6 + 3] [i_6] [i_6 + 1] [i_6 + 1] [i_3])) ? (((/* implicit */int) arr_22 [i_3] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1] [i_3])) : (((/* implicit */int) arr_24 [i_3] [i_6] [i_6] [i_3] [i_6 - 1] [i_3]))));
                    }
                } 
            } 
        } 
        arr_27 [i_3] = (!(((/* implicit */_Bool) arr_8 [i_3])));
    }
}
