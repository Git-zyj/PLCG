/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158643
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
    var_13 *= ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) max((var_7), ((short)15426)))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) arr_1 [i_0 + 2]);
                /* LoopSeq 3 */
                for (long long int i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    arr_9 [i_2] = ((/* implicit */long long int) max(((short)-511), ((short)179)));
                    arr_10 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) max((var_3), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) && (arr_2 [i_2 - 2]))))));
                }
                for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    var_15 = ((/* implicit */short) max((((/* implicit */unsigned int) min((((/* implicit */short) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_1] [i_3] [i_1])))))), (var_1)))), (min((((/* implicit */unsigned int) min((var_7), (var_12)))), (arr_0 [i_0 + 1] [i_1])))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            {
                                arr_20 [i_0] [i_1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)15426)) ? (var_9) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) + (((((/* implicit */int) var_3)) - (((/* implicit */int) arr_7 [i_5] [i_3] [i_3] [i_5])))))))));
                                var_16 = ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) ((short) (_Bool)1))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (0LL))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))) && (((/* implicit */_Bool) max((var_12), (((short) var_8)))))));
                }
                /* vectorizable */
                for (long long int i_6 = 1; i_6 < 15; i_6 += 3) 
                {
                    arr_24 [i_6] = ((/* implicit */unsigned int) ((arr_23 [i_6]) ? (((/* implicit */int) arr_23 [i_6])) : (((/* implicit */int) arr_23 [i_6]))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0 + 2] [i_6] [i_6 - 1] [i_0 - 2]))) == (arr_15 [i_0 - 2] [i_6 + 1] [i_0 - 2] [i_6])));
                    arr_25 [(short)9] [i_6] [i_6] [i_6] = -6154500465024356508LL;
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_0 - 3] [i_1])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_6 - 1]))) | (arr_6 [i_0 + 2] [i_1] [i_6 - 1]))) : (var_11))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */short) var_10))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))));
}
