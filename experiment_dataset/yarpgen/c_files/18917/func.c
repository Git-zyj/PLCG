/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18917
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
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned long long int) var_0)))))));
    var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16824)) ? (((/* implicit */unsigned long long int) var_0)) : (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */int) var_16))))) : (var_14))), (((/* implicit */unsigned long long int) ((min((var_15), (((/* implicit */long long int) var_17)))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-16824)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (unsigned char)14))))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_2 [9ULL]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_19) / (((/* implicit */long long int) arr_0 [i_0] [i_0]))))) ? (var_13) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))))) : (0ULL)));
        arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) ((1647042806) <= (((/* implicit */int) arr_2 [i_0]))))))));
        arr_6 [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [(unsigned char)11]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_3 [i_0])))) ? (var_18) : (((/* implicit */long long int) arr_0 [i_0] [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                {
                    arr_15 [(unsigned char)12] [(unsigned char)12] [i_2] [0ULL] = (unsigned char)71;
                    arr_16 [6ULL] [i_2] [10LL] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [11LL] [11LL] [i_3]))) - (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29512))) / (var_10)))) ? (var_15) : (min((arr_3 [i_1]), (((/* implicit */long long int) arr_8 [i_3]))))))));
                    arr_17 [i_3] [i_2] = ((/* implicit */signed char) max((arr_8 [(signed char)1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_3] [i_3])))))))))));
                }
            } 
        } 
        arr_18 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)71))) : (((long long int) ((((/* implicit */_Bool) arr_13 [i_1] [(short)3] [(short)3] [(short)3])) ? (arr_3 [i_1]) : (var_19))))));
        arr_19 [i_1] = max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18170118070818174035ULL)) ? (((/* implicit */int) arr_13 [i_1] [i_1] [9U] [i_1])) : (arr_14 [i_1] [(unsigned char)6] [(unsigned char)6])))), (min((18170118070818174052ULL), (((/* implicit */unsigned long long int) (signed char)113)))))), (((/* implicit */unsigned long long int) arr_8 [i_1])));
    }
    for (unsigned char i_4 = 1; i_4 < 14; i_4 += 2) 
    {
        arr_22 [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_18))) ? (((/* implicit */int) arr_21 [i_4])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_4])) : (((/* implicit */int) arr_10 [i_4] [i_4 + 1] [i_4]))))))), (((((/* implicit */_Bool) arr_20 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [(unsigned short)3])), (arr_21 [i_4]))))) : (min((((/* implicit */unsigned long long int) arr_9 [i_4] [i_4])), (var_11)))))));
        arr_23 [(signed char)12] = (!(((/* implicit */_Bool) var_19)));
    }
}
