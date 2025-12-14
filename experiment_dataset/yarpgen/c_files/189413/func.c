/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189413
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
    var_18 = ((((/* implicit */int) var_13)) - ((~(((/* implicit */int) var_13)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_0 - 1] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) min((-1583411580), (arr_1 [i_0 - 1] [i_2])))), (((unsigned int) var_16))));
                        arr_11 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((arr_2 [i_0 + 1]) >> (((arr_2 [i_0]) - (844288499U)))))) ? (min((var_5), (((/* implicit */long long int) arr_5 [i_2] [i_2 + 1] [i_1] [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [(short)9] [i_1] [i_2])))))))), (((var_14) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                        var_19 = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */int) min((((/* implicit */long long int) ((((((/* implicit */_Bool) -1583411607)) && ((_Bool)1))) && (((/* implicit */_Bool) var_14))))), (((arr_4 [i_0 + 2]) & (arr_4 [i_1])))));
                        var_21 = ((/* implicit */unsigned char) arr_4 [8]);
                    }
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned int) 2247634837477492859LL);
                        arr_17 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_16 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]) ? (3048273295U) : (arr_12 [i_2] [i_0 + 1] [i_0 - 1] [i_2]))))));
                    }
                    arr_18 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) (signed char)-32);
                    arr_19 [i_0] [i_0 + 2] [(unsigned char)8] [(unsigned char)8] |= max((((arr_9 [i_0]) * ((-(203198297U))))), (((/* implicit */unsigned int) ((var_6) == (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0 + 2] [i_0 + 2] [i_0 - 1] [8LL])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        for (short i_7 = 4; i_7 < 7; i_7 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((max((805306368U), (((/* implicit */unsigned int) arr_14 [i_0] [i_2] [i_2 - 1] [i_2])))), (min((var_10), (var_6))))))));
                                arr_26 [i_2] [i_2 - 1] [i_2] [3U] [i_2] = ((/* implicit */short) (+(((arr_21 [i_7 - 2] [i_1] [i_1] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                    var_24 = var_7;
                }
            } 
        } 
    } 
}
