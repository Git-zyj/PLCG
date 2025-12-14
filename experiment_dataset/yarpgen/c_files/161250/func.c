/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161250
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
    var_18 = ((/* implicit */unsigned short) var_1);
    var_19 = ((/* implicit */short) ((((/* implicit */int) var_7)) - (((/* implicit */int) (((!(((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) var_14)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                arr_7 [i_0] [i_1 - 3] = var_15;
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) var_6);
                    var_21 = ((/* implicit */short) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_9))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
                    {
                        var_22 = var_0;
                        arr_13 [i_0] [i_2 - 3] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) var_14);
                        arr_14 [i_0] [i_1 - 2] [i_2] [20ULL] [2ULL] = ((/* implicit */unsigned short) ((var_17) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                        arr_15 [(short)5] [i_0] [i_0] [i_0] = ((/* implicit */short) (+((+(((/* implicit */int) var_4))))));
                        var_23 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                    }
                    for (short i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) var_14)) || ((!(((/* implicit */_Bool) var_2)))))))));
                        var_25 = ((/* implicit */unsigned short) var_15);
                    }
                    for (short i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
                    {
                        var_26 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6825))) == (67108863ULL))))));
                        var_27 = var_6;
                        arr_20 [i_0] [(short)18] [(unsigned short)14] [(unsigned short)14] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (var_5)));
                        var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))));
                        /* LoopSeq 4 */
                        for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            arr_24 [i_0] [(short)12] [i_2 - 2] [i_0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) <= (((/* implicit */int) var_16))));
                            var_29 = ((/* implicit */unsigned short) var_4);
                        }
                        for (short i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            arr_27 [i_1] [(short)20] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((var_11) << (((((/* implicit */int) var_3)) - (33226)))))));
                            arr_28 [i_0] [(unsigned short)2] [i_2] [(unsigned short)2] [(unsigned short)15] = ((/* implicit */unsigned short) var_11);
                        }
                        for (unsigned long long int i_8 = 3; i_8 < 18; i_8 += 3) /* same iter space */
                        {
                            var_30 += ((/* implicit */short) ((((((/* implicit */int) var_2)) * (((/* implicit */int) var_4)))) / (((/* implicit */int) var_14))));
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)5670)) ^ (((/* implicit */int) (unsigned short)47656))));
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)4] = ((/* implicit */short) var_17);
                            arr_34 [i_0] [i_1] [i_2] [i_5] [i_0] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_16)) - (((/* implicit */int) var_4)))) >> ((((~(((/* implicit */int) var_13)))) + (178)))));
                        }
                        for (unsigned long long int i_9 = 3; i_9 < 18; i_9 += 3) /* same iter space */
                        {
                            arr_37 [i_9] [i_0] [i_2] [i_0] [i_0] = var_4;
                            var_31 = ((/* implicit */short) var_7);
                        }
                    }
                }
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_11 = 1; i_11 < 18; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            {
                                arr_46 [i_0] [(short)3] [i_10] [i_0] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-5676)) % (((/* implicit */int) var_7))));
                                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_15)))))))) | (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((((/* implicit */int) var_4)) + (3882))) - (2)))))) && (((/* implicit */_Bool) var_10)))))));
                            }
                        } 
                    } 
                    arr_47 [i_0] [i_0] = var_3;
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 1; i_13 < 20; i_13 += 3) 
                    {
                        for (short i_14 = 1; i_14 < 18; i_14 += 2) 
                        {
                            {
                                arr_54 [i_0] [i_13] [i_10] [i_10] [i_1] [(unsigned char)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) == ((((~(((/* implicit */int) var_7)))) * (((/* implicit */int) var_4))))));
                                var_33 = ((/* implicit */short) (((+(((/* implicit */int) var_4)))) + (((/* implicit */int) var_10))));
                                var_34 = ((/* implicit */unsigned char) var_9);
                                arr_55 [i_0] [i_0] [(short)5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((var_17) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_7)))) ^ (((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_15 = 0; i_15 < 21; i_15 += 3) /* same iter space */
                {
                    arr_58 [i_0] = ((/* implicit */unsigned long long int) var_6);
                    arr_59 [i_0] [i_0] [0ULL] [(unsigned short)1] = ((/* implicit */short) var_8);
                    /* LoopNest 2 */
                    for (short i_16 = 1; i_16 < 20; i_16 += 1) 
                    {
                        for (unsigned long long int i_17 = 3; i_17 < 20; i_17 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned short) (((((~((~(((/* implicit */int) var_0)))))) + (2147483647))) >> (((((/* implicit */int) var_3)) - (33224)))));
                                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */int) var_16)) * (((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) ^ ((~(((/* implicit */int) var_14)))))))))));
                                arr_65 [(short)10] [(unsigned char)1] [i_0] [i_1] [(short)10] [i_0] [i_17] = ((/* implicit */unsigned short) (((~(((((/* implicit */int) var_13)) & (((/* implicit */int) var_7)))))) != (((/* implicit */int) var_16))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
