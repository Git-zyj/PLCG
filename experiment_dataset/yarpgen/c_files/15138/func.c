/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15138
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
    var_16 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4516))) : (4294967295U)));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_7 [3ULL] [i_1] [i_2] [19LL]);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [(unsigned char)3] [(unsigned short)15] [(unsigned short)8] [(unsigned short)15] [i_0] [(unsigned short)15])) ? (4294967295U) : (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0]))));
        var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)98))));
    }
    for (short i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_8 [(short)1] [(short)1] [i_4] [i_4] [20ULL] [i_4]), (((/* implicit */long long int) max((arr_9 [i_4] [i_4] [i_4] [i_4]), (((/* implicit */int) var_14)))))))) ? (max((((/* implicit */long long int) ((unsigned char) 65535LL))), (min((var_11), (arr_2 [i_4]))))) : (var_4)));
        arr_16 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_14), (max((arr_7 [i_4] [i_4] [i_4] [i_4]), (var_14)))))) ? ((+(arr_13 [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
    {
        arr_21 [i_5] [i_5] = arr_4 [i_5] [i_5];
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) arr_14 [i_5] [i_5])) : (-32807973)));
    }
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_0), (min((var_1), (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) var_10)) ? (max((var_5), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)-2083), (((/* implicit */short) (_Bool)1))))))));
}
