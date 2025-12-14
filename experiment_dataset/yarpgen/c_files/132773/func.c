/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132773
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_0] [i_0]);
            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (+(((((/* implicit */_Bool) max((var_6), (((/* implicit */int) arr_3 [14ULL] [i_1] [(unsigned char)2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) var_0)))))))));
            var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_11)), (var_6))), (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))));
        }
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_15 = ((/* implicit */short) min((max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (var_2))), ((~(var_2))))), (max(((-(arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_3 = 2; i_3 < 14; i_3 += 4) 
            {
                var_16 ^= ((/* implicit */unsigned long long int) var_6);
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                    {
                        arr_14 [i_2] [i_3] [i_3 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_5]))))))))));
                    }
                    for (short i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                    {
                        arr_19 [11] [i_2] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_3 + 1] [i_3 - 2] [i_3 + 1]))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (var_10) : (var_10)));
                        var_19 &= ((/* implicit */short) var_1);
                        var_20 *= ((/* implicit */unsigned char) arr_12 [i_6] [i_4] [i_3] [i_2] [i_3] [i_2] [i_0]);
                    }
                    var_21 &= (+(((/* implicit */int) var_5)));
                    var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_18 [i_3 + 2] [i_3] [i_3 - 2] [i_3 + 1] [7] [i_3 + 1]))));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_11))));
                }
                /* LoopSeq 2 */
                for (short i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned int) (+(arr_26 [i_7] [i_7] [(_Bool)1] [i_7] [i_7])));
                        var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_0)))))));
                    }
                    for (int i_9 = 1; i_9 < 13; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_11 [i_0] [i_2] [0ULL] [i_0]))))) : (((/* implicit */int) arr_7 [6U] [i_2]))));
                        var_27 = var_11;
                    }
                    var_28 ^= ((/* implicit */unsigned char) var_7);
                }
                for (short i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */int) arr_21 [i_3] [i_10] [i_3] [i_10] [i_3]);
                    arr_34 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (arr_31 [i_0] [i_0] [i_0] [i_2] [i_0] [i_2]) : (((/* implicit */int) arr_12 [i_3] [i_3] [i_3] [i_3 - 2] [i_2] [i_3 + 1] [i_3 - 1]))));
                }
            }
        }
        for (short i_11 = 4; i_11 < 14; i_11 += 2) 
        {
            var_30 += ((/* implicit */short) max((min((min((arr_4 [i_0]), (((/* implicit */unsigned long long int) var_0)))), (arr_5 [i_0] [i_11 + 1]))), (min((((/* implicit */unsigned long long int) var_3)), (arr_26 [i_11 - 1] [i_11 - 2] [i_11 - 2] [i_11 - 2] [8])))));
            arr_37 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((arr_28 [i_0]) >= (((/* implicit */unsigned int) arr_16 [i_0] [(unsigned char)14] [i_11 - 1] [(short)10] [i_11])))))));
            arr_38 [(unsigned char)12] [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) % ((~(var_7))))) < ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_24 [i_0] [i_0] [i_0] [i_11] [i_0])))))));
        }
        /* LoopSeq 2 */
        for (short i_12 = 0; i_12 < 16; i_12 += 3) 
        {
            arr_42 [i_0] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)16461))));
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        arr_48 [i_12] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (((-(((/* implicit */int) arr_23 [i_12] [i_12])))) / ((~(((/* implicit */int) var_3))))))), ((-((~(arr_29 [i_12] [i_12] [i_12])))))));
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) << (((((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_14] [12LL])) - (15149))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 3) 
        {
            arr_51 [i_0] [i_15] = ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]);
            var_32 = ((/* implicit */unsigned char) var_6);
            var_33 *= ((/* implicit */unsigned short) ((var_8) >= (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [i_15])))));
            var_34 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_10))))));
            var_35 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 2) 
    {
        var_36 = ((/* implicit */long long int) arr_52 [i_16] [i_16]);
        arr_54 [i_16] = ((/* implicit */unsigned char) max((max(((-(var_10))), (((/* implicit */unsigned long long int) (~(arr_53 [i_16])))))), (((/* implicit */unsigned long long int) var_6))));
    }
    var_37 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
    var_38 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_8) > (((/* implicit */long long int) ((/* implicit */int) var_11))))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */int) var_5))))) ? (min((((/* implicit */unsigned long long int) var_9)), (var_7))) : (max((var_10), (((/* implicit */unsigned long long int) var_6))))))));
    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_3)))), (var_6)))) || ((!(((/* implicit */_Bool) min((var_8), (var_8))))))));
}
