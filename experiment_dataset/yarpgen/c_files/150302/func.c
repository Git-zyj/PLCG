/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150302
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_20 *= ((/* implicit */short) 912932322);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2 + 1] = ((/* implicit */unsigned long long int) (-((+(arr_7 [i_1] [i_2] [i_2] [(short)3])))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((long long int) arr_2 [i_1] [i_2])))));
                    var_22 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) min((arr_6 [i_0]), (((/* implicit */short) (unsigned char)20))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (13136670064788028302ULL))))) << (((((/* implicit */int) max((((/* implicit */short) arr_5 [i_0] [i_0])), (arr_3 [i_0] [i_1] [i_2])))) + (174)))));
                    arr_10 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((-1112556087) & (arr_2 [i_2 - 3] [i_2 - 4])))) ? (5310074008921523302ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2 - 3] [i_2 - 2])) ? (arr_2 [i_2 - 4] [i_2 - 4]) : (arr_2 [i_2 - 2] [i_2 - 3]))))));
                    arr_11 [i_0] [i_0] [i_0] [i_2] = (i_2 % 2 == 0) ? (((((((/* implicit */int) (_Bool)1)) - (arr_4 [i_0] [i_1] [i_2 + 1]))) - (arr_7 [i_0] [i_2] [i_2 + 1] [i_0]))) : (((((((/* implicit */int) (_Bool)1)) - (arr_4 [i_0] [i_1] [i_2 + 1]))) + (arr_7 [i_0] [i_2] [i_2 + 1] [i_0])));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 2) 
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((7425909310258283882LL) / (((/* implicit */long long int) -1112556087))))))) ? ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 + 2]))) & (8ULL))))) : (((/* implicit */unsigned long long int) -1648752594))));
        arr_16 [i_3 - 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_1 [i_3 - 1])) : (arr_2 [i_3 + 1] [i_3]))), (((/* implicit */int) arr_3 [i_3] [i_3] [i_3 + 1])))))));
        var_24 *= ((/* implicit */unsigned char) min((((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_3 - 2]))))) == (((long long int) 5154630370331615450ULL)))), (((((/* implicit */_Bool) arr_6 [i_3 - 1])) || (((/* implicit */_Bool) arr_6 [i_3 + 2]))))));
        var_25 = ((/* implicit */_Bool) ((long long int) ((18446744073709551615ULL) / (((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3])) ? (8ULL) : (274877906943ULL))))));
    }
    /* vectorizable */
    for (short i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        var_26 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_4 - 1] [i_4 + 1]))));
        var_27 = ((/* implicit */int) ((((/* implicit */int) arr_0 [i_4 + 1])) != (((/* implicit */int) arr_6 [i_4 + 1]))));
        var_28 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4 + 1] [i_4 + 1])) && (((((/* implicit */_Bool) 4103758798052458677LL)) || (((/* implicit */_Bool) 4503599627370495LL))))));
        var_29 = ((/* implicit */int) ((unsigned int) (short)32610));
        arr_19 [6] [6] &= ((/* implicit */int) ((((2ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4 + 1]))) : (arr_18 [8])));
    }
    var_30 = ((/* implicit */unsigned long long int) 5980638979946848228LL);
    var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_18)))))));
}
