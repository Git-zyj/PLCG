/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115012
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        var_17 = max((((((/* implicit */int) arr_8 [i_1] [i_3 - 1] [i_3 - 1] [4])) & (((/* implicit */int) arr_8 [i_2] [i_3 - 1] [i_3] [i_3])))), ((~((~(213490638))))));
                        arr_9 [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (_Bool)1)), (min((arr_4 [i_2] [i_1] [15] [15]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_3 - 1])))))))));
                        arr_10 [i_2] [i_1] [i_2] [i_2] [i_3] [i_3 + 2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((arr_5 [i_3 - 2] [i_3 + 2] [i_3 + 2]), (((/* implicit */int) arr_3 [i_3 - 2] [i_1]))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])) | (((/* implicit */int) arr_8 [i_0] [9U] [i_2] [i_3 + 1]))))) ? ((+(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3 + 3])))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        var_18 = (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_1] [i_4])) : (((/* implicit */int) arr_2 [i_1])))));
                        arr_14 [i_0] [(unsigned short)2] [6] [i_2] [(short)2] = ((/* implicit */signed char) max((((/* implicit */int) arr_0 [i_0] [i_1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (213490619) : (arr_5 [i_0] [i_1] [i_4])))) ? (((/* implicit */int) ((_Bool) arr_4 [i_1] [i_1] [10LL] [12]))) : (213490626)))));
                    }
                    arr_15 [i_2] [i_1] = ((/* implicit */unsigned int) max((min((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2])), (((int) 0)))), (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) var_16)) : ((-(((/* implicit */int) arr_1 [5]))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (-(-1)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_10)) : (var_3))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned short)60891)))), (((/* implicit */int) ((var_4) && (((/* implicit */_Bool) var_6)))))))))))));
    var_20 = ((/* implicit */unsigned long long int) (short)15471);
}
