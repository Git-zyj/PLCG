/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12419
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (((-(((/* implicit */int) ((signed char) var_4))))) * (((/* implicit */int) max((min(((unsigned char)143), ((unsigned char)143))), (((/* implicit */unsigned char) (_Bool)1))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 8; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = arr_1 [i_0 + 2];
        var_13 *= ((/* implicit */unsigned char) ((-3550277573871842223LL) / (((/* implicit */long long int) arr_1 [i_0 + 1]))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 4]))) ^ (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_5 [i_1])))));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            arr_15 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) (unsigned short)32011))))));
                            var_15 ^= ((/* implicit */long long int) ((arr_10 [i_4]) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) arr_10 [i_4]))));
                            var_16 += ((/* implicit */unsigned int) (+(62806811312241124ULL)));
                            var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1338807491)) ? (((arr_2 [i_3]) / (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_4] [(unsigned short)6] [i_1] [i_2])))) : (((arr_2 [i_1]) / (1238991123)))));
                        }
                        for (signed char i_5 = 3; i_5 < 11; i_5 += 4) 
                        {
                            var_18 |= ((unsigned short) var_8);
                            arr_19 [i_5] [i_1] [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] = ((arr_1 [i_5 + 1]) / (((/* implicit */int) arr_18 [i_0] [i_0 - 1] [i_5] [i_1] [i_5])));
                            var_19 &= ((/* implicit */unsigned char) arr_4 [i_0 - 2]);
                        }
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */_Bool) (+(arr_21 [(short)6] [i_6] [i_0 + 3] [i_0] [i_0] [i_0])));
                            var_21 = ((signed char) arr_11 [i_6] [i_2] [3U] [i_1] [i_0] [i_0 + 4] [i_0]);
                        }
                        var_22 = ((/* implicit */short) var_8);
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((_Bool) ((int) arr_14 [i_1] [11LL]))))));
                    }
                } 
            } 
        } 
    }
    for (short i_7 = 2; i_7 < 8; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                {
                    var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)11790))))), ((~((~(var_8)))))));
                    arr_30 [i_7] [i_7] [i_8] [i_7] = ((/* implicit */_Bool) arr_22 [i_9] [i_8] [i_9]);
                }
            } 
        } 
        arr_31 [i_7] [i_7] = ((/* implicit */long long int) ((int) (-(((/* implicit */int) ((signed char) arr_16 [i_7] [i_7]))))));
        var_25 *= ((/* implicit */unsigned char) ((unsigned short) (~(arr_22 [8] [i_7 + 3] [8]))));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (long long int i_11 = 1; i_11 < 9; i_11 += 2) 
            {
                {
                    arr_36 [i_7 - 1] [i_10] [i_11] &= ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) -1238991125)) : (var_5))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_4)) + (32275)))))))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)51)))))));
                    arr_37 [i_10] [i_11] [i_11] [i_7 - 2] = var_6;
                    var_26 *= arr_8 [(unsigned char)9] [8LL] [i_11 + 3];
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_12 = 2; i_12 < 8; i_12 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_13 = 1; i_13 < 11; i_13 += 3) 
        {
            var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [(_Bool)1] [i_13 + 1] [(short)10])) ? (arr_22 [(_Bool)1] [i_13 + 1] [(_Bool)1]) : (arr_22 [(unsigned char)4] [i_13 + 1] [(unsigned char)4])));
            /* LoopSeq 2 */
            for (signed char i_14 = 0; i_14 < 12; i_14 += 1) /* same iter space */
            {
                arr_48 [i_12] [i_13 - 1] = ((unsigned short) (unsigned char)109);
                var_28 = ((/* implicit */short) var_7);
            }
            for (signed char i_15 = 0; i_15 < 12; i_15 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) ((((arr_24 [i_13 + 1]) ? (((/* implicit */int) arr_38 [i_12])) : (arr_2 [i_16]))) ^ (((/* implicit */int) var_6))));
                            var_30 = ((/* implicit */long long int) max((var_30), (((((/* implicit */_Bool) arr_47 [i_12 + 1] [(signed char)10] [i_13 - 1])) ? (arr_33 [i_12 + 1] [i_12 + 1] [i_13 - 1]) : (arr_33 [i_12 + 1] [i_13 - 1] [i_13 - 1])))));
                        }
                    } 
                } 
                var_31 += ((/* implicit */unsigned char) ((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4)))));
                /* LoopNest 2 */
                for (signed char i_18 = 1; i_18 < 11; i_18 += 3) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            var_32 = arr_41 [i_12] [i_12];
                            var_33 ^= ((/* implicit */signed char) var_8);
                            var_34 = ((/* implicit */unsigned short) var_9);
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)50)) ? (62806811312241120ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_12])))));
                        }
                    } 
                } 
                arr_62 [i_12] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_4)))));
            }
            var_36 = ((/* implicit */unsigned char) arr_27 [i_13] [i_12 + 1] [i_12 - 2] [(unsigned short)9]);
            var_37 = ((_Bool) (signed char)51);
        }
        for (short i_20 = 0; i_20 < 12; i_20 += 1) 
        {
            arr_65 [i_12] [i_12] [i_20] = ((/* implicit */unsigned char) (unsigned short)31588);
            var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) (unsigned char)68))));
            /* LoopNest 3 */
            for (unsigned long long int i_21 = 1; i_21 < 11; i_21 += 2) 
            {
                for (int i_22 = 1; i_22 < 10; i_22 += 4) 
                {
                    for (short i_23 = 1; i_23 < 11; i_23 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned char) (~(arr_28 [i_12] [i_12 - 2] [i_12 - 2])));
                            var_40 = ((/* implicit */signed char) ((((int) (_Bool)1)) + (((/* implicit */int) arr_45 [i_22 - 1] [i_12] [i_22] [i_22]))));
                            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) arr_50 [i_21] [0]))))))));
                        }
                    } 
                } 
            } 
        }
        var_42 += ((/* implicit */unsigned short) (+(arr_23 [i_12])));
    }
    var_43 = ((/* implicit */unsigned short) ((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_10))))));
}
