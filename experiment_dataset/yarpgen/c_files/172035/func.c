/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172035
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(((unsigned long long int) (short)-19138))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_10 = ((/* implicit */short) ((arr_4 [i_0]) & (((/* implicit */int) arr_1 [i_0]))));
            var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1]))));
            var_12 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_4 [i_0]) : (((/* implicit */int) arr_1 [i_0]))))));
            arr_5 [i_0] [i_1] = ((((/* implicit */_Bool) ((long long int) (unsigned char)255))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19138))) : (8479291180664472500LL))) : (((/* implicit */long long int) 1145391915)));
            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) arr_3 [(unsigned char)8] [(unsigned char)8]))));
        }
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_14 = ((/* implicit */int) (((-(arr_7 [i_0] [i_2]))) / (((/* implicit */long long int) ((((/* implicit */int) (short)-19148)) | (arr_4 [i_2]))))));
            var_15 = ((/* implicit */unsigned char) ((short) (unsigned short)17467));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 4) 
                {
                    {
                        arr_15 [i_4 - 2] [i_3] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) arr_8 [i_3] [i_2]);
                        var_16 = (short)19138;
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 6806473810444862711LL)) ? (((((/* implicit */_Bool) (short)19138)) ? (508447459U) : (((/* implicit */unsigned int) -2147483636)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2046))))))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
                        {
                            var_18 += ((/* implicit */unsigned char) ((((/* implicit */int) ((1073741823ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)511)))))) ^ (((/* implicit */int) arr_14 [i_8] [i_7] [i_5] [i_0]))));
                            arr_26 [i_0] [13] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */long long int) var_4);
                        }
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_0] [i_6] [i_7] [(unsigned char)6])) >> (((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])) - (39523)))));
                            var_20 -= ((/* implicit */long long int) ((0LL) != (((/* implicit */long long int) 1711305249U))));
                            var_21 = ((/* implicit */int) arr_14 [i_9] [i_7] [i_0] [i_0]);
                            var_22 += ((/* implicit */unsigned char) (-(((/* implicit */int) (short)19113))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
                        {
                            arr_33 [i_5] [i_5] [i_5] [i_5] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_5]))) | (508447459U)));
                            var_23 = ((/* implicit */short) ((int) (signed char)122));
                            arr_34 [i_0] [i_5] [i_6] [i_7] [i_10] [i_5] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)46039))));
                            var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [(short)18] [(signed char)1] [i_0] [i_0])) ? (arr_12 [(short)12] [i_0] [i_5] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)19138))))))));
                        }
                        arr_35 [i_5] [i_5] = ((((/* implicit */_Bool) arr_27 [i_0] [i_7] [i_6] [i_7] [i_0] [i_7])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1914748250)) ? (((/* implicit */int) (short)-19138)) : (((/* implicit */int) arr_13 [i_0] [i_5] [i_6] [i_7]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_5] [i_6] [i_7]))) / (arr_12 [i_0] [i_0] [i_0] [i_0]))));
                        var_25 -= ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)122)))) ? ((-(arr_17 [i_0]))) : (((/* implicit */unsigned int) arr_22 [i_5]))));
                        arr_36 [i_0] [i_0] [i_5] [14U] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-2147483636)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (-2147483640)))) : (((((/* implicit */unsigned long long int) -2041)) | (arr_20 [i_5] [i_6] [i_6])))));
                    }
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            for (unsigned char i_13 = 2; i_13 < 12; i_13 += 2) 
            {
                {
                    var_26 -= ((/* implicit */unsigned long long int) ((((arr_24 [i_12]) > (((/* implicit */unsigned long long int) arr_31 [i_11] [i_12] [i_13] [i_13 + 1])))) ? (((/* implicit */long long int) 508447459U)) : (((long long int) ((unsigned short) arr_0 [i_13])))));
                    var_27 -= ((/* implicit */unsigned int) arr_32 [i_12]);
                    var_28 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_27 [i_11] [i_12] [i_13 - 2] [i_11] [i_11] [i_11])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_13 - 2] [i_13 - 2]))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_13 - 2] [i_13 + 1])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_14 = 1; i_14 < 11; i_14 += 3) 
                    {
                        arr_50 [(unsigned char)4] [(short)1] [i_11] = ((/* implicit */signed char) ((int) (+(-2147483615))));
                        arr_51 [i_14] [(unsigned char)6] [i_12] [i_12] [7ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_11] [i_11] [i_11])) && (((/* implicit */_Bool) (signed char)111))));
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (signed char)-101))));
                        var_30 += ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)11317))))) ? (((846431226U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_11] [i_11] [i_13] [i_11] [i_11]))))) : (((/* implicit */unsigned int) (+(2147483644))))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 1) 
                    {
                        arr_56 [i_11] [i_11] [i_11] = ((/* implicit */int) arr_25 [i_11] [i_11] [i_12] [i_12] [i_12] [i_13] [i_15]);
                        var_31 += ((/* implicit */unsigned char) arr_27 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]);
                        var_32 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_15])))))) > (min((((/* implicit */unsigned long long int) var_9)), (arr_9 [i_13] [i_12] [i_11]))))))) <= (arr_55 [11U] [i_12] [i_12] [i_12] [i_11])));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_16 = 0; i_16 < 13; i_16 += 3) 
        {
            for (unsigned char i_17 = 0; i_17 < 13; i_17 += 2) 
            {
                {
                    var_33 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_59 [i_11] [8])) ? (((((/* implicit */int) var_0)) * (((/* implicit */int) var_0)))) : (((((-2147483636) + (2147483647))) >> (((arr_49 [i_11]) + (1520817092)))))))) & (arr_57 [i_11] [i_11])));
                    arr_63 [i_11] [i_16] [i_17] = ((/* implicit */unsigned char) (signed char)12);
                    var_34 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 3786519813U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_11] [i_11] [i_11])) ? (432877257) : (((/* implicit */int) arr_52 [i_11] [i_17] [i_16] [i_11]))))) : (1694563858U))), (((/* implicit */unsigned int) (signed char)1))));
                }
            } 
        } 
    }
    var_35 += ((/* implicit */unsigned int) ((short) var_6));
}
