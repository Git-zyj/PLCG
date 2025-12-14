/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148471
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [16ULL] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((arr_1 [(unsigned short)5]), (((/* implicit */unsigned int) arr_4 [i_2]))))) ? (max((((/* implicit */int) (unsigned short)34048)), (-1))) : (arr_6 [i_2 - 3] [i_2 + 3] [i_2 + 2])))));
                    var_11 &= 1661870833U;
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((((/* implicit */int) arr_3 [i_2 - 2] [3ULL])) - (arr_11 [i_2 - 4] [i_2] [i_2] [i_2 + 1]));
                        var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_14 ^= var_9;
                        arr_16 [(_Bool)1] = ((/* implicit */_Bool) arr_14 [(unsigned short)4] [i_1] [i_1] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        arr_20 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_10 [i_2 - 2] [10U] [10U] [i_2] [i_2] [i_2 + 1])) : (var_6)));
                        arr_21 [i_5] [i_2 - 4] [(_Bool)1] [3U] [3U] [i_0] = ((/* implicit */unsigned short) var_5);
                        var_15 = ((int) ((((/* implicit */_Bool) var_8)) ? (2633096463U) : (419829775U)));
                    }
                    arr_22 [i_2] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_17 [i_2 + 3] [i_2] [i_2 - 4] [i_2] [i_2 - 2] [i_2])) ? (((/* implicit */unsigned long long int) 419829800U)) : (((((/* implicit */_Bool) 4112363400U)) ? (((/* implicit */unsigned long long int) -1992638238)) : (var_6))))) - (((((/* implicit */_Bool) (+(var_8)))) ? (max((arr_14 [(unsigned short)21] [i_1] [(unsigned short)16] [i_1]), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_2 - 2] [i_2 + 2]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_2 - 1])) <= (max((var_8), (-1435902864))))))) / (min((4112363400U), (((/* implicit */unsigned int) var_9))))));
                        arr_25 [(_Bool)1] [(_Bool)1] [i_2] [(_Bool)1] [i_0] [5ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((2650498119U) > (((/* implicit */unsigned int) -2136189949)))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_24 [i_0] [i_2 - 1] [i_2 - 2] [i_6] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */_Bool) var_8)) ? (-2136189949) : (((/* implicit */int) (unsigned short)4095)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))))) : (max((((/* implicit */unsigned long long int) var_1)), (arr_19 [i_2 + 2] [i_2 + 3] [i_2 + 3] [i_0] [i_0] [i_0])))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 16; i_7 += 2) 
    {
        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            {
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min(((+(5782115038040962023ULL))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_14 [i_8] [i_7 + 2] [i_7 + 2] [i_7 + 2]))))))));
                arr_32 [i_7] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_7 [i_7 + 1] [i_7 + 1]), (arr_7 [i_7 + 2] [i_7 - 1])))) ? (max((arr_10 [i_7 + 1] [i_7] [i_7] [i_8] [i_8] [i_8]), (((/* implicit */unsigned int) arr_7 [i_7 - 1] [i_7 - 1])))) : (min((arr_10 [i_7 + 1] [i_7] [(_Bool)1] [i_7] [i_8] [i_8]), (((/* implicit */unsigned int) (unsigned short)4264))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_12 = 0; i_12 < 14; i_12 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_9] [i_9] [i_9] [i_11] [i_11] [i_12])))))) : (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) arr_35 [i_9] [i_9] [i_9])) : (419829790U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1)))))))));
                        arr_43 [i_9] [i_10] [11] = ((/* implicit */unsigned int) (+(min((arr_11 [i_12] [i_11] [i_9] [i_9]), (((/* implicit */int) arr_30 [i_9]))))));
                        arr_44 [i_9] [i_11] [i_10] [i_9] = ((/* implicit */_Bool) ((((_Bool) 419829790U)) ? (((((/* implicit */_Bool) arr_29 [i_9] [i_10])) ? (arr_29 [i_9] [i_9]) : (arr_29 [i_10] [3]))) : (((((/* implicit */_Bool) arr_29 [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_29 [i_11] [i_12])))));
                        arr_45 [i_9] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((var_9), (1262926897)))) - (((unsigned int) -17))))) <= ((-(arr_14 [i_12] [i_10] [i_11] [i_12])))));
                        arr_46 [i_9] [i_10] [i_10] [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 14; i_13 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) arr_41 [i_9])))))), (((unsigned long long int) arr_19 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))));
                        arr_51 [9U] [i_9] [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)56367)) / (min(((~(arr_6 [i_9] [i_9] [i_9]))), (max((arr_4 [20]), (((/* implicit */int) arr_31 [i_9] [14] [i_13]))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_14 = 0; i_14 < 14; i_14 += 2) /* same iter space */
                    {
                        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((((/* implicit */_Bool) (unsigned short)23244)) ? (((/* implicit */unsigned int) var_8)) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_9] [i_9] [(unsigned short)10]))))))));
                        arr_55 [i_11] [i_10] [i_11] [i_11] [i_9] = ((/* implicit */unsigned short) ((var_7) ? ((~(arr_50 [i_9] [(unsigned short)1] [i_9] [i_11] [i_11] [(unsigned short)1]))) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (arr_5 [i_9] [i_10]) : (((/* implicit */int) var_7)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_15 = 0; i_15 < 14; i_15 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned short) (~(((arr_56 [i_9] [i_10] [i_9] [i_15]) / (arr_35 [i_9] [i_10] [i_9])))));
                        arr_59 [i_9] [i_10] [i_9] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_15] [i_10] [i_15] [i_9]))) : (33554400ULL)));
                        arr_60 [i_9] = ((/* implicit */unsigned int) ((unsigned short) var_6));
                    }
                    var_22 &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_9)) ? (arr_41 [i_9]) : (arr_41 [i_9]))), (((unsigned long long int) arr_41 [i_10]))));
                }
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (~(min((arr_26 [i_9]), (arr_26 [i_9]))))))));
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (+(max((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) var_10)))))))));
            }
        } 
    } 
    var_25 = ((int) (unsigned short)49391);
}
