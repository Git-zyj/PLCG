/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121942
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) arr_5 [i_0] [i_0] [i_1 + 1] [i_2]);
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_2 + 1])) ? (arr_1 [i_1 - 1] [i_2 + 1]) : (arr_1 [i_1 - 1] [i_2 + 1])))) ? (((/* implicit */int) ((short) (+(((/* implicit */int) var_18)))))) : (((/* implicit */int) var_12)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        var_22 = ((unsigned int) arr_9 [i_3]);
        arr_10 [i_3] [(unsigned char)8] = ((/* implicit */_Bool) arr_9 [i_3]);
    }
    for (unsigned int i_4 = 1; i_4 < 18; i_4 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((min(((+(var_19))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1232177046)) ? (1232177030) : (1232177045)))))) >> ((((~(-1232177045))) - (1232177044))))))));
        var_24 &= ((/* implicit */unsigned char) min((min((((/* implicit */int) (unsigned short)3785)), (-2143425785))), (min((var_3), (((/* implicit */int) var_7))))));
        var_25 *= min(((+(arr_11 [i_4 + 2] [i_4 + 2]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_4 + 2])) / (((/* implicit */int) (signed char)-127))))));
        var_26 = ((/* implicit */signed char) min((min((((/* implicit */long long int) arr_11 [i_4 - 1] [i_4 - 1])), (-6498104351294626259LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4 + 1])) ? (arr_11 [i_4 + 2] [i_4 - 1]) : (arr_11 [i_4 + 1] [i_4 + 2]))))));
    }
    for (unsigned int i_5 = 1; i_5 < 18; i_5 += 3) /* same iter space */
    {
        var_27 += ((/* implicit */unsigned int) var_13);
        var_28 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)3785))))) ? (((((/* implicit */_Bool) arr_12 [i_5])) ? (arr_11 [(signed char)12] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_5])) ? (var_5) : (((/* implicit */int) (unsigned short)50473))))))) / (max((var_14), (((/* implicit */unsigned int) var_7)))));
        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) -6594040926559229807LL))));
    }
    for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        arr_20 [i_6] = min((((-4350287771604640299LL) / (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) arr_13 [i_6])));
        arr_21 [i_6] [i_6] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 2147483647)) ? (-1232177030) : (((/* implicit */int) arr_17 [i_6] [i_6])))), (((/* implicit */int) var_10))));
    }
}
