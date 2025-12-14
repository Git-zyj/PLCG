/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154498
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
    var_13 = ((/* implicit */unsigned char) max((var_1), ((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_12))))))));
    var_14 = ((/* implicit */int) var_9);
    var_15 = ((((/* implicit */_Bool) var_5)) ? (var_0) : (((((/* implicit */_Bool) -1449238453)) ? (((((/* implicit */int) var_4)) / (((/* implicit */int) var_4)))) : (((/* implicit */int) ((unsigned short) var_10))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 24; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((-1434898195), (((/* implicit */int) (unsigned short)65517)))))));
                        arr_9 [i_0 - 2] [24] [i_0 - 2] [24] [i_1 + 3] |= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0 - 1] [(_Bool)1] [i_0 + 1])) : (((/* implicit */int) max((var_12), (var_7))))))));
                        arr_10 [i_0] [i_0] [i_2] [i_0 - 2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_3] [(unsigned char)0] [(unsigned char)0] [i_1 + 1] [(unsigned char)0])) ? (((((/* implicit */_Bool) (short)-6166)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)255)))) : (max((var_0), (((/* implicit */int) (unsigned short)65526))))));
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41))) * (min((((((/* implicit */unsigned long long int) var_1)) * (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0] [(unsigned char)19]) : (((/* implicit */int) arr_4 [i_3] [i_1] [i_2])))))))))));
                        var_18 |= 9223372036854775808ULL;
                    }
                } 
            } 
            var_19 *= ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_1 + 1] [i_1] [i_1] [i_1] [i_1]))));
        }
        /* vectorizable */
        for (signed char i_4 = 2; i_4 < 22; i_4 += 3) /* same iter space */
        {
            var_20 += ((/* implicit */unsigned int) (-(((unsigned long long int) arr_5 [(unsigned short)0] [i_4 + 1] [i_0]))));
            arr_14 [i_0] [i_4 - 2] = ((/* implicit */unsigned long long int) var_4);
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_12);
        }
        /* LoopNest 2 */
        for (unsigned char i_5 = 2; i_5 < 24; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                {
                    arr_21 [i_0] [20ULL] [14U] [(unsigned short)15] = ((/* implicit */unsigned int) var_1);
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_0))));
                }
            } 
        } 
    }
    for (unsigned char i_7 = 3; i_7 < 21; i_7 += 2) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_22 [i_7 - 2])), ((unsigned short)0)))))))));
        var_23 = ((/* implicit */unsigned short) 844152194);
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_8 = 2; i_8 < 13; i_8 += 1) 
    {
        arr_28 [i_8] [i_8 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) min((var_2), (var_5)))) : (((((/* implicit */int) arr_11 [i_8 + 3])) / (((/* implicit */int) var_9))))));
        arr_29 [i_8] [i_8] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_5)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_8 - 2]))) : (18446744073709551615ULL)))));
        var_24 ^= ((/* implicit */short) (unsigned short)35);
        var_25 ^= ((/* implicit */short) arr_18 [i_8 + 1] [i_8 - 2] [i_8 - 1]);
        /* LoopNest 3 */
        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 4) 
                {
                    {
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_11] [(signed char)15] [i_11] [i_11] [i_11 + 2] [i_11])) ? ((-(((/* implicit */int) arr_7 [i_11] [i_11] [i_11] [i_11] [i_11 + 2] [(unsigned char)11])))) : (((((/* implicit */_Bool) arr_7 [i_11] [i_11] [i_11] [17ULL] [i_11 + 2] [i_11])) ? (((/* implicit */int) (short)-31055)) : (((/* implicit */int) arr_7 [(unsigned short)23] [i_11] [i_11] [i_11] [i_11 + 4] [(unsigned short)23])))))))));
                        arr_38 [i_10] |= ((/* implicit */_Bool) max((((844152194) / (((/* implicit */int) arr_27 [i_8 + 3])))), (((/* implicit */int) min((arr_35 [i_8 + 3] [(_Bool)1] [i_10] [i_11 + 4] [i_11]), (arr_35 [i_8 + 3] [i_9] [i_8 + 3] [i_11 + 4] [(_Bool)1]))))));
                        arr_39 [i_9] = ((/* implicit */_Bool) 18446744073709551615ULL);
                    }
                } 
            } 
        } 
    }
    for (int i_12 = 4; i_12 < 8; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_13 = 1; i_13 < 6; i_13 += 2) 
        {
            for (unsigned char i_14 = 0; i_14 < 10; i_14 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        for (unsigned long long int i_16 = 2; i_16 < 8; i_16 += 1) 
                        {
                            {
                                var_27 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_13 + 1] [i_16 - 2])) ? (((/* implicit */int) arr_36 [i_16 + 2])) : (((/* implicit */int) arr_36 [i_16 + 2]))))) ? (((/* implicit */int) arr_17 [i_13 + 2])) : (((/* implicit */int) max((arr_36 [i_16 - 1]), (((/* implicit */unsigned short) (unsigned char)198)))))));
                                var_28 ^= ((/* implicit */unsigned char) ((unsigned short) (short)(-32767 - 1)));
                                var_29 = ((/* implicit */_Bool) max(((-(arr_6 [i_13 + 4] [i_12 + 2] [i_16 + 1]))), (arr_6 [i_13 + 3] [i_12 - 2] [i_16 + 2])));
                                var_30 = arr_35 [i_12] [i_12 - 2] [i_12] [i_12] [i_12 - 1];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 10; i_18 += 1) 
                        {
                            {
                                arr_59 [i_12] [i_17] [i_14] [i_13] [2] [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_12 - 2] [i_13] [i_13 - 1])) ? (arr_6 [i_12 - 1] [i_13] [i_13 + 4]) : (arr_6 [i_12 - 1] [i_12 - 1] [i_13 + 1]))))));
                                arr_60 [i_12 - 2] [i_13] [i_12 - 2] [i_12] [i_12 - 2] [i_12 - 2] [i_12 - 2] = ((/* implicit */int) ((((/* implicit */unsigned int) 1204290629)) / (2122552066U)));
                            }
                        } 
                    } 
                    arr_61 [i_12] [i_12] [i_14] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [9LL] [i_12 + 2])) ? (((((/* implicit */_Bool) arr_3 [i_12 - 2] [i_12] [i_12 - 2])) ? (((/* implicit */int) (short)23267)) : (var_0))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_45 [i_14])) : (((/* implicit */int) var_8))))))));
                }
            } 
        } 
        var_31 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_12])) ? (((((/* implicit */_Bool) arr_0 [(unsigned short)14])) ? (((/* implicit */int) arr_17 [i_12])) : (((/* implicit */int) arr_17 [i_12 - 4])))) : ((~(((/* implicit */int) (signed char)-10))))));
    }
}
