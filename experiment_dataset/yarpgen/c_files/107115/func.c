/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107115
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */int) (unsigned short)21957)) - (((/* implicit */int) arr_1 [i_0] [i_0])))) : ((+(((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) arr_1 [i_0] [(signed char)3]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) == (((/* implicit */int) arr_0 [(_Bool)1])))));
        var_14 = arr_1 [i_0] [i_0];
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_15 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_0 [i_2]))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (unsigned short i_4 = 4; i_4 < 16; i_4 += 2) 
                {
                    {
                        arr_15 [(unsigned short)12] [i_3] [(short)2] |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_11 [i_4 + 2] [i_4 - 1] [i_4 + 1] [i_4 + 2] [i_4 - 1])) ? (arr_11 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 - 3] [i_4 - 1]) : (arr_11 [i_4] [i_4 - 1] [i_4 + 1] [i_4] [i_4 - 1])))));
                        arr_16 [i_2] [i_4] [i_2] [i_4] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57628))) / (arr_6 [i_1] [i_2]))), (((/* implicit */unsigned long long int) arr_10 [i_4 + 1] [i_3]))))) ? (arr_6 [i_1] [i_4]) : (((/* implicit */unsigned long long int) 1419217704958366546LL))));
                    }
                } 
            } 
        }
        for (signed char i_5 = 3; i_5 < 17; i_5 += 2) 
        {
            var_16 = ((/* implicit */signed char) arr_13 [i_1] [i_5] [i_1] [i_5]);
            var_17 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_5 - 2] [i_5 - 1] [i_1])) ? (((/* implicit */int) arr_13 [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_5])) : (((/* implicit */int) arr_13 [i_5] [i_5 - 2] [i_5 - 3] [i_5]))))), (min((((/* implicit */unsigned long long int) arr_13 [12] [i_5 + 1] [i_5 - 2] [i_1])), (2530667119623695550ULL))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)44826))))) ? (2686881487U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65533)))))));
            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_14 [i_1] [i_1] [i_1] [i_1] [i_6]) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-33))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)3)) < (((/* implicit */int) (unsigned short)3))))) : (((/* implicit */int) arr_17 [i_6] [8LL] [8LL])))))));
        }
        var_20 = ((/* implicit */int) (~(-7148542178673971083LL)));
        arr_22 [i_1] [(unsigned short)8] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1])))))));
    }
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        for (long long int i_8 = 1; i_8 < 10; i_8 += 2) 
        {
            {
                var_21 = arr_28 [i_7];
                arr_29 [5] [i_8] &= (((-(((/* implicit */int) arr_19 [i_7] [i_8] [i_8 + 1])))) == (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((((/* implicit */long long int) 3568765217U)) >= (-47509939726469884LL)))) : (((/* implicit */int) arr_9 [i_8 + 1] [i_7] [i_7] [i_7])))));
                arr_30 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) 1608085809U);
                var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)37651)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50))) : (2686881494U)));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65532)) ? (-7148542178673971083LL) : (((/* implicit */long long int) 1608085809U))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (unsigned short)46628))))) : ((-(((/* implicit */int) (unsigned char)177))))))) : (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_12)) : (-4790132953928833530LL))), (max((7148542178673971094LL), (((/* implicit */long long int) var_4)))))))))));
    /* LoopNest 2 */
    for (long long int i_9 = 3; i_9 < 16; i_9 += 4) 
    {
        for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)26929)) ? ((-(((/* implicit */int) arr_31 [i_9 - 3] [i_10])))) : ((-(((/* implicit */int) arr_31 [i_9] [i_10]))))));
                var_25 |= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_9 - 3])))))));
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) 
                        {
                            {
                                arr_46 [i_9] [i_9] [i_11] [i_9 + 2] |= ((/* implicit */_Bool) (~(max((arr_39 [i_10] [i_11] [i_13]), (arr_39 [19LL] [i_10] [i_9])))));
                                arr_47 [i_9] [i_10] [i_12] [(unsigned short)10] = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned char)252)))) ? (((((/* implicit */_Bool) 7148542178673971086LL)) ? (((/* implicit */long long int) arr_45 [i_9 - 2] [i_9 - 3] [i_9 - 3] [i_9 + 2] [i_9 - 2])) : (-9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_9] [i_9 - 3] [i_9] [i_9 + 2] [i_9 - 2])) ? (arr_45 [i_9] [i_9 - 3] [2] [i_9 + 2] [i_9 - 2]) : (arr_45 [i_9] [i_9 - 3] [i_9] [i_9 + 2] [i_9 - 2]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_14 = 3; i_14 < 19; i_14 += 4) 
                    {
                        arr_51 [(unsigned char)7] [i_10] [i_9] [i_10] [i_10] [(unsigned short)11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)31)) | (((/* implicit */int) (unsigned short)50851)))))));
                        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_14 - 3])) ? (((/* implicit */int) arr_33 [i_14 - 1])) : (((/* implicit */int) arr_33 [i_14 - 2])))))));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (((!(((((/* implicit */_Bool) arr_43 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])) || (((/* implicit */_Bool) (short)-11427)))))) || ((!(((/* implicit */_Bool) 7148542178673971083LL)))))))));
                        var_28 = ((/* implicit */signed char) (+(((/* implicit */int) ((arr_41 [i_9] [i_9] [i_9 + 4] [i_14 - 3]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14685))))))));
                    }
                    /* vectorizable */
                    for (signed char i_15 = 0; i_15 < 20; i_15 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_42 [(signed char)7] [(signed char)7] [i_9 + 3] [i_9])))))));
                        var_30 = ((/* implicit */long long int) min((var_30), (((((((/* implicit */_Bool) (short)6)) || (((/* implicit */_Bool) 4790132953928833530LL)))) ? (((((/* implicit */_Bool) arr_36 [i_9] [i_11] [i_10])) ? (arr_41 [i_9] [i_10] [9] [(unsigned short)5]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_42 [i_9] [i_15] [i_11] [i_9])))))))));
                    }
                }
                arr_54 [(signed char)7] [i_9] = (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65530))))) ? ((~(8267448544294915660LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38749))))));
            }
        } 
    } 
    var_31 = -162363099111871790LL;
}
