/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116880
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) var_12)))));
        arr_2 [15U] = ((/* implicit */unsigned char) (~(((arr_0 [(unsigned short)14]) / (arr_0 [i_0])))));
        var_17 = ((((/* implicit */unsigned int) var_7)) ^ (arr_0 [i_0]));
    }
    for (unsigned short i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        var_18 += ((/* implicit */signed char) max((arr_0 [(unsigned short)14]), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_1] [(unsigned char)7])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))))))));
        var_19 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [6U])) : (((/* implicit */int) var_8)))) / (((((/* implicit */int) var_8)) + (((/* implicit */int) var_11)))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1] [i_1])) - (var_6)))) ? (max((var_2), (var_7))) : (((((/* implicit */int) arr_3 [i_1])) / (((/* implicit */int) arr_3 [0LL]))))))));
        arr_5 [i_1] = ((/* implicit */unsigned int) ((unsigned short) (-(((var_3) / (((/* implicit */int) arr_1 [(short)4] [i_1])))))));
    }
    for (short i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_3))) & (((((/* implicit */int) arr_4 [i_2 - 1])) - (((/* implicit */int) arr_4 [i_2 - 1]))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 3; i_3 < 6; i_3 += 4) 
        {
            for (unsigned int i_4 = 2; i_4 < 8; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_13 [2] [i_6] [i_6])) ? (min((((/* implicit */unsigned int) arr_10 [i_2] [i_3] [i_5] [4LL])), (arr_0 [6U]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_4] [i_3])) ? (((/* implicit */int) arr_1 [i_6] [i_3])) : (((/* implicit */int) arr_14 [i_2] [i_3] [i_4] [(unsigned short)9] [(unsigned short)9])))))))));
                                var_22 -= ((((/* implicit */_Bool) ((((_Bool) var_12)) ? (((/* implicit */int) arr_16 [i_3 + 2] [i_3 + 4] [i_3 - 3] [i_3 + 1] [i_3 - 1] [i_3 - 2])) : (((/* implicit */int) max((arr_4 [i_2]), (var_11))))))) ? (((((((/* implicit */_Bool) arr_1 [i_6] [i_4])) && (((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_5] [i_6])))) ? (min((arr_12 [i_2] [i_2]), (arr_6 [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [i_2] [i_2])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_10 [i_2] [i_2] [i_5] [i_2]))))) ? (((arr_12 [i_2] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [5U]))))) : (((arr_13 [i_2] [5LL] [9U]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4]))))))));
                            }
                        } 
                    } 
                    arr_19 [i_3] = ((/* implicit */signed char) (-(((((/* implicit */int) ((short) arr_0 [i_3]))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_14 [i_2] [i_3] [i_4] [(_Bool)1] [i_4])) : (arr_18 [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] [(unsigned short)4])))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned int) min((var_23), (((((/* implicit */unsigned int) var_2)) * (((((unsigned int) var_2)) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_11))))))))));
    var_24 = ((/* implicit */unsigned short) (~(((var_3) / (((/* implicit */int) var_11))))));
}
