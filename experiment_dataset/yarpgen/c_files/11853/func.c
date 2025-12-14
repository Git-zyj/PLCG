/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11853
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_10 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)27373)) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -85710714836916704LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0])))) - (((/* implicit */int) arr_3 [0U]))))) : (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (signed char)78))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? ((-(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((arr_0 [i_0] [i_0]) || (arr_0 [i_0] [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) var_2);
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) max((2702922621U), (2372128556U)))) & (6739993029893857297LL)))) ? (min((var_5), (((/* implicit */unsigned int) (signed char)91)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))));
        /* LoopNest 3 */
        for (signed char i_2 = 2; i_2 < 6; i_2 += 2) 
        {
            for (unsigned int i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_2 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (2116556835) : (((/* implicit */int) arr_16 [i_2 - 1] [i_3 - 1] [i_3 - 1] [i_3]))))) : (max((((/* implicit */unsigned long long int) arr_16 [i_2 + 1] [i_3 - 1] [i_3 + 1] [i_4])), (355712177802874671ULL)))));
                        var_13 = ((/* implicit */short) ((((/* implicit */int) var_3)) <= (((((/* implicit */int) ((unsigned short) 7223235700050884226LL))) << (((/* implicit */int) ((_Bool) arr_14 [i_3] [i_2 + 2] [i_3] [i_3] [i_4])))))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */short) arr_2 [i_1]);
    }
    var_15 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        for (short i_6 = 2; i_6 < 17; i_6 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    var_16 = ((/* implicit */unsigned int) ((8292924765638203043LL) + (((((/* implicit */_Bool) 1824631277477465421LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6739993029893857297LL)))));
                    var_17 = ((/* implicit */short) ((((/* implicit */int) arr_22 [i_5] [i_5] [i_5] [i_5])) + (((((/* implicit */_Bool) arr_20 [i_5] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_19 [i_5] [(signed char)15])) ? (var_8) : (((/* implicit */unsigned long long int) 2339485093U)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [(unsigned char)10])) ? ((-9223372036854775807LL - 1LL)) : (arr_20 [i_5] [i_6 + 1])))))))));
                    var_19 = ((/* implicit */_Bool) (signed char)-92);
                }
                var_20 *= ((/* implicit */signed char) 1040187392LL);
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((18446744073709551613ULL) | (((/* implicit */unsigned long long int) var_6)))) & (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned char)162)))) ? ((-(8880488105069985536LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)25834))))))));
}
