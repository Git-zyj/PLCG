/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172526
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
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        var_20 -= max((min((arr_1 [i_0 + 1]), (arr_1 [18U]))), (max((arr_1 [i_0 - 3]), (((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_0 [i_0 - 1]))))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_0 [(_Bool)1])))) >> (((((/* implicit */int) arr_1 [i_0 + 1])) - (104))))) >> (((((/* implicit */int) arr_0 [i_0 - 2])) * (((/* implicit */int) arr_0 [i_0 - 4]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1])))) > (((/* implicit */int) arr_0 [i_1]))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    arr_11 [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_3]);
                    arr_12 [i_3] &= ((/* implicit */int) min((((arr_3 [i_3]) ? (arr_5 [i_1] [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_3])) || (((/* implicit */_Bool) arr_4 [i_1] [i_3])))))));
                    var_22 = ((/* implicit */short) ((min((arr_5 [i_2] [i_2] [i_1]), (((/* implicit */unsigned long long int) arr_7 [i_1])))) % (((/* implicit */unsigned long long int) ((arr_7 [14ULL]) + (((/* implicit */int) arr_10 [i_2] [i_1])))))));
                }
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_23 -= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((arr_7 [0]) / (((/* implicit */int) arr_10 [i_4] [(unsigned short)13]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4]))) : (arr_5 [i_4] [i_4] [(unsigned short)14]))))))) / (((arr_7 [i_4]) | (((/* implicit */int) arr_0 [i_4]))))));
        var_24 ^= ((/* implicit */unsigned short) ((((_Bool) ((arr_14 [(unsigned char)8] [2U]) < (((/* implicit */unsigned long long int) arr_8 [(unsigned char)14]))))) ? (((((/* implicit */_Bool) max((arr_13 [i_4] [2]), (((/* implicit */unsigned int) arr_10 [i_4] [i_4]))))) ? (arr_8 [(short)14]) : (((((/* implicit */_Bool) arr_10 [i_4] [i_4])) ? (arr_7 [i_4]) : (((/* implicit */int) arr_9 [i_4] [i_4] [0] [i_4])))))) : (max((((((/* implicit */_Bool) arr_14 [6U] [0ULL])) ? (arr_8 [10]) : (((/* implicit */int) arr_3 [i_4])))), (((arr_8 [(_Bool)1]) + (((/* implicit */int) arr_9 [i_4] [4] [(_Bool)1] [4]))))))));
    }
    var_25 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_14)) : (var_4))))))), ((-(((/* implicit */int) var_12))))));
}
