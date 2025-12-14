/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151493
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */_Bool) var_8);
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                var_17 *= ((/* implicit */unsigned long long int) ((unsigned int) (~(-345689202))));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+(((/* implicit */int) var_16)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    var_19 = ((/* implicit */short) ((signed char) arr_2 [i_2 + 1]));
                    arr_11 [i_3] [i_2 + 1] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) & ((~(arr_6 [i_0] [i_0] [i_0])))));
                }
                arr_12 [i_0] [i_1 + 1] [i_2] = ((/* implicit */signed char) (unsigned char)65);
            }
            /* vectorizable */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_5 = 1; i_5 < 24; i_5 += 2) 
                {
                    arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) < (arr_15 [i_1] [i_5 - 1] [i_5])));
                    var_20 = ((/* implicit */unsigned int) (+(-6405396796160748287LL)));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (_Bool)0))));
                    var_22 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_4 [i_5] [i_1 - 1] [i_0])) | (((/* implicit */int) var_14)))));
                }
                for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_7 = 1; i_7 < 24; i_7 += 1) 
                    {
                        arr_25 [14U] [i_1] [i_4 - 1] [i_6] [14U] = ((/* implicit */_Bool) arr_15 [i_0] [(short)11] [i_4 - 1]);
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_14 [i_4] [i_6] [i_7 + 1]))));
                        arr_26 [i_0] = ((/* implicit */long long int) arr_21 [i_0] [i_0] [i_4] [i_6] [i_7 - 1]);
                        arr_27 [i_0] [(_Bool)1] [i_4 - 1] [(_Bool)1] [i_7] = ((/* implicit */unsigned short) (!((_Bool)1)));
                        var_24 = ((/* implicit */short) min((var_24), (((short) (+(var_8))))));
                    }
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        arr_31 [i_0] [i_1 - 1] [i_0] [i_8] [i_8] [i_6] = ((/* implicit */int) ((_Bool) arr_23 [i_1 + 1] [(unsigned short)15] [i_1 + 1] [i_6] [i_1 + 2]));
                        arr_32 [i_8] [i_6] [i_4 - 1] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((long long int) (_Bool)1)));
                        arr_33 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_8] = ((/* implicit */unsigned long long int) ((long long int) -6405396796160748267LL));
                        var_25 = ((/* implicit */signed char) (~(var_12)));
                    }
                    arr_34 [i_0] [i_0] [15ULL] [(unsigned char)1] [i_6] = ((/* implicit */unsigned int) var_14);
                    arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_11)))));
                }
                arr_36 [i_0] [i_1 + 2] [i_4 - 1] = ((/* implicit */short) ((signed char) ((unsigned int) var_10)));
                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (+(arr_16 [i_0] [6] [i_1 - 2] [7] [i_1] [i_4 - 1]))))));
                var_27 = ((/* implicit */unsigned char) ((arr_10 [1LL] [i_1 + 1] [i_0] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                var_28 = ((/* implicit */short) ((((/* implicit */int) var_16)) & (((/* implicit */int) ((unsigned short) var_16)))));
            }
            /* vectorizable */
            for (unsigned char i_9 = 3; i_9 < 23; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 1; i_10 < 23; i_10 += 2) 
                {
                    for (int i_11 = 3; i_11 < 23; i_11 += 3) 
                    {
                        {
                            var_29 ^= ((/* implicit */unsigned short) (+(var_15)));
                            var_30 -= ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_10 + 2] [i_11 + 1] [i_11 - 1] [i_11] [i_11])) % (((/* implicit */int) var_13))));
                        }
                    } 
                } 
                arr_45 [i_0] [i_1 + 1] [i_0] [i_9] = ((/* implicit */_Bool) ((unsigned int) arr_8 [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 - 1]));
                var_31 ^= ((/* implicit */unsigned int) ((arr_40 [i_1 + 1] [17ULL] [(_Bool)1] [i_9 - 1]) * (((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (unsigned short)46923))));
                            var_33 = ((/* implicit */signed char) (_Bool)1);
                            var_34 = ((/* implicit */unsigned long long int) ((unsigned short) var_9));
                        }
                    } 
                } 
            }
        }
        for (long long int i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            arr_55 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)187)) & (((/* implicit */int) (!(((/* implicit */_Bool) 3791469672U))))))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (((unsigned int) arr_7 [i_0] [i_0] [i_14] [i_0])))))));
            /* LoopSeq 1 */
            for (short i_15 = 0; i_15 < 25; i_15 += 3) 
            {
                var_35 += ((/* implicit */short) var_16);
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 1; i_16 < 23; i_16 += 1) 
                {
                    var_36 += ((/* implicit */unsigned long long int) ((int) arr_23 [i_0] [i_14] [i_15] [i_16 + 2] [i_16]));
                    arr_61 [i_15] [i_14] [i_15] [i_16 - 1] &= ((/* implicit */signed char) arr_17 [i_0] [i_0] [i_0] [i_15] [i_16 - 1]);
                    var_37 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) var_11)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_17 = 1; i_17 < 24; i_17 += 1) 
                    {
                        var_38 = ((((var_0) ^ (((/* implicit */int) arr_24 [i_14])))) ^ (((/* implicit */int) arr_4 [i_16 + 2] [i_16 + 1] [i_17 - 1])));
                        var_39 ^= (-(var_12));
                        arr_64 [i_0] [i_15] [i_16] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(1339557941U)))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_15)))));
                    }
                    /* vectorizable */
                    for (short i_18 = 0; i_18 < 25; i_18 += 1) 
                    {
                        arr_68 [i_0] [i_0] [i_18] [i_16 + 2] [i_18] = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_15 [i_0] [i_18] [i_16 - 1])))));
                        var_40 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                        var_41 ^= ((/* implicit */long long int) ((unsigned char) ((long long int) arr_1 [i_15] [i_16 + 1])));
                    }
                }
            }
            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) var_4))));
            /* LoopSeq 1 */
            for (unsigned short i_19 = 0; i_19 < 25; i_19 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_20 = 1; i_20 < 24; i_20 += 4) 
                {
                    for (unsigned char i_21 = 0; i_21 < 25; i_21 += 1) 
                    {
                        {
                            var_43 ^= ((unsigned short) arr_46 [i_20 - 1] [14U] [i_20 + 1] [i_20 + 1]);
                            var_44 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) var_8))) >> (((min((((/* implicit */int) (unsigned char)133)), ((+(((/* implicit */int) var_3)))))) + (135)))));
                            arr_79 [i_0] [i_20] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)65))))));
                        }
                    } 
                } 
                var_45 = ((/* implicit */unsigned short) (((~(max((((/* implicit */long long int) (_Bool)1)), (-9223372036854775806LL))))) + (((/* implicit */long long int) ((/* implicit */int) max((((unsigned short) var_8)), (((/* implicit */unsigned short) (signed char)-64))))))));
                arr_80 [i_19] [20LL] [(unsigned char)21] = max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_57 [i_0]))))), (((max((((/* implicit */unsigned int) arr_72 [(unsigned char)2] [i_14] [i_19] [i_14])), (2171912902U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_28 [i_0] [i_0] [i_14] [i_14] [i_19])))))));
            }
            var_46 = ((/* implicit */signed char) min(((-(((((var_0) + (2147483647))) << (((var_1) - (2983157609013035452ULL))))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) >= (((arr_14 [i_0] [i_14] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
        }
        /* LoopNest 2 */
        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
        {
            for (unsigned short i_23 = 1; i_23 < 23; i_23 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_24 = 0; i_24 < 25; i_24 += 2) 
                    {
                        for (unsigned char i_25 = 0; i_25 < 25; i_25 += 2) 
                        {
                            {
                                var_47 -= ((/* implicit */signed char) ((int) (-(max((((/* implicit */long long int) (_Bool)1)), (6793934220814976266LL))))));
                                var_48 = ((/* implicit */short) var_14);
                                var_49 = ((/* implicit */unsigned char) arr_67 [i_22]);
                                var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_1)))) && (((/* implicit */_Bool) min((arr_57 [i_23 - 1]), (((/* implicit */short) (signed char)5)))))));
                            }
                        } 
                    } 
                    arr_95 [i_22] [i_23] = ((/* implicit */unsigned long long int) ((max(((~(-345689225))), (((/* implicit */int) ((short) var_2))))) != ((~(((/* implicit */int) max((var_2), (((/* implicit */short) var_9)))))))));
                }
            } 
        } 
        arr_96 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)56)))) * (((/* implicit */int) ((((/* implicit */int) arr_75 [(short)24] [2] [(short)24] [i_0] [i_0] [i_0] [i_0])) != (((/* implicit */int) (_Bool)1)))))))), (((long long int) (~(((/* implicit */int) var_9)))))));
    }
    for (long long int i_26 = 0; i_26 < 17; i_26 += 2) 
    {
        var_51 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        var_52 = ((/* implicit */unsigned char) ((long long int) min((min((((/* implicit */unsigned int) (_Bool)1)), (var_6))), (((/* implicit */unsigned int) ((unsigned short) var_4))))));
    }
    for (long long int i_27 = 3; i_27 < 20; i_27 += 3) /* same iter space */
    {
        arr_102 [i_27 - 1] = ((/* implicit */short) min((var_1), (((/* implicit */unsigned long long int) var_16))));
        var_53 &= ((/* implicit */unsigned char) min((((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_27 - 2] [i_27 - 3] [i_27 + 2] [i_27 + 2])))))), (((((/* implicit */int) arr_20 [i_27 + 1] [i_27 - 2] [i_27 + 2] [i_27 - 2])) / (((/* implicit */int) var_10))))));
    }
    /* vectorizable */
    for (long long int i_28 = 3; i_28 < 20; i_28 += 3) /* same iter space */
    {
        arr_107 [i_28] = ((/* implicit */short) var_3);
        arr_108 [i_28] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
    }
    var_54 = ((/* implicit */_Bool) var_5);
}
