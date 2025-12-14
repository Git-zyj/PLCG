/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168837
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */short) (~(min((((/* implicit */unsigned int) arr_8 [i_3] [i_3 + 1] [i_3 - 1] [17U])), (var_17)))));
                        arr_10 [i_0] [i_1] [(unsigned short)13] [i_1 + 1] [i_2] = ((/* implicit */unsigned int) arr_1 [i_2] [i_2]);
                    }
                    arr_11 [i_0] [i_1] [i_2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 3U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [4U] [3] [i_2] [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) ? (((/* implicit */int) (short)-21345)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) : ((+(19U))))))));
                    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((short) arr_6 [i_1] [i_1] [i_1 + 1]))), (max((((unsigned long long int) arr_2 [i_0] [i_0])), (((/* implicit */unsigned long long int) max((arr_9 [i_2] [2LL] [i_1] [i_0]), (arr_9 [i_1] [1U] [i_2] [i_1]))))))));
                    var_22 |= ((((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_7 [i_0] [i_1 - 1] [i_1 + 1] [i_1] [i_2] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))), (((long long int) 36265387U))))) ? (((((/* implicit */_Bool) 4294967292U)) ? (((unsigned int) arr_6 [i_0] [i_1 + 1] [i_2])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))))) : (arr_4 [i_1 + 1]));
                    var_23 = ((/* implicit */short) min((min((arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 1]))), (-9223372036854775794LL)));
                }
            } 
        } 
    } 
    var_24 *= ((/* implicit */short) var_2);
    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_17)))))));
    var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (min((((/* implicit */unsigned long long int) ((short) 226960171U))), (((((/* implicit */_Bool) 3824301922U)) ? (var_4) : (((/* implicit */unsigned long long int) 4294967292U))))))));
    var_27 &= ((/* implicit */unsigned int) var_16);
}
