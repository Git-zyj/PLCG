/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132515
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
    var_12 = ((/* implicit */signed char) var_7);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_6 [i_1] [i_2] [i_1 - 3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) 15)) : (3197502624U)));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (short)896))));
                        arr_10 [i_0 - 1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) (~((-((~(((/* implicit */int) arr_5 [i_3] [i_2] [i_1] [i_0 + 2]))))))));
                        var_13 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)60))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) 1097464670U))));
                        arr_13 [i_1] [i_1 - 2] [i_1] [i_1 - 2] = ((/* implicit */_Bool) 3197502597U);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_15 = max((((/* implicit */unsigned int) ((((/* implicit */int) (short)32756)) - (((/* implicit */int) (short)-9281))))), (max((((((/* implicit */_Bool) arr_11 [i_2] [i_5])) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) (short)8192)))));
                        /* LoopSeq 4 */
                        for (unsigned char i_6 = 2; i_6 < 20; i_6 += 4) /* same iter space */
                        {
                            var_16 += ((((/* implicit */_Bool) 11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12697))) : (2134463450U));
                            var_17 += ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)26545))));
                            arr_19 [i_2] [i_1] [i_2] [i_5] [i_6 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20))) : (arr_15 [i_0 + 3])))) ? (max(((-(((/* implicit */int) (signed char)-60)))), (((/* implicit */int) max((((/* implicit */short) arr_1 [i_2])), (var_5)))))) : (((/* implicit */int) var_5))));
                            var_18 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_0 [i_6 + 2] [i_0])), (var_1))) % (((/* implicit */unsigned long long int) arr_18 [i_0 + 1] [i_0 + 1] [i_2] [i_1] [i_6]))));
                            arr_20 [i_1] [i_2] [i_5] [i_1] = ((/* implicit */int) (short)-12697);
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 2; i_7 < 20; i_7 += 4) /* same iter space */
                        {
                            arr_24 [i_0] [i_0 + 4] [i_0] [i_0] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_17 [i_0 - 1] [i_5])))) ? (3197502619U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)13)) ? (21) : (((/* implicit */int) (unsigned char)63)))))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8737899302748851592ULL)) ? (((/* implicit */int) arr_22 [i_0 + 2] [i_2] [i_7 - 2] [i_1] [i_7 + 1])) : (((/* implicit */int) arr_22 [i_0 + 1] [i_0] [i_1] [i_1] [i_1]))));
                        }
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            arr_27 [i_1] = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))) - (127U))), (((/* implicit */unsigned int) ((arr_8 [i_1] [i_1 + 2] [i_5]) <= (((/* implicit */int) (_Bool)1)))))));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)13056)) ? (1548931549) : (((/* implicit */int) (unsigned short)39797)))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            arr_31 [i_1] = ((/* implicit */unsigned int) var_11);
                            arr_32 [i_0] [i_0] [i_2] [i_5] |= arr_25 [i_1 - 1] [i_2] [i_2] [i_9];
                            var_21 = ((/* implicit */signed char) max((arr_28 [i_0] [i_0 + 2] [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1748649699150141261LL)) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_1])) : (((/* implicit */int) arr_23 [i_0 - 1])))) & (((/* implicit */int) arr_22 [(signed char)15] [i_0 - 1] [i_1 - 3] [i_1] [i_5])))))));
                        }
                    }
                    var_22 = ((/* implicit */short) ((((/* implicit */int) (signed char)108)) ^ (-1671357011)));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) var_7);
}
