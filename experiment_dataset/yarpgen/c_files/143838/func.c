/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143838
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
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */int) var_11);
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (arr_3 [i_1] [i_2] [i_3])));
                    }
                    for (signed char i_4 = 2; i_4 < 7; i_4 += 2) 
                    {
                        var_22 *= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))));
                        arr_12 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_1] [i_0] [i_4]);
                        arr_13 [i_4] [i_1] [i_2] [i_0 - 1] = ((/* implicit */short) arr_11 [i_0 - 1] [6U] [6U] [i_2] [6U]);
                        arr_14 [i_0 + 1] [8U] [i_2] [(short)0] = ((/* implicit */signed char) arr_5 [3] [i_1]);
                    }
                    for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */signed char) var_14);
                        var_24 = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_2] [i_5] [i_5] [i_0]);
                    }
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) min((arr_8 [i_0] [i_1 - 2] [6U] [i_2 - 1] [i_2]), (var_18)))), (((arr_4 [i_0] [i_1] [i_2]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_4 [i_2] [i_1] [i_0]))))))) ? (((/* implicit */long long int) ((int) min((arr_15 [i_0] [i_0 + 1] [i_1] [i_2] [i_0 + 2]), (((/* implicit */short) arr_8 [i_0] [i_0] [i_2] [i_1] [i_2])))))) : (((long long int) var_19))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) ((signed char) var_19))) ? (((((/* implicit */int) var_11)) | (((/* implicit */int) var_18)))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))))));
}
