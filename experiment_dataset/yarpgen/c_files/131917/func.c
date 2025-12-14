/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131917
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
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max(((unsigned short)14364), (((/* implicit */unsigned short) var_14))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_17)))))), (var_5)));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_19 += ((/* implicit */signed char) ((min((arr_0 [i_0 + 1]), (((/* implicit */unsigned long long int) (!((_Bool)0)))))) > (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))), (arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned int) max((arr_1 [i_0 - 2]), (((/* implicit */signed char) ((((var_9) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1])))) > (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
        var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_1 [i_0]))))))), (max((((/* implicit */unsigned long long int) max(((signed char)21), (((/* implicit */signed char) (_Bool)1))))), (arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                arr_8 [i_0 - 1] [i_2] [i_2] |= (-((((_Bool)1) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1])))));
                var_21 = max((arr_3 [i_2]), (((/* implicit */unsigned long long int) max((arr_4 [i_0 + 1] [i_1] [i_0 + 1]), (arr_4 [i_0 - 2] [i_1] [i_0 - 2])))));
            }
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                arr_12 [i_3] [(signed char)0] [i_0] [i_0] = ((/* implicit */signed char) arr_4 [i_3] [i_3] [i_3]);
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (unsigned char)181))));
            }
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [(_Bool)1] [(short)4] [i_4])) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-54)), (var_10)))) : (((((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_4] [i_0])) * (((/* implicit */int) arr_5 [i_0] [i_0 - 1]))))));
                var_24 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_11 [i_0] [i_0 - 1])) * (((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 1])))), (((/* implicit */int) arr_13 [i_0 + 1] [i_1]))));
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_10 [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 2])))))))));
                var_26 = ((/* implicit */short) arr_14 [i_0 - 2] [i_1]);
            }
            var_27 = ((/* implicit */unsigned long long int) arr_1 [i_0 - 1]);
        }
    }
    var_28 ^= ((/* implicit */unsigned char) (_Bool)1);
}
