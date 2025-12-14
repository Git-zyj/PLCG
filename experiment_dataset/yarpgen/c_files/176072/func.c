/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176072
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
    var_10 = ((/* implicit */_Bool) ((max((min((var_7), (var_7))), (18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned short)8462)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_11 = max((((/* implicit */unsigned int) arr_2 [i_0])), (((unsigned int) arr_1 [i_1 + 2])));
                        /* LoopSeq 2 */
                        for (short i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            var_12 = ((/* implicit */unsigned char) (-(((((/* implicit */int) ((unsigned char) var_6))) * (((/* implicit */int) ((short) var_0)))))));
                            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (_Bool)1))));
                        }
                        for (unsigned short i_5 = 1; i_5 < 9; i_5 += 4) 
                        {
                            arr_16 [i_0] [i_1 + 3] [i_0] [i_3] [i_0] [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_11 [i_1 + 1] [i_1 + 1] [i_5 + 1] [i_5] [i_0]), (arr_11 [i_1 + 3] [i_3] [i_5 - 1] [i_5] [i_0]))))));
                            var_14 |= ((/* implicit */unsigned short) max(((_Bool)1), ((_Bool)0)));
                            var_15 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1]))) <= (((((/* implicit */unsigned long long int) -131917958)) / (7381388801725615933ULL))))) ? (((((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_5] [i_3] [i_5 + 1])) ? ((((_Bool)0) ? (((/* implicit */long long int) -131917947)) : (arr_3 [i_0]))) : (((((/* implicit */_Bool) var_6)) ? (arr_6 [i_2] [i_3] [i_2]) : (((/* implicit */long long int) -1)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_8 [i_5] [i_2] [i_2] [i_1 + 3])))))))));
                            arr_17 [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */short) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_1 + 2] [i_1 + 2])) ? (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
                        }
                    }
                } 
            } 
        } 
        arr_18 [i_0] [i_0] = ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) (!(((/* implicit */_Bool) 1177904393U))))));
        arr_19 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) << (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_16 = ((/* implicit */_Bool) ((var_2) << (((131917958) - (131917915)))));
}
