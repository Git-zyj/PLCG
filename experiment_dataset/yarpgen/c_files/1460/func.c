/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1460
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_19 -= max((((/* implicit */unsigned long long int) min((arr_2 [i_0 - 1] [i_0 + 2] [i_0 + 2]), (arr_2 [i_0 - 1] [i_0 + 2] [i_0 + 2])))), (min((((unsigned long long int) var_13)), (max((var_0), (((/* implicit */unsigned long long int) var_12)))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_20 *= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 - 2])) ? (13083243898329008358ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2]))))));
                        var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) << (((/* implicit */int) ((((/* implicit */_Bool) ((((var_5) + (2147483647))) << (((((((/* implicit */int) arr_6 [i_3] [i_3] [i_2] [i_1] [(short)8] [i_0])) + (15820))) - (19)))))) && (((/* implicit */_Bool) ((17086924651994457552ULL) + (((/* implicit */unsigned long long int) var_13))))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_22 = (unsigned char)255;
                        var_23 = ((/* implicit */signed char) min(((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_4] [i_2] [i_0])))), (((((/* implicit */int) arr_2 [i_0 - 2] [i_0] [i_4])) + (arr_9 [i_0 - 2] [5LL] [i_1] [i_4] [i_2] [i_2])))));
                        arr_12 [i_0 + 2] [i_4] [i_1] [i_4] = ((/* implicit */unsigned long long int) min((((arr_10 [i_4] [8] [i_0 - 1] [i_4]) + (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_0 - 2]))))), ((+(arr_10 [i_4] [i_0] [i_0 + 2] [i_4])))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)8382), (((/* implicit */unsigned short) max(((signed char)10), (var_14))))))) < (((/* implicit */int) ((unsigned short) arr_9 [i_2] [i_2] [i_2] [i_1] [i_1] [i_0]))))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    arr_17 [i_0] [i_5] [i_5] [i_0 - 3] |= ((/* implicit */short) (-((+(((/* implicit */int) arr_13 [i_0 - 3] [i_1] [i_0 + 2] [i_1]))))));
                    var_25 += ((/* implicit */signed char) ((arr_2 [i_0 + 1] [i_1] [i_5]) ? (((/* implicit */unsigned long long int) (-((~(var_5)))))) : ((~(arr_5 [i_0] [i_0 - 2] [i_5] [i_5])))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_15)) + (2147483647))) << (((((/* implicit */int) arr_16 [i_0 + 2] [i_1] [i_5])) - (63)))))) ? (((/* implicit */int) arr_7 [i_5] [i_1] [i_1] [i_0])) : (((((/* implicit */int) arr_3 [i_0] [i_1])) / (((/* implicit */int) var_10))))))) / ((~(min((1359819421715094075ULL), (((/* implicit */unsigned long long int) var_5))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 1; i_6 < 16; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_7 = 1; i_7 < 16; i_7 += 2) 
                        {
                            arr_23 [i_0] [i_0] [i_7] [i_5] [(unsigned char)1] [i_7] = ((/* implicit */unsigned long long int) var_4);
                            var_27 = ((/* implicit */unsigned long long int) (((-(var_5))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 7634825598866121189ULL)))))));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) var_2))));
                            arr_24 [i_1] [i_7] [i_1] = ((/* implicit */unsigned int) ((unsigned char) max((min((var_15), (var_15))), (((/* implicit */signed char) ((arr_20 [i_7] [i_6 + 3] [i_5] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            arr_29 [i_0] [i_1] [(unsigned short)5] [i_5] [i_6] [i_0] [i_8] = ((/* implicit */unsigned char) arr_21 [i_8] [i_6] [(signed char)10] [i_5] [i_1] [(signed char)10]);
                            arr_30 [i_8 - 1] [i_6] [i_0] = ((/* implicit */_Bool) ((short) var_1));
                            var_29 = ((/* implicit */unsigned int) (_Bool)1);
                        }
                        var_30 += ((/* implicit */long long int) min((max((((/* implicit */int) arr_13 [i_0] [i_0] [i_5] [i_0 - 2])), (arr_9 [i_0] [i_1] [i_5] [i_0 - 2] [i_0] [i_6 - 1]))), ((-(arr_27 [i_0 - 2] [i_0])))));
                        arr_31 [i_0 - 1] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))))))));
                        var_31 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((signed char) arr_18 [i_5]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13002)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14))))))));
                        arr_32 [i_0 - 3] [i_0] [i_0] [i_5] [i_6] = ((/* implicit */signed char) ((int) ((((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 1] [i_0 + 2])) < (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 1] [i_0 + 2])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 1; i_9 < 16; i_9 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((signed char) (signed char)32)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 2; i_10 < 18; i_10 += 2) 
                        {
                            arr_37 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
                            var_33 = ((/* implicit */signed char) (+(arr_25 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 3])));
                        }
                        for (signed char i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_13)) : (8388576ULL))))));
                            arr_41 [i_1] [i_9 + 3] [i_1] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_9 + 3] [i_0 + 2] [i_0] [i_0])) ? (arr_20 [i_9 - 1] [i_9 - 1] [i_11] [i_9 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                            var_35 = ((/* implicit */signed char) var_6);
                            arr_42 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 3] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_15))));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_1] [i_5]))) / (7634825598866121202ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_9 + 3] [i_0 + 1]))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_36 [i_1] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13)))))));
                        }
                    }
                }
                for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) /* same iter space */
                {
                    arr_46 [i_0] [i_1] [i_12] [i_1] = ((/* implicit */unsigned int) ((max((((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((unsigned char) var_3))))) * (((((/* implicit */unsigned long long int) var_13)) * (((((/* implicit */_Bool) var_7)) ? (arr_36 [i_1] [i_0]) : (var_16)))))));
                    var_37 = ((/* implicit */long long int) var_3);
                    var_38 -= ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_6))))));
                }
                for (unsigned int i_13 = 0; i_13 < 19; i_13 += 4) /* same iter space */
                {
                    var_39 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) min((var_15), ((signed char)-114)))))));
                    var_40 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */int) max((var_14), (((/* implicit */signed char) var_4))))) : (((/* implicit */int) (short)15)))));
                    var_41 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_7)), (max((var_0), (((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [i_0 - 3]))))));
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        for (unsigned long long int i_15 = 1; i_15 < 16; i_15 += 2) 
                        {
                            {
                                var_42 = ((/* implicit */long long int) (+(var_0)));
                                arr_55 [i_13] [i_0 - 2] [i_13] [i_1] [i_0 - 2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((0ULL), (max((arr_36 [i_0 - 1] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_15 + 3]))))))) ? (min((((arr_43 [i_15] [i_15 + 3] [i_15]) + (((/* implicit */unsigned long long int) arr_21 [i_0 + 2] [i_1] [i_13] [i_14] [i_14] [i_15])))), (((/* implicit */unsigned long long int) var_18)))) : (((/* implicit */unsigned long long int) ((unsigned int) min((arr_28 [i_0 - 1] [i_1] [i_13] [i_13] [i_14] [i_15]), (((/* implicit */unsigned long long int) (short)8010))))))));
                                var_43 = ((signed char) min(((signed char)32), (((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551611ULL)) && (((/* implicit */_Bool) arr_33 [i_15 + 1] [i_1] [13LL])))))));
                                var_44 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) ^ (min((10811918474843430427ULL), (((/* implicit */unsigned long long int) (+(arr_49 [i_0] [i_1] [i_13] [i_0]))))))));
                            }
                        } 
                    } 
                }
                var_45 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned char)6))))), ((-(((/* implicit */int) (signed char)42)))))))));
                /* LoopNest 3 */
                for (short i_16 = 0; i_16 < 19; i_16 += 4) 
                {
                    for (short i_17 = 2; i_17 < 16; i_17 += 2) 
                    {
                        for (signed char i_18 = 4; i_18 < 18; i_18 += 3) 
                        {
                            {
                                var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) (!((!(((/* implicit */_Bool) arr_3 [i_17 + 1] [i_18 - 2])))))))));
                                var_47 = ((/* implicit */unsigned short) max((arr_9 [i_0] [i_1] [i_16] [i_1] [i_18 + 1] [i_16]), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) < (((((/* implicit */_Bool) arr_15 [i_0 - 3] [i_1])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17146))))))))));
                                var_48 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_2))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_49 = ((/* implicit */unsigned short) (unsigned char)52);
}
