/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186116
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
    for (int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((unsigned char) 2518446465U));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_19 = ((unsigned int) ((unsigned char) (_Bool)0));
                    arr_7 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned char) ((arr_4 [i_0 + 2] [i_0 + 2] [i_0]) ? (((/* implicit */int) arr_4 [i_0] [i_2] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_0 + 2] [i_0])))));
                    arr_8 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) & (((((/* implicit */_Bool) ((unsigned int) (unsigned char)106))) ? (((long long int) var_2)) : (((/* implicit */long long int) ((/* implicit */int) min((var_3), (((/* implicit */short) var_6))))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned char)8] [i_0] [i_0 + 1]))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_16)))))) : (((/* implicit */int) var_3))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    {
                        arr_15 [(signed char)8] [i_5] [2] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) (unsigned char)154)) ? (3136594676306658555ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26770)))))));
                        arr_16 [(short)0] [i_4] [i_3] [(_Bool)1] = ((/* implicit */int) min((var_14), (((/* implicit */unsigned int) arr_12 [i_0] [i_3] [i_3]))));
                        var_21 = ((/* implicit */unsigned int) ((var_13) > (((/* implicit */unsigned int) ((int) (_Bool)1)))));
                    }
                } 
            } 
            var_22 = ((/* implicit */short) ((((/* implicit */int) ((((long long int) arr_10 [i_3] [i_3] [0])) != (((/* implicit */long long int) ((/* implicit */int) var_15)))))) + ((-(((/* implicit */int) var_3))))));
            arr_17 [(signed char)0] [(signed char)8] [(signed char)8] = min((((int) (unsigned char)54)), (((1978802501) >> (((/* implicit */int) (_Bool)0)))));
            arr_18 [i_0] [i_0] [i_3] = ((/* implicit */long long int) (-(arr_0 [i_0])));
        }
    }
    for (short i_6 = 1; i_6 < 22; i_6 += 4) 
    {
        var_23 = ((((/* implicit */unsigned int) ((int) min((var_17), (var_9))))) == (((((/* implicit */_Bool) min((((/* implicit */short) var_2)), (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_6])) < (((/* implicit */int) arr_21 [i_6])))))) : ((-(var_14))))));
        arr_23 [(signed char)6] = ((/* implicit */long long int) ((unsigned int) ((int) (((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2)))))));
        var_24 = ((/* implicit */unsigned int) (_Bool)1);
    }
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                {
                    var_25 ^= ((/* implicit */unsigned int) var_12);
                    var_26 |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (3183005543U)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            {
                                arr_38 [i_7] [i_9] [i_9] [i_9] [i_11] [22U] [i_9] = ((/* implicit */long long int) (+(var_13)));
                                var_27 = ((/* implicit */signed char) min((((/* implicit */int) arr_36 [i_7] [(_Bool)1] [i_9] [(_Bool)1] [(short)15])), (min((min((((/* implicit */int) (_Bool)0)), (var_5))), (((/* implicit */int) arr_36 [(_Bool)1] [i_8] [i_9] [i_8] [i_11]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_41 [i_9] [i_9] [(short)16] [i_8] [i_7] [i_9] = ((/* implicit */int) max((var_3), (var_12)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_13 = 1; i_13 < 23; i_13 += 3) 
                        {
                            arr_45 [i_7] [i_7] [i_7] [i_7] [(short)11] [(short)0] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_7] [i_7] [(unsigned short)2] [i_13 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [(short)0] [(_Bool)1] [11LL] [i_13 - 1]))) : (var_13)));
                            var_28 = ((/* implicit */int) arr_34 [i_7] [i_8] [i_9] [i_13 - 1]);
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_37 [i_13 + 1] [i_13] [i_13 + 1] [i_13 + 2] [i_7])))))));
                            arr_46 [i_7] [i_8] [i_9] [i_12] [(_Bool)1] [(_Bool)1] = ((/* implicit */int) ((short) ((unsigned char) var_13)));
                        }
                        for (unsigned short i_14 = 0; i_14 < 25; i_14 += 4) 
                        {
                            arr_49 [i_9] [i_8] [i_9] = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) 1054499876)))));
                            var_30 = ((/* implicit */unsigned short) arr_29 [i_9]);
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) var_13))));
                        }
                        var_32 += ((/* implicit */unsigned char) max((((long long int) (signed char)4)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_26 [i_7])) : (((/* implicit */int) arr_26 [i_7])))))));
                        arr_50 [2U] [14ULL] [i_9] [i_8] = ((/* implicit */int) arr_32 [i_9] [i_9]);
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_7] [i_8] [(unsigned char)4] [i_12]))) : (((unsigned long long int) min((((/* implicit */unsigned long long int) (signed char)-48)), (arr_32 [i_7] [i_9]))))));
                    }
                }
            } 
        } 
    } 
}
