/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109638
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
    var_12 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_13 -= ((/* implicit */short) min((3532554591U), (((/* implicit */unsigned int) (_Bool)1))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (short)15028))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_3)))))));
            var_15 = ((/* implicit */short) ((signed char) arr_3 [i_0]));
            arr_6 [i_1] [i_0] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)65535))));
            arr_7 [i_1] [i_1] [i_1] = (_Bool)0;
        }
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            arr_11 [i_0] [i_2] [2LL] = ((/* implicit */unsigned long long int) ((int) 1265187493));
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        {
                            var_16 = min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71))) | (3226808105U))), (((/* implicit */unsigned int) max((arr_9 [i_5] [i_2]), (arr_9 [i_0] [i_4])))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((11431009791736957159ULL), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), (var_10)))) : (((var_11) ? (arr_15 [i_0] [i_2] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) -4764437967829760825LL))))));
                            arr_19 [i_0] = max((((((/* implicit */_Bool) min((var_8), (((/* implicit */int) arr_16 [i_0]))))) ? (max((var_10), (((/* implicit */int) var_3)))) : (((/* implicit */int) (unsigned char)48)))), (((/* implicit */int) min((arr_9 [i_0] [i_0]), (arr_9 [4LL] [i_2])))));
                        }
                    } 
                } 
                arr_20 [i_2] [i_2] [i_3] [20ULL] = ((/* implicit */_Bool) ((((((arr_16 [i_0]) ? (4764437967829760819LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))))) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (((/* implicit */unsigned int) (-(var_8)))) : (1080856580U)))));
            }
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                arr_24 [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (short)31721)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31730))) : (((((/* implicit */_Bool) var_9)) ? (6351682133134075449ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112)))))))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)59))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_3)) ? (arr_10 [i_0] [i_2]) : (((/* implicit */int) var_7))))))) : ((((-(arr_17 [i_0] [i_2] [i_2] [i_2] [i_2] [i_6]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                arr_25 [6ULL] [i_2] [i_6] [i_6] = ((/* implicit */_Bool) arr_3 [i_0]);
            }
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                arr_29 [i_0] [i_0] [20LL] = ((/* implicit */unsigned char) ((_Bool) var_4));
                /* LoopSeq 2 */
                for (unsigned int i_8 = 3; i_8 < 20; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        arr_35 [i_2] [20LL] [i_8] [i_7] [i_2] [2LL] = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) arr_13 [i_0] [i_0] [i_0] [18])))));
                        var_19 = ((/* implicit */unsigned int) ((arr_1 [i_8 - 3]) < (((/* implicit */unsigned int) var_8))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((-4764437967829760844LL) % (((/* implicit */long long int) ((/* implicit */int) (short)-31701))))))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_0))));
                    }
                    var_22 -= ((/* implicit */unsigned int) (-((-(var_9)))));
                    var_23 = ((/* implicit */short) 2699457855U);
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        arr_38 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_15 [i_10] [i_8 - 1] [i_7] [1U] [(_Bool)0]);
                        var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)8191))))) ? ((+(((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((+(((/* implicit */int) arr_30 [15] [i_2]))))));
                        arr_39 [i_0] [i_0] [i_7] [i_8] [i_8] [i_8 - 2] [i_10] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_27 [i_0] [(unsigned char)10] [i_7] [14LL])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -4764437967829760820LL)))))) : (((((/* implicit */_Bool) arr_26 [i_0] [i_7] [i_10])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                    }
                }
                for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    arr_42 [i_0] [i_2] [(_Bool)0] [15] [i_0] = ((/* implicit */long long int) ((arr_18 [14ULL] [i_0] [(short)11] [i_7] [i_11] [(short)11] [i_11]) | (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        var_25 = (-(((/* implicit */int) arr_2 [i_12])));
                        var_26 = ((/* implicit */unsigned int) ((short) (unsigned char)48));
                    }
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (unsigned char)160))));
                }
            }
            var_28 = ((/* implicit */long long int) var_10);
        }
        var_29 |= ((/* implicit */short) ((((/* implicit */_Bool) min((((unsigned long long int) 4764437967829760842LL)), (((/* implicit */unsigned long long int) max((arr_10 [i_0] [i_0]), (((/* implicit */int) (short)31826)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_15 [(_Bool)1] [(_Bool)1] [i_0] [i_0] [i_0])));
        arr_47 [16U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (2147483647)))) ? (((((/* implicit */int) (unsigned char)0)) >> (((-1) + (11))))) : ((+(((/* implicit */int) arr_16 [i_0]))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 1; i_13 < 16; i_13 += 4) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            {
                var_30 += ((/* implicit */short) -1369003409);
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -4764437967829760812LL)) ? (max((((/* implicit */unsigned long long int) arr_33 [(signed char)12] [i_14] [i_14] [i_14] [i_14])), (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_13] [9LL] [i_13] [i_13 + 1] [i_13])) ? (((/* implicit */int) arr_3 [i_14])) : (var_8))))));
                arr_52 [i_14] [i_14] = ((/* implicit */_Bool) var_2);
                var_32 += ((/* implicit */_Bool) (~(arr_40 [3] [i_13 - 1] [i_13] [i_13])));
            }
        } 
    } 
    var_33 = ((/* implicit */long long int) ((unsigned long long int) var_8));
    /* LoopNest 2 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            {
                arr_59 [i_16] = ((/* implicit */unsigned long long int) max((((arr_27 [i_16] [i_16] [i_15] [i_15]) * (((/* implicit */long long int) ((/* implicit */int) var_7))))), (max((arr_27 [i_15] [i_15] [i_15] [0]), (-4764437967829760788LL)))));
                var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) arr_21 [i_15] [(unsigned char)8] [i_15]))));
                var_35 = ((/* implicit */signed char) (short)-32762);
            }
        } 
    } 
}
