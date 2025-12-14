/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103041
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)79)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) && (((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_4))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_7 [i_0 + 3] [i_1] [i_0] = ((/* implicit */unsigned short) (unsigned char)0);
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 1; i_2 < 12; i_2 += 3) /* same iter space */
    {
        var_17 = -9223372036854775803LL;
        arr_11 [i_2] = ((-4205904074773895678LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            var_18 ^= ((/* implicit */unsigned char) arr_4 [(unsigned char)3] [i_2]);
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                for (short i_5 = 1; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) (_Bool)1);
                            arr_24 [9U] [i_3] [2U] [i_2] [9U] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_11)))) ^ (((/* implicit */int) arr_3 [i_2]))));
                        }
                    } 
                } 
            } 
            arr_25 [i_2] [i_2] = ((/* implicit */short) var_7);
        }
        for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            arr_29 [i_2 - 1] [i_2] = ((/* implicit */_Bool) 7823727120534813997ULL);
            /* LoopNest 3 */
            for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_36 [i_8] [i_7] [i_2] [i_9] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_2 - 1] [i_2 - 1] [8])) ? (((/* implicit */int) ((unsigned short) (unsigned short)22))) : (((((/* implicit */_Bool) max((-32768), (((/* implicit */int) var_7))))) ? ((+(((/* implicit */int) arr_4 [i_2] [i_10])))) : (((/* implicit */int) max((arr_26 [i_2 - 1] [(unsigned short)0] [(_Bool)0]), (((/* implicit */unsigned char) var_7)))))))));
                            var_20 = ((/* implicit */unsigned char) -9223372036854775803LL);
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            arr_39 [i_2] = ((/* implicit */unsigned int) max(((~(((long long int) var_0)))), (((/* implicit */long long int) (_Bool)1))));
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_14 = 1; i_14 < 12; i_14 += 3) 
                        {
                            arr_48 [i_2 - 1] [i_2] [2] [i_2 - 1] = var_13;
                            var_21 ^= ((/* implicit */_Bool) (~(min(((-(((/* implicit */int) arr_13 [i_2 - 1] [i_11] [(_Bool)1])))), ((+(((/* implicit */int) (_Bool)1))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_15 = 0; i_15 < 13; i_15 += 3) 
                        {
                            arr_52 [i_2] [(unsigned short)0] [i_12] [i_13] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -372118485)) ? (7823727120534813997ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12)))));
                            var_22 += ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_2 + 1])) <= (((/* implicit */int) var_9))));
                            var_23 = ((/* implicit */signed char) ((((10623016953174737609ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_2] [i_11] [i_15]))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))));
                        }
                        var_24 -= min((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_11))) ? (((((/* implicit */int) (short)-32758)) | (((/* implicit */int) var_14)))) : (((int) var_12))))), ((+((((_Bool)1) ? (arr_46 [i_13] [i_12] [i_2] [i_2] [6U]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_16 = 0; i_16 < 13; i_16 += 3) 
            {
                for (unsigned short i_17 = 1; i_17 < 12; i_17 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 3) 
                        {
                            arr_61 [i_2] [i_11] [i_16] [6LL] [i_2] = ((/* implicit */unsigned char) min((((((((((/* implicit */long long int) ((/* implicit */int) var_14))) - (30786325577728LL))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) var_15)) < (arr_2 [i_17] [9])))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((7029989419741701411ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))), (var_6))))));
                            var_25 = ((/* implicit */long long int) var_13);
                            arr_62 [(unsigned short)1] [i_11] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16481428197154552157ULL)) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) (_Bool)1))));
                            var_26 = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_11] [i_11] [i_16] [i_2 - 1]))))));
                        }
                        for (unsigned short i_19 = 0; i_19 < 13; i_19 += 3) 
                        {
                            var_27 = ((/* implicit */_Bool) var_0);
                            var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (max((9223372036854775807LL), (((/* implicit */long long int) var_1)))))))));
                            var_29 += ((/* implicit */int) var_0);
                            var_30 += ((/* implicit */unsigned long long int) 70300024700928LL);
                        }
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_17 - 1] [i_17] [i_16] [i_2] [i_2] [i_2] [i_2]))) ^ (((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */unsigned int) var_3)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_45 [i_2] [i_2])))) : (((/* implicit */int) max((((/* implicit */signed char) var_12)), ((signed char)-45)))))))));
                    }
                } 
            } 
        }
    }
    for (long long int i_20 = 1; i_20 < 12; i_20 += 3) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned short) arr_33 [i_20] [i_20] [i_20] [i_20 + 1]);
        /* LoopNest 2 */
        for (unsigned char i_21 = 0; i_21 < 13; i_21 += 3) 
        {
            for (unsigned char i_22 = 2; i_22 < 10; i_22 += 3) 
            {
                {
                    arr_73 [i_20 - 1] [i_20 - 1] [i_20] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_21])) & (((/* implicit */int) var_0))));
                    arr_74 [i_20 + 1] [i_20 + 1] [i_20] [i_20] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned short) arr_18 [i_20] [i_21] [i_22] [i_22]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))) : (((((/* implicit */_Bool) arr_58 [i_20] [i_21] [i_20] [(unsigned short)3] [i_21])) ? (((/* implicit */int) arr_13 [i_20] [0LL] [0LL])) : (((/* implicit */int) var_10)))))), (((((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (signed char)-45))))) << (((((/* implicit */int) arr_66 [i_22] [i_21])) - (161)))))));
                    var_33 = ((/* implicit */short) 1965315876554999458ULL);
                }
            } 
        } 
    }
}
