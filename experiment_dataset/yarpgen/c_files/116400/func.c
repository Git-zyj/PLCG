/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116400
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] = arr_6 [i_0] [i_2] [i_2 + 1];
                    var_14 ^= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)139))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_0] [i_0] [(_Bool)1] [i_4] &= ((/* implicit */short) var_4);
                            arr_15 [i_4] [i_3] [i_2] [i_2] [(signed char)3] [(signed char)7] = ((/* implicit */unsigned char) var_13);
                            arr_16 [i_0 - 1] [i_1] [(signed char)4] [(signed char)4] [i_4] &= ((/* implicit */unsigned int) (-(((unsigned long long int) var_2))));
                        }
                        var_15 = ((/* implicit */unsigned char) arr_2 [i_2 - 4]);
                        var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-25))) % (arr_3 [i_3 - 1] [i_3 + 1])));
                        arr_17 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) arr_2 [6U]);
                    }
                    for (int i_5 = 2; i_5 < 16; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [(unsigned short)2] [i_0] [15U] [i_5])) ? (8513005123435746263LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) <= (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        /* LoopSeq 2 */
                        for (int i_6 = 1; i_6 < 16; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) var_2);
                            var_19 ^= ((/* implicit */long long int) (~(((unsigned int) -1193549731))));
                            arr_24 [i_6] [i_1] [i_2] [i_5] [i_6 + 1] = ((/* implicit */int) (_Bool)1);
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((arr_19 [i_6] [i_6 + 1] [i_6] [i_1] [i_6]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15659455286518533579ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned char)13]))) : (arr_1 [i_0 - 1])));
                        }
                        for (unsigned short i_7 = 1; i_7 < 13; i_7 += 2) 
                        {
                            var_22 += ((/* implicit */unsigned short) (signed char)8);
                            var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_18 [(unsigned char)6] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (16ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_26 [i_2] [i_2] [i_2] [i_2])) / (var_5))))));
                            var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_7 [i_5 - 2]) : (((/* implicit */int) var_7))));
                            var_25 = ((/* implicit */unsigned char) var_3);
                        }
                    }
                    /* LoopNest 2 */
                    for (short i_8 = 4; i_8 < 13; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            {
                                var_26 ^= ((/* implicit */_Bool) arr_31 [i_9] [i_8 + 1] [(_Bool)1] [i_2 - 3] [i_1] [i_0]);
                                var_27 = ((/* implicit */short) arr_30 [6U] [i_2] [i_8 + 2] [(short)11]);
                                var_28 = arr_29 [i_1] [(signed char)2] [8LL];
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 = ((/* implicit */int) min((var_29), ((+(((((/* implicit */int) (signed char)-120)) / (((/* implicit */int) (signed char)-25))))))));
    }
    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
    {
        var_30 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (arr_34 [i_10])))) ? (((arr_32 [i_10]) >> (((var_6) - (1941941806U))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5))))))) ? (((((/* implicit */_Bool) ((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (min((15659455286518533579ULL), (25ULL))) : (((((/* implicit */_Bool) -982179072)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((arr_33 [1U]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120)))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 2; i_11 < 22; i_11 += 2) 
        {
            for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
            {
                {
                    arr_40 [i_10] [i_11] [i_10] [22] = ((/* implicit */unsigned long long int) min(((signed char)58), (var_2)));
                    var_31 = ((/* implicit */unsigned long long int) var_1);
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (signed char i_13 = 0; i_13 < 25; i_13 += 1) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            for (int i_15 = 2; i_15 < 23; i_15 += 4) 
            {
                {
                    var_32 = ((/* implicit */signed char) ((unsigned long long int) (signed char)-1));
                    var_33 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((arr_41 [15ULL] [15U]), (((/* implicit */unsigned char) arr_45 [i_14] [i_14]))))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)125)))) : (((((/* implicit */_Bool) arr_49 [(short)4] [i_14])) ? (arr_49 [i_14] [i_15]) : (((/* implicit */int) arr_41 [i_13] [5ULL])))))), (((/* implicit */int) var_11))));
                    var_34 |= ((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), (-1570293881)));
                    var_35 += ((/* implicit */long long int) max((1570293861), ((-(((/* implicit */int) arr_42 [i_15]))))));
                }
            } 
        } 
    } 
}
