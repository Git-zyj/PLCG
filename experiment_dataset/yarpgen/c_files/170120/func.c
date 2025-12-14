/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170120
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 ^= ((/* implicit */int) ((unsigned char) 511));
                /* LoopSeq 4 */
                for (short i_2 = 3; i_2 < 12; i_2 += 3) 
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */int) (unsigned short)65535);
                    var_16 = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) (unsigned short)16)))));
                }
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
                {
                    arr_11 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) max(((short)-30552), (((/* implicit */short) ((((/* implicit */_Bool) (short)30552)) && ((_Bool)0))))));
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_1]))))), (((arr_3 [i_0]) << (((((/* implicit */int) var_4)) + (97))))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_1 + 3] [i_3]))))))));
                }
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                {
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((int) arr_6 [i_0] [i_0] [i_0] [i_0]))))))));
                    var_18 = ((/* implicit */signed char) (!(((((((/* implicit */int) (short)30547)) >= (1534390462))) && (((/* implicit */_Bool) (unsigned short)0))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 3; i_5 < 11; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)63078)))))));
                            arr_22 [i_0 + 1] [(short)1] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */signed char) ((long long int) var_6));
                        }
                        for (unsigned char i_7 = 3; i_7 < 12; i_7 += 2) 
                        {
                            arr_26 [i_0] [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) max(((_Bool)0), ((_Bool)1)));
                            arr_27 [i_0] [6U] [i_4] [i_5 - 2] [i_7] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (!(arr_21 [i_0] [i_1] [i_4] [i_1]))))))));
                            var_20 = ((/* implicit */int) (((+(((unsigned int) var_6)))) > (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)151)))))));
                        }
                        var_21 = ((/* implicit */_Bool) var_2);
                        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)30569))));
                        var_23 -= ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_10 [i_0 + 1] [i_1 - 1] [i_4] [(short)12]))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
                        {
                            var_24 |= ((/* implicit */signed char) arr_5 [i_1]);
                            arr_31 [i_0] = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) * (min((var_14), (((/* implicit */unsigned long long int) var_11)))));
                            var_25 = ((/* implicit */long long int) min((var_9), (((/* implicit */signed char) min((arr_5 [i_0]), (arr_5 [i_0]))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
                        {
                            var_26 += (short)-30569;
                            var_27 -= (-(((/* implicit */int) arr_29 [i_4] [i_4] [0LL] [i_4] [i_9] [i_9] [0LL])));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) /* same iter space */
                        {
                            var_28 -= ((/* implicit */unsigned int) (short)20397);
                            var_29 -= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255))));
                            arr_37 [(unsigned char)12] [6] [i_0] [i_4] [i_0] [i_5 - 3] [i_10] = ((/* implicit */unsigned short) arr_32 [i_5] [i_5 - 3] [i_5 - 3] [i_5 - 2] [i_5 + 2]);
                        }
                        for (long long int i_11 = 2; i_11 < 12; i_11 += 2) 
                        {
                            arr_40 [i_0] [i_4] [i_0] [i_0] [i_5] = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((0U) << (((((/* implicit */int) arr_29 [i_0] [i_0 + 1] [i_0] [(_Bool)1] [i_5 + 1] [i_11] [i_11 - 1])) - (6466)))))) <= (((arr_23 [i_1 + 1] [i_0 + 1] [i_0]) << (((((/* implicit */int) arr_29 [i_0] [i_0 + 1] [i_4] [i_5] [i_5 + 2] [i_0 + 1] [i_11 + 1])) - (6464)))))))) : (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((0U) << (((((((/* implicit */int) arr_29 [i_0] [i_0 + 1] [i_0] [(_Bool)1] [i_5 + 1] [i_11] [i_11 - 1])) - (6466))) + (7916)))))) <= (((arr_23 [i_1 + 1] [i_0 + 1] [i_0]) << (((((((/* implicit */int) arr_29 [i_0] [i_0 + 1] [i_4] [i_5] [i_5 + 2] [i_0 + 1] [i_11 + 1])) - (6464))) + (7935))))))));
                            arr_41 [i_1] [i_1] [i_4] [i_5 + 2] [i_11] |= ((/* implicit */_Bool) var_1);
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_5] [i_4] [i_0] [i_0]))) > (arr_13 [i_0 + 1] [i_1 + 1] [i_5 - 1] [i_0])))) * (((/* implicit */int) ((var_14) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0]))))))));
                            arr_42 [i_0] [i_0] [i_4] [(short)12] [(_Bool)1] [i_11 + 1] = ((/* implicit */unsigned short) max(((-(min((var_1), (var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_0] [(_Bool)1] [i_0] [i_5] [i_5 + 1])) == (((/* implicit */int) max(((_Bool)1), ((_Bool)0)))))))));
                        }
                    }
                    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) /* same iter space */
                    {
                        arr_46 [i_0] [i_0] = (-(((unsigned long long int) arr_21 [i_0] [i_0 + 1] [i_0] [i_0])));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)63078)) >= (((/* implicit */int) (unsigned short)65535))));
                            arr_49 [i_0] [i_0] [i_0] [i_0] = ((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0]))));
                        }
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((short) ((min((3742246463783669LL), (((/* implicit */long long int) arr_7 [i_0] [i_1])))) / (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)94)))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_52 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_11);
                            var_33 = ((/* implicit */int) ((arr_10 [i_0] [i_0] [i_0] [i_1 - 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                            arr_53 [i_0] = ((((2639204290U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) < (arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]));
                            var_34 = ((/* implicit */unsigned int) (+((+(var_3)))));
                            var_35 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-4025))));
                        }
                        arr_54 [i_0] [i_1] [i_4] [i_12] = ((/* implicit */unsigned char) min((((unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_0 + 1] [i_1 - 1])), (((/* implicit */unsigned long long int) max(((unsigned char)255), (((/* implicit */unsigned char) ((_Bool) (_Bool)1))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_15 = 0; i_15 < 13; i_15 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_20 [i_0 + 1] [i_1 + 2] [i_0] [i_1 + 2] [i_1 + 1]))));
                        var_37 = ((/* implicit */int) ((arr_3 [i_0 + 1]) >> (((/* implicit */int) arr_30 [i_0 + 1] [i_0 + 1]))));
                        arr_59 [i_0 + 1] [i_1] [i_4] [i_0] = ((/* implicit */unsigned long long int) var_0);
                        var_38 = ((/* implicit */long long int) ((short) (_Bool)1));
                    }
                    arr_60 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
                    arr_61 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (short)(-32767 - 1));
                }
                /* vectorizable */
                for (unsigned char i_16 = 0; i_16 < 13; i_16 += 2) /* same iter space */
                {
                    arr_64 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) + (9223372036854775807LL)))) || (((/* implicit */_Bool) arr_28 [i_0 + 1] [i_0 + 1] [i_1 - 2]))));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 13; i_17 += 3) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 13; i_18 += 3) 
                        {
                            {
                                arr_70 [i_18] [i_0] [i_0] [i_0 + 1] = ((/* implicit */_Bool) (+(((((/* implicit */long long int) 2639204290U)) + (-1880843980912320774LL)))));
                                arr_71 [i_0] [i_0] [i_0] [i_17] [i_18] = ((/* implicit */int) ((long long int) var_9));
                                arr_72 [i_1] [i_0] [i_16] [i_0] [i_18] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_0] [(signed char)7] [i_16] [i_0 + 1])) >> (((2007667046U) - (2007667024U)))));
                                arr_73 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned short) arr_35 [i_0 + 1]));
                                var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (+(((((/* implicit */int) var_7)) - (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_0 + 1] [i_0 + 1])) * (((/* implicit */int) var_6))));
                    var_41 &= (!(((/* implicit */_Bool) var_0)));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        var_42 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
        arr_77 [i_19] [(_Bool)1] = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) && ((!(((/* implicit */_Bool) (unsigned char)20)))));
    }
}
