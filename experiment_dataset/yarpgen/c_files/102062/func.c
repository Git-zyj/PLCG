/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102062
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_0 [i_0] [i_0 - 2]))))), (max((((/* implicit */long long int) arr_0 [i_0 - 2] [i_0 - 3])), (-1LL)))));
        arr_4 [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_0 [i_0 - 2] [i_0 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0 - 1] [i_0 - 2])), (var_6))))) : (((long long int) arr_0 [i_0 - 1] [i_0 + 1]))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (int i_4 = 4; i_4 < 9; i_4 += 1) 
                {
                    {
                        var_10 = ((/* implicit */int) max((((/* implicit */long long int) ((short) ((_Bool) arr_10 [i_1])))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (short)-3977))))) ? (arr_11 [i_1] [(unsigned char)2] [i_1] [i_1]) : (((/* implicit */long long int) ((int) arr_1 [15LL] [(unsigned short)0])))))));
                        arr_13 [i_3] = ((/* implicit */short) ((max((((/* implicit */long long int) arr_10 [i_1])), (var_2))) + (((/* implicit */long long int) ((int) max((((/* implicit */short) (signed char)112)), ((short)0)))))));
                    }
                } 
            } 
        } 
        var_11 = ((/* implicit */long long int) ((unsigned short) (~(max((((/* implicit */long long int) var_8)), (var_4))))));
        arr_14 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
        arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) max((arr_8 [i_1] [i_1] [i_1]), (max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) arr_7 [i_1] [i_1]))))));
    }
    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) arr_19 [i_5]))));
        var_13 = ((/* implicit */long long int) max(((-(((((/* implicit */int) arr_19 [i_5])) * (((/* implicit */int) arr_0 [14] [(unsigned short)11])))))), ((-(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)8191))))))));
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            arr_23 [(unsigned short)5] [i_6] = ((/* implicit */int) ((unsigned long long int) (unsigned short)1920));
            /* LoopNest 2 */
            for (unsigned short i_7 = 1; i_7 < 10; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    {
                        var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_5] [i_8])) ? (((/* implicit */int) arr_1 [i_5] [i_5])) : (((/* implicit */int) arr_1 [i_6] [i_8])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_8] [i_8])))))));
                        arr_28 [i_5] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */int) ((signed char) max((-187621913), (((/* implicit */int) (unsigned short)63616)))))) & ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(short)8] [i_7 + 1])) || (((/* implicit */_Bool) var_8)))))))));
                    }
                } 
            } 
            arr_29 [i_6] = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_3)), (max((max((((/* implicit */long long int) arr_17 [i_5])), (var_1))), (max((((/* implicit */long long int) var_9)), (arr_20 [i_6] [(short)1] [i_5])))))));
        }
        for (signed char i_9 = 1; i_9 < 10; i_9 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) max((187621912), (((/* implicit */int) (unsigned short)57345))));
            arr_34 [i_9 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)26513)) << (((1826299052U) - (1826299039U)))))) ? (((/* implicit */int) (short)-3977)) : ((+(((/* implicit */int) var_6))))));
            arr_35 [i_5] [i_5] [i_9] = ((/* implicit */short) max((((((((/* implicit */int) var_9)) * (((/* implicit */int) var_3)))) >> (((((/* implicit */int) max(((short)-3977), ((short)-1)))) + (22))))), (max((((/* implicit */int) ((unsigned char) arr_1 [i_5] [i_9 + 1]))), ((+(((/* implicit */int) var_5))))))));
        }
    }
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) var_9))))), (max((max((var_1), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_3)))))))));
    var_17 = ((/* implicit */short) max((((/* implicit */long long int) max((max((((/* implicit */unsigned short) var_0)), (var_6))), (max((var_8), (((/* implicit */unsigned short) var_0))))))), (var_1)));
    /* LoopNest 3 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (signed char i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            for (short i_12 = 1; i_12 < 11; i_12 += 2) 
            {
                {
                    arr_45 [i_10] [i_11] [(signed char)7] = ((/* implicit */unsigned char) ((long long int) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-48))))) : (-1686494892))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        for (long long int i_14 = 1; i_14 < 14; i_14 += 4) 
                        {
                            {
                                arr_52 [i_10] [i_10] [i_11] [i_13] [i_11] [i_10] [i_12] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned char) (signed char)-113)), ((unsigned char)213))), (((/* implicit */unsigned char) ((_Bool) var_8)))));
                                arr_53 [i_10] [i_11] [i_12] [i_11] [i_14] = ((/* implicit */unsigned short) ((int) max((max((((/* implicit */unsigned int) (short)6692)), (3203920811U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_37 [i_10] [i_10])) : (((/* implicit */int) var_7))))))));
                                arr_54 [i_10] [i_11] [i_12] [i_11] [i_14] = ((/* implicit */unsigned short) ((_Bool) (unsigned short)63615));
                                arr_55 [(signed char)9] [i_11] [i_12] [i_13] [i_11] [i_13] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned char i_15 = 3; i_15 < 13; i_15 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_16 = 3; i_16 < 14; i_16 += 4) 
                        {
                            var_18 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / ((-(var_1)))));
                            var_19 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)57344)) / (511)));
                            arr_61 [i_10] [i_11] [i_11] [i_12 + 1] [i_15] [i_15] [i_16] = ((/* implicit */short) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (var_4))));
                            var_20 = ((/* implicit */long long int) ((int) var_2));
                        }
                        var_21 = ((/* implicit */unsigned int) max((max((((var_2) / (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_10] [i_11] [i_12 + 1] [i_12 + 1] [i_15]))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_41 [(unsigned char)5] [(unsigned short)12] [(unsigned char)5]))))))), (((/* implicit */long long int) max((((((/* implicit */int) arr_40 [i_12 - 1] [i_11])) / (((/* implicit */int) var_7)))), (max((511), (((/* implicit */int) (unsigned short)57345)))))))));
                    }
                    for (signed char i_17 = 2; i_17 < 13; i_17 += 4) 
                    {
                        arr_64 [i_10] [i_11] [i_12] [i_17] = ((/* implicit */long long int) ((_Bool) ((_Bool) (!(((/* implicit */_Bool) var_6))))));
                        var_22 &= ((/* implicit */short) ((((/* implicit */int) max((arr_50 [2] [i_11] [i_10] [i_17 - 1] [i_17 - 1] [i_12 - 1] [i_12]), (((/* implicit */signed char) arr_48 [i_17] [i_17] [i_12 + 1] [i_10]))))) > (max((((/* implicit */int) (short)-2)), (-496214926)))));
                        /* LoopSeq 1 */
                        for (long long int i_18 = 0; i_18 < 15; i_18 += 2) 
                        {
                            arr_67 [i_10] [i_11] [i_11] [i_12] [(signed char)7] [i_18] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) 187621912)), (2002707449U)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_2 [i_17 - 2])))))) == (((/* implicit */int) max(((unsigned short)511), (((/* implicit */unsigned short) (_Bool)1)))))));
                            var_23 += ((/* implicit */signed char) (~(max((((/* implicit */int) arr_47 [i_17 - 2])), (arr_58 [i_18] [i_18] [i_17 - 1] [i_10])))));
                            arr_68 [i_10] [i_10] [i_12 + 2] [i_11] [i_18] = ((/* implicit */signed char) (-(max((var_2), (arr_43 [i_10] [i_18])))));
                        }
                    }
                    for (unsigned char i_19 = 3; i_19 < 12; i_19 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_39 [i_19] [10] [i_12])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))) : (((/* implicit */int) (!(((_Bool) var_0)))))));
                        var_25 = ((/* implicit */_Bool) max((-8424845082632690649LL), (((/* implicit */long long int) 1767182184U))));
                        arr_72 [i_10] [i_10] [i_11] [i_12] [i_12 - 1] [i_11] = ((/* implicit */int) var_9);
                        arr_73 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_60 [i_19] [i_19 + 2] [i_11] [i_10])), (arr_39 [i_12 + 3] [i_19 + 3] [i_19 + 1]))), (((/* implicit */long long int) arr_60 [i_11] [i_19 + 3] [i_12] [i_19]))));
                    }
                    for (unsigned short i_20 = 0; i_20 < 15; i_20 += 3) 
                    {
                        arr_76 [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) + (((/* implicit */int) ((((/* implicit */int) arr_1 [i_10] [i_12 + 1])) != (((/* implicit */int) var_6)))))));
                        arr_77 [(_Bool)1] [i_11] [i_11] [(_Bool)1] = arr_69 [i_12] [i_12 + 2] [i_10] [i_20];
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) max((((/* implicit */unsigned short) max(((short)3984), ((short)32761)))), (arr_1 [i_10] [5]))))));
                    }
                    arr_78 [i_11] [i_11] = arr_41 [i_11] [i_11] [i_12 + 4];
                    arr_79 [i_11] = ((unsigned char) (+(((/* implicit */int) var_8))));
                }
            } 
        } 
    } 
}
