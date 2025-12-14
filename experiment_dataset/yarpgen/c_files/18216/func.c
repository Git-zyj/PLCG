/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18216
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)112)) << (((arr_3 [i_0] [i_0] [i_0]) + (1989684539)))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)122)))))));
                    var_19 = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_6))))));
                    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((arr_2 [i_0]) << (((((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [(unsigned char)0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) + (42))) - (2)))))), (((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((var_18), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [i_1] = ((arr_2 [i_0]) - ((+(arr_2 [i_0]))));
                    var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_1 [(signed char)4] [(signed char)4])), (max((3896763311786896611ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)1)))))))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                {
                    var_22 = var_2;
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_6] [i_0] [i_0] [i_6] [i_0] = arr_1 [(unsigned short)12] [(unsigned short)12];
                                arr_23 [i_0] [i_1] [i_6] [i_6] = ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_23 -= ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1 + 2] [i_1] [i_0])) == (((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_4]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) (short)0)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        for (short i_8 = 1; i_8 < 14; i_8 += 4) 
                        {
                            {
                                arr_29 [i_8] [i_7] [(unsigned short)1] [i_1] [i_1] [i_7] [i_0] = (!(((/* implicit */_Bool) ((max((arr_2 [i_1]), (((/* implicit */long long int) arr_27 [i_7] [i_7] [i_4] [i_1 + 1] [i_7])))) + (((/* implicit */long long int) arr_28 [i_1] [i_1] [i_1] [i_4] [i_8 - 1] [i_8]))))));
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_4] [i_7] [i_4] [i_8])))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) arr_5 [i_4] [i_1 + 2] [i_0] [i_0]);
                }
                arr_30 [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) var_6)), ((+(var_16))))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)0)))))))))));
            }
        } 
    } 
    var_26 = ((((((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_9))))) + (((((/* implicit */int) var_4)) * (((/* implicit */int) var_4)))))) & (max((((/* implicit */int) var_0)), ((~(((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
    {
        for (int i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            {
                var_27 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_36 [i_9] [8] [i_9]))));
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    arr_40 [i_9] [i_9] [i_10] [i_9] = ((/* implicit */short) (~(max((arr_37 [i_10] [i_10] [i_9] [i_9]), (arr_37 [i_11] [i_10] [i_9] [i_9])))));
                    var_28 = ((/* implicit */unsigned long long int) -889455530);
                }
                arr_41 [14] [14] [i_10] = ((/* implicit */_Bool) arr_38 [i_10]);
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) var_0))));
    /* LoopSeq 2 */
    for (unsigned short i_12 = 4; i_12 < 14; i_12 += 2) 
    {
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((var_5) / (((/* implicit */int) arr_24 [i_12] [i_12 - 1] [i_12 - 3] [i_12 - 2] [i_12 - 2] [i_12 - 4])))))));
        var_31 = max((((max((1308276576), (arr_28 [(unsigned short)1] [(unsigned short)1] [i_12] [i_12] [i_12] [i_12]))) & (((((/* implicit */_Bool) arr_16 [i_12])) ? (((/* implicit */int) (short)3351)) : (var_5))))), (((/* implicit */int) ((signed char) max((arr_2 [i_12 - 2]), (arr_34 [i_12]))))));
        var_32 = ((/* implicit */long long int) max((var_32), ((~(((((/* implicit */long long int) 1308276588)) + (arr_37 [i_12] [i_12] [(_Bool)1] [i_12])))))));
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (int i_14 = 0; i_14 < 15; i_14 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 2) 
                    {
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) arr_14 [i_12] [i_12]))));
                        var_34 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_12 - 3] [i_15 + 2])) ? (((/* implicit */int) arr_20 [i_12 - 3] [i_13] [i_15 + 1] [i_15 - 1] [i_12] [i_15 + 2])) : (((/* implicit */int) arr_16 [i_12 - 3])))))));
                    }
                    arr_53 [i_13] [i_13] [i_14] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (signed char)113))))));
                    var_35 = ((/* implicit */short) max((max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)7799))))), (max((var_16), (arr_13 [i_12]))))), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (signed char)-86))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_12 - 4] [i_12 - 4] [i_14] [i_12 - 2]))))))))));
                    arr_54 [i_12 - 4] [i_13] [i_14] [i_14] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL))))));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 15; i_16 += 2) 
                    {
                        for (int i_17 = 2; i_17 < 14; i_17 += 2) 
                        {
                            {
                                arr_60 [i_17 + 1] [i_13] [4LL] [i_13] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((1665233784), (-1308276581)))) | ((~(1914072644644169236LL)))));
                                var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_45 [i_12 - 1] [i_12 - 4] [i_17 + 1])))) ? (((/* implicit */int) ((((/* implicit */int) arr_50 [i_12 - 1] [i_12 - 4] [i_17 + 1] [i_17 + 1])) == (((/* implicit */int) arr_6 [i_12 - 1] [i_12 - 4] [i_17 + 1] [i_17 + 1]))))) : (((/* implicit */int) ((arr_59 [i_12 - 1] [i_12 - 4] [i_13]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_12 - 1] [i_12 - 4] [i_17 + 1] [i_17 + 1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_18 = 2; i_18 < 24; i_18 += 3) 
    {
        arr_64 [i_18] &= ((/* implicit */signed char) arr_62 [(signed char)19] [(_Bool)1]);
        var_37 = ((/* implicit */signed char) ((((/* implicit */int) arr_63 [i_18 - 2])) / (arr_61 [i_18 - 1])));
        var_38 += ((/* implicit */unsigned char) (!(arr_62 [i_18] [i_18 + 1])));
    }
}
