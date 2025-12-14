/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121946
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
    var_10 = ((/* implicit */signed char) var_3);
    var_11 = var_3;
    var_12 = (~(((/* implicit */int) ((((/* implicit */int) min((var_9), (((/* implicit */short) (_Bool)1))))) > (((((/* implicit */int) (_Bool)1)) * (-574185347)))))));
    var_13 = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_14 ^= ((/* implicit */unsigned char) (-(arr_0 [10])));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [12ULL]), (arr_0 [(unsigned char)14])))) ? (((/* implicit */int) arr_1 [i_0] [10LL])) : (((/* implicit */int) min(((short)-9136), (arr_2 [i_0])))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) (unsigned char)55)))));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            var_17 = ((/* implicit */short) (~(arr_6 [i_2] [i_2] [i_1])));
            var_18 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [14])) || (arr_7 [i_2] [i_2] [i_2])));
        }
        for (short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1232313018)) ? (1281229654) : (((/* implicit */int) (unsigned char)207))))) >= (arr_3 [i_3])));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    {
                        var_20 *= ((/* implicit */long long int) ((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3])))));
                        arr_17 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    {
                        var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */long long int) 1560813116)) : (arr_21 [i_1] [i_3])));
                        arr_22 [i_7] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_18 [i_1] [i_1]);
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned long long int) ((int) (_Bool)1));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                var_23 = ((/* implicit */_Bool) ((arr_18 [i_1] [i_9]) ? (((var_5) - (var_6))) : (((/* implicit */unsigned long long int) arr_4 [i_1]))));
                /* LoopSeq 3 */
                for (int i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)207)) / (var_3)));
                    var_25 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_15 [i_9]))));
                    var_26 = ((/* implicit */long long int) arr_9 [i_10]);
                }
                for (int i_11 = 0; i_11 < 17; i_11 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_9] [i_11])) * (((/* implicit */int) arr_12 [i_1] [i_8] [i_9]))));
                    var_28 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_1] [i_9])) >= (((/* implicit */int) (_Bool)1))));
                    var_29 = ((/* implicit */unsigned char) var_3);
                    var_30 ^= ((/* implicit */_Bool) var_2);
                }
                for (int i_12 = 0; i_12 < 17; i_12 += 4) /* same iter space */
                {
                    arr_36 [i_1] [(short)4] [(_Bool)1] [i_1] = ((/* implicit */int) var_0);
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_31 = ((/* implicit */signed char) max((var_31), (var_2)));
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (+(arr_14 [i_1] [i_12] [i_9]))))));
                        var_33 = ((/* implicit */unsigned long long int) ((int) var_8));
                    }
                    for (long long int i_14 = 0; i_14 < 17; i_14 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) arr_26 [i_1]);
                        arr_42 [i_1] [i_1] [11] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) arr_40 [i_1] [i_8] [i_8] [i_9] [i_12] [i_14])) ^ (arr_27 [i_1] [i_8] [i_9] [i_12])));
                    }
                    arr_43 [i_12] [i_1] [i_9] [i_1] [i_1] = (i_1 % 2 == zero) ? (((((((/* implicit */int) arr_34 [i_1] [i_1] [i_8] [i_1] [13LL] [i_12])) + (2147483647))) << (((((((/* implicit */int) arr_34 [i_1] [i_8] [i_1] [i_1] [i_9] [i_12])) + (96))) - (12))))) : (((((((((/* implicit */int) arr_34 [i_1] [i_1] [i_8] [i_1] [13LL] [i_12])) - (2147483647))) + (2147483647))) << (((((((((/* implicit */int) arr_34 [i_1] [i_8] [i_1] [i_1] [i_9] [i_12])) + (96))) - (12))) - (154)))));
                }
            }
            for (short i_15 = 0; i_15 < 17; i_15 += 1) 
            {
                arr_47 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_5 [(_Bool)1] [i_8] [(_Bool)1]))) * (((/* implicit */int) arr_9 [i_1]))));
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 17; i_16 += 4) 
                {
                    for (int i_17 = 0; i_17 < 17; i_17 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_1] [i_1] [i_1])) * (((/* implicit */int) arr_7 [i_1] [i_8] [i_15]))));
                            var_36 = ((/* implicit */_Bool) var_3);
                            var_37 = ((/* implicit */short) arr_40 [i_1] [i_8] [i_15] [i_8] [i_8] [i_1]);
                            arr_52 [i_1] [i_1] [i_1] [i_16] [i_1] = ((/* implicit */signed char) var_3);
                            var_38 = (((+(var_5))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_1] [i_1] [(short)5]))));
                        }
                    } 
                } 
            }
            var_39 = ((/* implicit */_Bool) arr_34 [9] [9] [i_1] [i_1] [i_8] [i_8]);
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 2) 
            {
                for (int i_19 = 0; i_19 < 17; i_19 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_20 = 0; i_20 < 17; i_20 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned char) var_3);
                            var_41 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_9 [i_1])) & (((/* implicit */int) arr_37 [i_20] [i_1] [i_19] [i_19] [i_18] [i_1] [i_1])))) << (((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_1] [i_8] [i_8] [i_19] [i_20] [i_18]))) / (var_8)))));
                        }
                        for (short i_21 = 0; i_21 < 17; i_21 += 1) 
                        {
                            arr_63 [i_21] [i_21] [i_1] [i_1] [i_8] [i_1] = ((/* implicit */unsigned char) var_2);
                            arr_64 [i_1] [i_8] [i_1] [i_19] [i_21] = ((/* implicit */signed char) ((arr_14 [i_21] [i_1] [i_8]) / (((((/* implicit */_Bool) arr_21 [i_1] [i_1])) ? (((/* implicit */int) (short)2994)) : (((/* implicit */int) (_Bool)1))))));
                            var_42 = ((/* implicit */unsigned char) ((int) arr_25 [i_1]));
                        }
                        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-2460)) ? (((/* implicit */int) (_Bool)1)) : (-1281229648)));
                        var_44 *= (!(((/* implicit */_Bool) arr_30 [i_1] [i_8] [i_18] [i_19] [i_1] [i_1])));
                    }
                } 
            } 
            arr_65 [i_1] [(signed char)9] [i_1] = ((unsigned char) ((((/* implicit */_Bool) arr_59 [13LL] [13LL] [i_1] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_41 [i_1] [i_1])) : (((/* implicit */int) var_0))));
            /* LoopNest 3 */
            for (signed char i_22 = 0; i_22 < 17; i_22 += 4) 
            {
                for (unsigned long long int i_23 = 0; i_23 < 17; i_23 += 4) 
                {
                    for (unsigned char i_24 = 0; i_24 < 17; i_24 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */int) (((~(((/* implicit */int) (_Bool)1)))) >= ((~(((/* implicit */int) var_7))))));
                            var_46 = ((/* implicit */long long int) (unsigned char)253);
                            var_47 = ((/* implicit */_Bool) var_3);
                            var_48 = ((/* implicit */long long int) var_6);
                        }
                    } 
                } 
            } 
        }
        var_49 = ((/* implicit */unsigned char) ((unsigned long long int) arr_61 [(unsigned char)4] [i_1] [i_1] [i_1] [i_1]));
        arr_73 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [7LL] [(_Bool)1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (var_4)));
    }
    for (unsigned char i_25 = 0; i_25 < 10; i_25 += 2) 
    {
        arr_76 [7] = (~(((/* implicit */int) var_9)));
        var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) var_2))));
    }
}
