/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110588
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_14 -= ((/* implicit */long long int) max((((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) arr_1 [i_0 + 1])))))), (var_13)));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (min((var_10), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 1336594550261165045ULL)) && (((/* implicit */_Bool) arr_1 [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (((long long int) var_9))));
        var_15 = ((/* implicit */signed char) (((-(((/* implicit */int) ((((/* implicit */int) (short)12308)) < (((/* implicit */int) var_11))))))) | (((/* implicit */int) (short)-12317))));
    }
    for (unsigned char i_1 = 2; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_16 = min(((-(((/* implicit */int) var_12)))), (((/* implicit */int) max((arr_0 [i_1 - 2]), (arr_0 [i_1 + 1])))));
        var_17 = ((/* implicit */unsigned short) arr_6 [i_1 - 1]);
    }
    for (unsigned char i_2 = 2; i_2 < 22; i_2 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) arr_8 [(signed char)10] [i_2]);
        arr_11 [i_2 - 1] = ((/* implicit */long long int) arr_8 [i_2 - 2] [i_2 + 1]);
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 4) 
                {
                    {
                        var_19 |= ((/* implicit */long long int) min((arr_19 [i_2] [i_3] [(short)20] [i_4] [i_2]), (arr_13 [i_2 + 1] [i_3])));
                        arr_20 [i_5] [i_4] [i_3] [i_2] = max((max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) ((long long int) arr_13 [i_2] [i_3]))))), (min((max((1336594550261165045ULL), (((/* implicit */unsigned long long int) var_11)))), (min((((/* implicit */unsigned long long int) var_11)), (var_10))))));
                        arr_21 [i_5] [i_4] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((((/* implicit */short) arr_1 [i_4])), (var_0)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)134)), (var_13))))))) ? (((((((/* implicit */int) arr_16 [i_4] [i_3])) + (2147483647))) >> (((((/* implicit */int) (unsigned char)255)) - (231))))) : (((/* implicit */int) min((arr_15 [i_5] [7LL] [i_3] [(signed char)17]), (arr_15 [(unsigned short)19] [(unsigned char)18] [i_4] [(unsigned char)13]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_6 = 2; i_6 < 22; i_6 += 3) /* same iter space */
    {
        arr_26 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [(_Bool)1] [(_Bool)1] [(unsigned char)4]))))) ? (((((/* implicit */int) arr_23 [i_6] [i_6])) / (((/* implicit */int) arr_17 [i_6] [i_6 - 1] [i_6 - 2])))) : (((/* implicit */int) min((arr_23 [i_6] [i_6]), (arr_23 [i_6] [i_6]))))));
        var_20 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_14 [15U] [(short)1] [(signed char)15])) ? (arr_2 [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_6 - 1]))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_9 [i_6])), (var_3)))))) > (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) min((((/* implicit */short) arr_18 [i_6] [i_6])), (var_11)))))))));
        var_21 *= ((/* implicit */unsigned char) ((min((((arr_18 [i_6] [4]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)250)))), (((/* implicit */int) arr_13 [i_6 - 2] [i_6 - 2])))) & ((~(((/* implicit */int) max((arr_19 [i_6] [i_6] [i_6 + 1] [i_6 + 1] [i_6]), (((/* implicit */unsigned char) (signed char)26)))))))));
    }
    var_22 = ((/* implicit */unsigned char) var_8);
}
