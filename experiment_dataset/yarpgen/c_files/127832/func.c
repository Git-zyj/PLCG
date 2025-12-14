/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127832
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
    var_13 = ((/* implicit */short) max((max((((((/* implicit */_Bool) 2871428529U)) ? (940054432U) : (13U))), ((-(2588489690U))))), (1879048192U)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((short) max((arr_2 [9U]), (max((2871428529U), (arr_1 [i_0]))))));
        arr_4 [i_0] = ((unsigned int) (signed char)-60);
        var_14 = ((/* implicit */short) ((signed char) max((1423538770U), (max((1879048192U), (arr_1 [i_0]))))));
        arr_5 [i_0] = var_2;
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    {
                        arr_16 [i_1] = ((/* implicit */unsigned int) (short)10700);
                        var_15 -= ((/* implicit */short) arr_2 [i_1]);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_5 = 1; i_5 < 20; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    {
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_19 [20U] [(short)14] [i_6] [i_7]))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-14364)) ? (min((min((((/* implicit */unsigned int) arr_12 [i_1])), (1423538768U))), (4294967292U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)6813)))));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) arr_18 [20U] [i_5 + 2])))), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-10799))))))) ? (4294967295U) : (((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1124))) : (3479691077U)))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_8 = 1; i_8 < 19; i_8 += 2) 
                        {
                            arr_25 [i_6] [i_1] = arr_12 [i_6];
                            arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((short) var_2)))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_8 [i_8] [i_6] [i_5]))));
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_8] [i_8 - 1] [i_8 - 1] = ((unsigned int) arr_24 [i_1] [i_8 - 1] [i_1] [i_8] [i_8]);
                        }
                        for (signed char i_9 = 4; i_9 < 21; i_9 += 3) 
                        {
                            var_20 = ((/* implicit */short) 2070655093U);
                            var_21 = ((/* implicit */short) arr_2 [i_9]);
                            arr_31 [i_1] [i_1] [i_1] = ((/* implicit */short) (((-(((((/* implicit */_Bool) (short)-32237)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1] [i_5]))))))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)87)))));
                            var_22 = ((/* implicit */short) min((((/* implicit */unsigned int) min((min((((/* implicit */short) (signed char)-8)), ((short)-16174))), (((/* implicit */short) (signed char)-122))))), (((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (short)0))))) ? (max((var_7), (2268201013U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 926345231U))))))))));
                        }
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (-(926345231U))))));
                            var_24 = ((/* implicit */short) ((unsigned int) (-(((/* implicit */int) (signed char)98)))));
                        }
                        for (unsigned int i_11 = 1; i_11 < 20; i_11 += 1) 
                        {
                            var_25 ^= min((((/* implicit */unsigned int) (signed char)-57)), (3005339967U));
                            arr_36 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) min((((unsigned int) ((signed char) (short)20559))), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2591474621U))))))))));
                            var_26 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_10 [i_5] [i_5]))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-57))) <= (926345230U))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(short)16] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_11]))) : (2224312202U)))) ? (1423538763U) : ((-(2503595919U))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_18 [(short)12] [(short)12])), (2330717605U)))) ? (16775168U) : (((unsigned int) 3541315821U)))));
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (signed char)26))));
                        }
                    }
                } 
            } 
        } 
        arr_37 [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */short) min((((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])) - (28799))))), (((/* implicit */int) var_1))))) : (((/* implicit */short) min((((((((/* implicit */int) var_3)) + (2147483647))) << (((((((((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])) - (28799))) + (32909))) - (3))))), (((/* implicit */int) var_1)))));
        var_28 = arr_15 [i_1];
        /* LoopSeq 3 */
        for (short i_12 = 0; i_12 < 22; i_12 += 4) 
        {
            arr_40 [i_12] &= ((/* implicit */short) ((753651469U) >> (((((((/* implicit */_Bool) arr_15 [i_1])) ? (min((4294967265U), (2488222902U))) : (arr_24 [i_12] [i_12] [i_12] [i_12] [i_12]))) - (2488222877U)))));
            var_29 *= ((/* implicit */unsigned int) arr_29 [i_1] [i_1] [i_12]);
            var_30 += ((/* implicit */short) (-(max((var_8), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-6284)))))))));
            var_31 = ((/* implicit */short) (~(((((/* implicit */_Bool) min((arr_15 [19U]), (((/* implicit */unsigned int) (short)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_1] [i_12] [i_12])) && (((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_12] [i_1] [i_12] [i_1] [i_12])))))) : (arr_39 [i_1] [i_1] [i_12])))));
            arr_41 [i_1] [i_1] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4007774017U)) ? (((((/* implicit */_Bool) ((short) 1806744381U))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)-123)))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_12])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_12] [i_12] [i_12] [i_12] [i_1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))))));
        }
        for (signed char i_13 = 1; i_13 < 18; i_13 += 4) 
        {
            arr_46 [i_1] = ((/* implicit */unsigned int) (signed char)99);
            var_32 = (short)-31476;
        }
        for (short i_14 = 3; i_14 < 20; i_14 += 2) 
        {
            var_33 = ((/* implicit */short) min((var_4), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1])))))));
            arr_51 [i_1] [i_14] [i_1] = 1941171380U;
            /* LoopSeq 1 */
            for (unsigned int i_15 = 0; i_15 < 22; i_15 += 4) 
            {
                var_34 = ((3179195846U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_1] [i_14]))));
                arr_54 [i_1] [i_14] [i_1] = (short)-2387;
                var_35 = ((/* implicit */short) max((4159965982U), (4294967295U)));
                /* LoopNest 2 */
                for (short i_16 = 3; i_16 < 19; i_16 += 2) 
                {
                    for (unsigned int i_17 = 1; i_17 < 21; i_17 += 4) 
                    {
                        {
                            arr_63 [i_1] [i_16] [i_1] [i_16] [i_16] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2996386433U)) ? (((/* implicit */int) arr_18 [i_1] [i_17])) : (((/* implicit */int) arr_18 [i_1] [i_17 - 1]))))), (((((/* implicit */_Bool) 0U)) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20)))))));
                            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_1] [i_1] [i_14] [i_14 - 1] [i_17] [(short)1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2996386460U)) ? (8388096U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_14 - 1] [i_14] [i_14] [i_14 - 1] [i_17] [i_14]))))))));
                            var_37 *= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-10311)) ? (var_7) : (arr_39 [i_1] [i_1] [i_1]))), (((/* implicit */unsigned int) var_10))))) ? (arr_8 [i_1] [i_1] [i_1]) : (min((((/* implicit */unsigned int) (signed char)-8)), (19U))));
                        }
                    } 
                } 
                var_38 ^= ((/* implicit */unsigned int) min(((-(((/* implicit */int) (short)-32764)))), ((-(((/* implicit */int) arr_32 [i_14 + 2] [i_14 - 2] [i_14 + 2] [i_14 + 2] [i_14 + 2]))))));
            }
        }
    }
    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (short)-31715))) ? (((((var_4) / (var_2))) * (8U))) : (min((((unsigned int) var_3)), (var_9)))));
}
