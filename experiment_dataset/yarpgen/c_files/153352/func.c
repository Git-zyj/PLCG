/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153352
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */short) min(((_Bool)1), ((_Bool)1)));
        var_19 += ((_Bool) (unsigned short)46403);
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_1] = arr_1 [i_0];
                        var_20 -= ((/* implicit */unsigned short) arr_6 [i_3] [i_2] [(short)3] [i_0]);
                        var_21 = ((/* implicit */short) ((max(((+(arr_9 [i_0]))), (((/* implicit */unsigned long long int) ((_Bool) var_11))))) & (arr_2 [i_0])));
                        var_22 *= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) <= (arr_9 [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19132))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [(unsigned char)14] [i_2]))) | (min((((/* implicit */unsigned long long int) arr_7 [16U] [i_1] [8U])), (arr_9 [i_1])))))));
                        arr_11 [i_2] [(short)8] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(0ULL)))) && ((!(((/* implicit */_Bool) var_11))))));
                    }
                    var_23 &= ((/* implicit */unsigned int) ((arr_0 [(short)15] [(short)15]) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (max((((/* implicit */int) arr_6 [i_1 - 2] [i_1] [i_1 - 4] [i_1 - 3])), (((((/* implicit */int) arr_3 [i_1])) / (((/* implicit */int) arr_4 [i_1] [i_1 - 2]))))))));
                    arr_12 [i_0] [i_0] = ((/* implicit */short) arr_8 [i_2 - 1] [i_2 - 3] [i_1 + 2]);
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (short)-13031))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19132))) : (7ULL))) : (((/* implicit */unsigned long long int) ((arr_1 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_8 [i_2 + 1] [i_2 - 3] [i_2 - 2])), (var_6)))))));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((arr_0 [i_0] [i_1 + 3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) var_15)))) <= (((/* implicit */int) arr_4 [i_0] [2U])))))) : (var_10)));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_15))));
}
