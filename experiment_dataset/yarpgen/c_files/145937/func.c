/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145937
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
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) (((~(((arr_2 [i_0]) | (((/* implicit */long long int) arr_0 [i_0 + 2] [i_0 + 2])))))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)0)))))))))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0 + 1] [i_0])) == (arr_2 [i_0])))))))) ? (arr_2 [i_0 + 1]) : (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
    }
    for (unsigned short i_1 = 2; i_1 < 13; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) 3606367187U);
        /* LoopSeq 3 */
        for (int i_2 = 2; i_2 < 13; i_2 += 2) 
        {
            arr_10 [i_1] [i_2] [i_2] = var_11;
            var_16 = ((/* implicit */long long int) ((int) min((arr_1 [i_2]), (((/* implicit */long long int) arr_4 [i_1 - 1] [i_2 - 1])))));
            var_17 = ((unsigned int) 15U);
            var_18 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 2555726363U)) < (-5607937470472204841LL))))) : (arr_8 [i_1 - 2] [i_2 - 2] [(unsigned short)11]))) < (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 4294967295U))))));
        }
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            arr_13 [i_1] [i_1] [i_1] |= ((/* implicit */int) (unsigned short)65535);
            var_19 ^= ((/* implicit */int) ((-5607937470472204841LL) != (((/* implicit */long long int) 3618389289U))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_1] [i_1])), (-9223372036854775799LL)))) ? (((((/* implicit */_Bool) ((3606367160U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37907)))))) ? (min((arr_8 [i_1 - 1] [i_4] [i_4]), (((/* implicit */long long int) arr_9 [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */_Bool) (unsigned short)480)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6151))) : (-1LL)))));
                        var_21 = ((/* implicit */unsigned short) ((long long int) ((int) ((((/* implicit */_Bool) 2555726364U)) ? (((/* implicit */unsigned int) arr_15 [i_5] [i_3] [i_4] [i_3])) : (49978533U)))));
                        arr_20 [i_3] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) ((max((8375055489509911411LL), (((/* implicit */long long int) 273315731)))) / (((/* implicit */long long int) arr_3 [i_1 - 2]))));
                    }
                } 
            } 
            arr_21 [i_1] [i_1] [i_3] = ((/* implicit */int) ((-5607937470472204841LL) & (((((arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) < (arr_17 [i_1] [i_1] [i_3] [i_1] [i_3] [i_3]))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_17 [i_1] [i_1] [i_1 - 2] [i_1] [i_1] [i_3])) : (var_11))) : (max((arr_1 [i_1]), (var_11)))))));
        }
        for (long long int i_6 = 1; i_6 < 13; i_6 += 3) 
        {
            var_22 = ((unsigned int) arr_12 [i_1 - 2] [i_1 - 2] [i_1]);
            var_23 ^= ((/* implicit */long long int) arr_23 [i_1 + 1] [i_1]);
            arr_25 [i_1 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [3U])) ^ (((/* implicit */int) arr_12 [i_1 - 1] [i_6] [i_1]))));
            arr_26 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((max((arr_18 [i_1] [i_1]), (((/* implicit */long long int) arr_23 [i_6 + 1] [i_1 + 1])))) != (min((((/* implicit */long long int) ((var_6) != (((/* implicit */unsigned int) arr_17 [i_6] [i_6 + 1] [i_6] [i_1] [i_1 - 1] [i_1 - 1]))))), (var_0)))));
            arr_27 [i_1] [i_1] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 5607937470472204824LL)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 + 1] [10LL] [i_1]))) & (arr_4 [i_6] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((long long int) arr_24 [i_1])))))));
        }
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        var_24 += ((/* implicit */int) arr_29 [i_7]);
        arr_32 [i_7] = ((/* implicit */int) (-(arr_28 [i_7])));
        var_25 = ((/* implicit */unsigned short) (~(4244988756U)));
    }
    for (unsigned short i_8 = 4; i_8 < 16; i_8 += 4) 
    {
        var_26 = ((/* implicit */unsigned int) max((var_26), (arr_34 [i_8])));
        var_27 = ((/* implicit */unsigned int) min((var_27), (arr_34 [i_8 + 1])));
        var_28 += ((/* implicit */unsigned short) max((((arr_28 [i_8]) / (arr_28 [i_8]))), (((/* implicit */long long int) ((int) arr_28 [i_8 - 3])))));
        arr_35 [6U] [i_8] = ((/* implicit */unsigned int) ((long long int) max((((/* implicit */unsigned int) (unsigned short)63673)), (3618389293U))));
    }
    var_29 = ((/* implicit */long long int) ((int) ((unsigned int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_12))))));
    var_30 += min((((/* implicit */long long int) ((((49978540U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)479))))) + (2555726348U)))), (((((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50850))))) % (((long long int) var_5)))));
    var_31 = ((/* implicit */int) max((max((((((/* implicit */_Bool) 943902989U)) ? (((/* implicit */long long int) -321511324)) : (3279310111392968105LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_12)) : (var_4)))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_4)), (var_8))))));
    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */long long int) var_12)), (var_11))) : (((/* implicit */long long int) ((/* implicit */int) ((var_10) == (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_8)) : (var_10)))))))));
}
