/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131101
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
    var_17 = ((/* implicit */long long int) (~(var_14)));
    var_18 = ((/* implicit */short) max((min((max((var_15), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) var_6))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) var_10))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)24)) || (((/* implicit */_Bool) arr_0 [i_0])))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0])))))))))));
        var_19 = ((/* implicit */long long int) var_10);
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)231)) | (((/* implicit */int) arr_0 [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [(short)0])), (var_15))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [(short)14])) ? (arr_4 [i_1] [i_1]) : (((arr_4 [i_1] [i_1]) / (((/* implicit */int) arr_1 [2U])))))) / (((/* implicit */int) arr_3 [i_1] [i_1])))))));
    }
    for (int i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) arr_4 [i_2] [i_2])), (var_14))), (((/* implicit */unsigned long long int) var_10))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)223))) >= (max((((((/* implicit */_Bool) arr_13 [2LL] [i_3] [i_4] [8])) ? (arr_13 [i_3] [0U] [i_3] [0U]) : (2343068439867069263LL))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_11))))))))))));
                    arr_14 [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((2343068439867069263LL), (((/* implicit */long long int) 706187406U))))) ? (max((((/* implicit */int) arr_0 [i_2])), (var_1))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) <= (arr_13 [(unsigned char)7] [7LL] [(unsigned char)7] [i_2])))))), (min((((/* implicit */int) arr_0 [i_3])), ((-(((/* implicit */int) arr_0 [i_2]))))))));
                    var_23 = ((/* implicit */unsigned short) arr_3 [i_2 - 1] [i_2 - 1]);
                    var_24 = ((/* implicit */long long int) ((((/* implicit */int) max((arr_10 [i_2 + 2] [i_3]), ((short)8064)))) == (((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1]))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned short) (+((-9223372036854775807LL - 1LL))));
    }
}
