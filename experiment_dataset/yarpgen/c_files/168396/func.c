/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168396
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
    var_10 = ((/* implicit */long long int) var_1);
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) var_1)), (var_5)))), (((var_8) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32767))))) : (((16760832ULL) - (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32755))) : (var_0)))))));
    var_12 = ((/* implicit */short) var_1);
    var_13 &= ((/* implicit */long long int) (((~(min((var_0), (((/* implicit */unsigned long long int) -6944012285744515010LL)))))) < (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_1)) & (((/* implicit */int) (short)32763)))), (((/* implicit */int) (short)-32763)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_14 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4479411497029522564LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))));
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) ((unsigned char) (_Bool)1))))) >> (((-1583327839) + (1583327847)))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 2] [i_2]))) : (4479411497029522556LL)))) ? (2000563892502870004LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)-32756))))))))))));
                        arr_13 [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 3]))))) ? (((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_2] [i_0 - 3] [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (16641428149820290971ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 - 3] [i_2] [i_0] [i_0 - 3]))) : (2971286988035401028LL))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max(((-(var_7))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) -4479411497029522563LL)) ? (((/* implicit */int) (short)-32753)) : (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) -2000563892502870005LL)) ? (2971286988035401028LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        arr_17 [(signed char)22] [i_2] [i_2] [i_0 + 1] = ((/* implicit */_Bool) min((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)14)), (((((/* implicit */_Bool) 1567773541)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (144115188075855872LL))))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_5 = 1; i_5 < 23; i_5 += 2) 
                    {
                        arr_20 [i_0] [i_1] [i_5] [i_5] [i_5] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) 34359738367ULL))))), (((((/* implicit */int) ((short) (unsigned short)16376))) ^ (((/* implicit */int) min((var_9), ((short)17142))))))));
                        arr_21 [i_0] [i_1] [i_2] [i_5 + 1] [i_2] [i_1 - 1] = ((/* implicit */short) min((((/* implicit */int) var_3)), (0)));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_7 = 2; i_7 < 24; i_7 += 2) 
                        {
                            arr_29 [i_2] [i_0] [i_2] = ((/* implicit */int) var_5);
                            arr_30 [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)162))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((-2147483634), (1526341098)))))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)224))))), (((unsigned long long int) var_6))))));
                        }
                        for (short i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_2] [i_1 - 2] [i_2] [i_0 - 3])) ? (((/* implicit */int) arr_19 [i_0] [i_1 + 1] [i_2] [i_0 - 3])) : (((/* implicit */int) (short)32767))))) + (min((((/* implicit */unsigned long long int) ((_Bool) 2147483647))), (2425787222396826278ULL)))));
                            var_18 = ((/* implicit */_Bool) ((arr_22 [i_2] [i_6] [(signed char)20] [i_2]) ? (min((((/* implicit */unsigned long long int) (signed char)0)), (34359738368ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2))))));
                        }
                        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_6] [i_0 - 2] [i_6] [i_1 + 1])) ? (35184372088831LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)48))))))));
                    }
                    var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49159)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)32743))));
                }
                for (int i_9 = 1; i_9 < 24; i_9 += 2) 
                {
                    var_21 = ((((((/* implicit */int) ((((/* implicit */int) (short)-32743)) >= (((/* implicit */int) (short)-433))))) << (((((((/* implicit */int) var_4)) << (((((/* implicit */int) (short)-22165)) + (22166))))) - (59))))) == (((/* implicit */int) min((arr_14 [i_9] [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 - 1]), (((/* implicit */short) (unsigned char)107))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        for (short i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            {
                                arr_41 [i_0 - 3] [i_0 - 3] [i_9] [i_1] |= ((/* implicit */short) (~(((/* implicit */int) var_3))));
                                arr_42 [i_9] [i_9] [i_9] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)49159)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16384))) : (-45695362737287799LL)))));
                                var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)124)) : ((~(min((((/* implicit */int) arr_23 [i_0] [i_1] [i_9] [i_10] [i_11])), (var_6)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 3; i_13 < 24; i_13 += 2) 
                        {
                            arr_48 [i_9] [i_1] = ((/* implicit */int) ((long long int) (unsigned short)16356));
                            var_23 = ((/* implicit */long long int) ((((((/* implicit */long long int) 2042547975)) < (-5674116989858387248LL))) ? (((unsigned long long int) (unsigned short)2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_8))))))));
                            var_24 += ((/* implicit */signed char) ((((/* implicit */int) (short)14700)) / (((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) << (((((-1878424824) + (1878424828))) - (4)))))));
                        }
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2042547975)) ? (9223372036854775807LL) : (562949953421296LL)));
                        arr_49 [i_9] [i_9] [(short)12] [i_9] [i_9] = ((/* implicit */_Bool) ((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))));
                    }
                }
                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)84)) ? (9223372036854775799LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-14701)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49159))) : (8345468575608153824LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_3))))));
                arr_50 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((min((((/* implicit */unsigned long long int) -45695362737287799LL)), (min((var_0), (((/* implicit */unsigned long long int) (short)-8213)))))) - (14984513506589352323ULL)))));
                arr_51 [i_0] = ((/* implicit */short) min((min((((/* implicit */long long int) var_1)), (min((arr_39 [i_0] [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)49161)))))), ((~(arr_24 [3LL] [i_1 - 1] [i_0 + 1] [i_0] [i_0])))));
                var_27 += ((/* implicit */long long int) min((((int) arr_8 [i_1 - 1] [i_0 - 1])), (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775799LL)))))));
            }
        } 
    } 
}
