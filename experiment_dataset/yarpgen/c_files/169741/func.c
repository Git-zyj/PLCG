/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169741
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) var_14))))) + (var_5)))) ? ((~(((((/* implicit */_Bool) 1121876130)) ? (3U) : (4294967292U))))) : (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) -421007136)) ? (3892443932803951174ULL) : (3892443932803951162ULL)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48204))))), (arr_0 [i_0])))) ? (((((((/* implicit */_Bool) 9223090561878065152LL)) ? (((/* implicit */unsigned long long int) 23U)) : (18446744073709551598ULL))) | (((/* implicit */unsigned long long int) -1059014775)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_2] [i_2] [i_2 + 1]))));
                    var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2] [i_2 + 1])) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1] [i_2 + 1])) ? (arr_5 [i_1] [i_2] [i_2] [i_2 + 1]) : (arr_5 [i_1] [i_1] [i_1] [i_2 + 1]))) : (((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2] [i_2 + 1])) ? (arr_5 [i_2] [i_2] [i_2] [i_2 + 1]) : (arr_5 [i_2] [i_2] [i_2] [i_2 + 1])))));
                    arr_7 [i_0] [i_1] [i_0] [i_0] = var_8;
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0]))))) ? (max((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])), (min((9223090561878065152LL), (arr_0 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    var_20 = ((/* implicit */int) ((signed char) var_9));
    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) var_12)) / (max((var_7), (((/* implicit */unsigned int) (-(var_5))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 4) 
    {
        var_22 = ((/* implicit */int) arr_0 [i_3]);
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_4 [i_3 - 1]))));
        arr_12 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) -541255339)) ? (4294967272U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 + 1] [i_3 + 1])))));
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((_Bool) arr_5 [i_4] [i_3] [i_3] [i_3])) ? (arr_11 [i_3 + 1] [i_4]) : (var_2))))));
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_3)) : (arr_14 [i_3] [i_3] [i_3 - 1])));
        }
        for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 1073676288U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11022))) : (1295911222807637113LL)))))));
            arr_19 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [i_3] [i_5] [i_3]) ? (arr_10 [i_3] [i_3]) : (((/* implicit */long long int) arr_11 [i_5] [i_3]))))) ? (((/* implicit */int) arr_15 [i_3 - 1])) : (arr_18 [i_3] [i_3 - 1])));
        }
    }
}
