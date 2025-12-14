/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106090
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((arr_1 [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
        arr_3 [18] &= ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((unsigned char) ((var_7) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))))))));
        /* LoopSeq 1 */
        for (int i_2 = 3; i_2 < 13; i_2 += 2) 
        {
            var_14 ^= ((/* implicit */_Bool) ((short) arr_1 [i_1 - 1] [i_1 - 1]));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_5 [i_1] [8]))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    arr_13 [i_2] [i_3] [i_2 + 2] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))) || (var_4)));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_4 [i_2 - 3])))))));
                    var_17 = ((/* implicit */unsigned char) (short)-30805);
                }
                for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) var_5))))))));
                    arr_16 [i_5] [i_3] [i_3] [i_1] |= arr_7 [i_1];
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */int) arr_12 [i_1 + 1] [i_2 + 3] [i_2 + 1] [i_5])) > (((/* implicit */int) arr_12 [i_1 + 1] [i_2 - 3] [i_2 - 1] [6ULL])))))));
                    var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) 1810080544)) ? (((((/* implicit */int) var_0)) % (((/* implicit */int) var_8)))) : (((var_5) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))));
                }
                var_21 = ((/* implicit */int) max((var_21), (((((((/* implicit */int) var_0)) & (var_11))) + (((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned char)35))))))));
                arr_17 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >= (var_10)));
            }
        }
        arr_18 [i_1] [i_1] |= ((/* implicit */short) (_Bool)1);
        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 2] [i_1 + 1] [i_1 - 2])) % (((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 2]))));
    }
    /* LoopSeq 1 */
    for (short i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        arr_21 [i_6] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) arr_7 [i_6])) != (((/* implicit */int) arr_0 [i_6])))));
        var_23 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) (unsigned char)48)) >= (2147483647))));
        var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) && (arr_15 [i_6] [i_6]))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((short) var_8)))))) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (max((((/* implicit */short) (_Bool)1)), (arr_11 [i_6] [i_6] [i_6] [i_6]))))))))));
    }
}
