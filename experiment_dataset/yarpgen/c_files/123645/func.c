/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123645
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
    var_20 = (!(((/* implicit */_Bool) (unsigned short)63635)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [(unsigned short)5] = ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_18)))), (((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */int) (unsigned short)1901))))))) ? (((29U) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [12LL] [(short)1] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_18))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 5534719583105560845LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967285U)))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_1 [i_0 + 1])))), (((/* implicit */int) (unsigned short)1920))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        var_21 = arr_5 [i_0 + 1] [i_1 - 1] [i_0 + 1] [i_0];
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_8))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) (unsigned short)63654);
                            arr_21 [i_2] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
                        }
                        for (signed char i_7 = 1; i_7 < 11; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) arr_0 [i_0]);
                            arr_24 [i_0] [i_0] [i_0] [0U] [8] = (unsigned char)128;
                            arr_25 [i_0] [(_Bool)1] [2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
                        }
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */_Bool) var_11);
                            var_26 = ((/* implicit */unsigned char) 2147483647);
                        }
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0 + 1] [i_0] [i_1 - 4] [i_0 + 1] [10LL]))));
                            var_28 = ((/* implicit */_Bool) ((unsigned int) (signed char)62));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 4; i_10 < 10; i_10 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) arr_11 [i_0] [i_5] [i_0] [i_0] [i_0]);
                            var_30 = ((/* implicit */short) var_19);
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [(short)1] [(short)1] [i_0] [12] [i_0] [0U] [(unsigned char)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_10] [i_10] [i_10 + 1] [i_10] [i_10 + 1] [(unsigned short)3] [i_0]))) : (arr_35 [0] [0] [i_0] [(unsigned char)11] [0] [i_0] [10LL])));
                            arr_36 [i_0] [(_Bool)1] [i_0] [i_0] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(-2082275689)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (-2082275680) : (((/* implicit */int) (_Bool)1))))) : (var_19)));
                        }
                        arr_37 [i_0] = ((/* implicit */int) ((unsigned int) arr_33 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_0]));
                        arr_38 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(var_6)));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 2; i_12 < 12; i_12 += 3) 
                        {
                            {
                                arr_43 [i_0] [i_0] [(_Bool)0] = ((/* implicit */unsigned char) ((_Bool) min((min((2082275664), (((/* implicit */int) (unsigned short)1890)))), (((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) (unsigned short)52698)) : (((/* implicit */int) (short)-18271)))))));
                                var_32 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 3775071147U)) ? (-2147483640) : (-1277269680)))))) < (1765576718U)));
                                arr_44 [i_0] = (unsigned short)32767;
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_39 [i_0] [i_0] [(unsigned short)11] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 3; i_13 < 11; i_13 += 3) 
                    {
                        for (short i_14 = 0; i_14 < 13; i_14 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) ? (arr_23 [i_0] [(signed char)10] [i_0] [(unsigned short)11] [(signed char)10] [i_13 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) == (((/* implicit */unsigned int) 1277269679))));
                                var_35 = (unsigned short)16383;
                            }
                        } 
                    } 
                    arr_51 [i_1] [i_1] [i_0] = ((/* implicit */short) max((((arr_22 [i_0] [i_0] [i_1 - 3]) ? (((/* implicit */int) (short)-31659)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_1 + 2] [(unsigned short)9] [i_2])))), (((int) 3619056254U))));
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */int) (unsigned short)52698);
    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((4294967289U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) > (((/* implicit */unsigned int) -470572135)))))) ^ (var_19)))));
}
