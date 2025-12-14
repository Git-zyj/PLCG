/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130977
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
    var_19 |= ((/* implicit */short) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        var_20 += (-(((/* implicit */int) arr_0 [i_0 - 1])));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 14; i_2 += 2) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-12683))));
                    arr_7 [i_0 + 1] [i_0 - 3] [i_0 - 4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_16))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_12))))) : (arr_2 [i_2 - 1] [i_2 + 2] [i_2 - 3])));
                    arr_8 [i_1] [i_1] [i_2 - 3] [i_2 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 4] [i_0 - 3] [i_0 - 1])) : (((/* implicit */int) var_17))));
                    arr_9 [i_0 - 2] [i_1] [i_2 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0 - 2]))));
                }
            } 
        } 
    }
    for (signed char i_3 = 1; i_3 < 19; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-50)), (193132682)))) ? (((((/* implicit */_Bool) var_18)) ? (arr_10 [i_3 + 2]) : (((/* implicit */int) (signed char)-121)))) : (((/* implicit */int) ((1413170440U) == (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                {
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)107)) ? (8861362116870319123ULL) : (((/* implicit */unsigned long long int) 2537930243U))))) ? (((/* implicit */int) arr_16 [i_3 + 1])) : (((/* implicit */int) min((arr_16 [i_3 + 2]), (arr_16 [i_3 + 2])))))))));
                    var_23 -= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3521548263748343667LL)) ? (((/* implicit */int) arr_19 [i_3 + 2] [i_3 + 1] [i_3 + 2])) : (((/* implicit */int) arr_19 [i_3 + 1] [i_3 + 1] [i_3 + 1]))))));
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) -1748418119)) ? (((/* implicit */int) (signed char)-96)) : (-1748418119))))));
    }
    for (signed char i_6 = 1; i_6 < 19; i_6 += 4) /* same iter space */
    {
        arr_23 [i_6 - 1] [i_6 - 1] &= ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)60516)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8861362116870319123ULL)) ? (1413170440U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_16 [i_6 - 1])) != (((/* implicit */int) arr_11 [i_6 - 1]))))) : (((/* implicit */int) (!(arr_11 [i_6 + 1]))))))));
        arr_24 [i_6 + 2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6 + 2])) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_6 + 1] [i_6 + 2] [i_6 + 1]))))) : (((/* implicit */int) min(((unsigned short)65519), ((unsigned short)41802)))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6 + 1] [i_6 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6 + 2]))) : (2881796856U)))) ? (((((/* implicit */_Bool) -3436383824783768753LL)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) arr_14 [i_6 + 2])))) : (((((/* implicit */_Bool) 6193525891065292257LL)) ? (((/* implicit */int) var_7)) : (arr_10 [i_6 + 1])))))));
        var_25 |= ((/* implicit */short) arr_17 [i_6 + 2] [i_6 + 2] [i_6 + 2]);
    }
}
