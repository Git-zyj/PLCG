/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137231
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
    var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) min((var_10), (var_0)))))))));
    var_17 &= ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) (-(-300979103)))), (var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (arr_3 [(unsigned char)1] [i_0 + 1])))) / (1769221710)));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_18 = ((/* implicit */int) (-(max((((arr_3 [i_2] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))))), (((/* implicit */unsigned long long int) min((arr_6 [i_0]), (((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_2])))))))));
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2])) && (((/* implicit */_Bool) arr_7 [i_1])))))) != (((((/* implicit */_Bool) arr_7 [i_2])) ? (8919781766891527273LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1])))))));
                    arr_9 [i_0] [i_1] [i_0] &= ((/* implicit */unsigned short) (-(((/* implicit */int) min((min((arr_0 [i_2]), (((/* implicit */short) (_Bool)0)))), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1])) || (((/* implicit */_Bool) -1769221711))))))))));
                    /* LoopSeq 4 */
                    for (short i_3 = 1; i_3 < 19; i_3 += 3) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                        arr_15 [i_0] [i_2] [i_2] [6LL] = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_0 [i_3 - 1]), (arr_0 [i_3 - 1])))) / ((+(((/* implicit */int) arr_0 [i_3 - 1]))))));
                    }
                    for (short i_4 = 1; i_4 < 19; i_4 += 3) /* same iter space */
                    {
                        arr_19 [(unsigned short)6] [i_1] [(unsigned short)6] [i_2] [i_4] [i_4] = arr_10 [i_0] [i_0] [i_0] [i_0];
                        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 2] [i_0 + 3] [i_0])) != (((/* implicit */int) arr_0 [i_0])))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 19; i_5 += 3) /* same iter space */
                    {
                        arr_24 [i_2] [i_2] = ((/* implicit */long long int) arr_1 [i_1]);
                        arr_25 [i_2] [i_2] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) ((arr_6 [i_0 + 1]) - (arr_6 [i_0 - 2])));
                        arr_26 [i_0] [i_0] [i_0] [2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-2819))));
                        arr_27 [i_0] [i_1] [i_1] [i_5] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0 + 3] [i_1] [i_2] [i_5] [i_2])) && (((/* implicit */_Bool) ((short) (_Bool)1)))));
                    }
                    for (short i_6 = 1; i_6 < 19; i_6 += 3) /* same iter space */
                    {
                        arr_31 [i_2] [(unsigned short)8] [i_2] [i_2] = ((/* implicit */unsigned short) (short)-2819);
                        var_20 = 2147483647;
                    }
                }
                for (int i_7 = 2; i_7 < 18; i_7 += 4) 
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (((-(((/* implicit */int) arr_4 [i_0 - 2] [i_1] [i_7 + 1])))) + (((int) arr_4 [i_0 + 2] [i_1] [i_7])))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 3) 
                    {
                        arr_38 [i_0] [i_1] [i_7] [i_7] = ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_7 - 1])) ? (((/* implicit */int) (unsigned char)119)) : (((2147483647) / (-300979119))));
                        var_22 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) arr_34 [i_0] [i_1] [(unsigned short)4])) < (arr_37 [i_0 + 3] [i_0] [i_0] [i_0] [i_0])))) | (((2147483644) & (((/* implicit */int) var_2))))));
                        var_23 = ((/* implicit */unsigned short) arr_0 [i_0 - 1]);
                    }
                    for (int i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        var_24 &= ((/* implicit */short) (+(((int) arr_13 [i_1] [i_0 + 3] [i_7]))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) < (((arr_1 [i_0 + 3]) / (((/* implicit */int) arr_33 [i_7 - 1] [i_0 + 2]))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(2147483647))))));
                        arr_45 [(short)9] [(short)9] [i_7] &= ((/* implicit */short) (-(((((/* implicit */int) (unsigned char)2)) / (((/* implicit */int) arr_18 [i_0] [i_7] [i_0] [(short)18] [i_0]))))));
                        /* LoopSeq 4 */
                        for (short i_11 = 2; i_11 < 19; i_11 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned short) (unsigned char)255);
                            arr_48 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_11 - 1])) / (((/* implicit */int) arr_7 [i_11 + 1]))));
                        }
                        for (short i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            arr_53 [i_0] [i_1] [i_7] [i_1] [i_1] [i_0] [19ULL] = ((/* implicit */unsigned short) arr_0 [i_10]);
                            arr_54 [i_0] [i_0] = ((/* implicit */int) ((arr_3 [i_0 + 1] [i_7]) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-4746)))))));
                            var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 2395318300U))))) | (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_30 [i_0 - 1] [i_1] [i_0] [0ULL]))))));
                            var_29 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)54715)) + (((/* implicit */int) (_Bool)0)))) + (((/* implicit */int) (short)-25701))));
                        }
                        for (unsigned long long int i_13 = 3; i_13 < 16; i_13 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) arr_1 [i_0]))));
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (((((((~(2147483647))) + (2147483647))) + (2147483647))) >> (((/* implicit */int) arr_35 [i_1] [i_7] [i_10] [i_13 - 3])))))));
                            var_32 ^= ((/* implicit */unsigned long long int) ((unsigned char) arr_17 [i_1] [i_1]));
                        }
                        for (int i_14 = 2; i_14 < 19; i_14 += 1) 
                        {
                            arr_62 [i_0] [i_1] [i_7] [i_14] [i_14] = ((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned short)39944)))) | (arr_1 [i_7])));
                            var_33 ^= ((/* implicit */short) 2147483647);
                            var_34 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)137)))));
                            arr_63 [i_0 + 1] [i_1] [i_7] [i_10] [i_0 + 1] &= ((/* implicit */int) arr_51 [i_0 - 2] [i_0 + 3] [i_0 - 2] [i_0] [i_0]);
                        }
                        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (unsigned char)0))));
                    }
                    for (int i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        var_36 &= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 + 3])))))));
                        arr_66 [i_0] [i_0] [i_15] [i_15] [i_0] = ((/* implicit */unsigned short) ((short) (-(((int) (_Bool)1)))));
                    }
                }
                for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 1) 
                {
                    var_37 = ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)156))))));
                    arr_69 [i_16] [i_1] [i_16] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_43 [(short)19] [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 2] [i_0])), (arr_6 [i_16]))), (((/* implicit */unsigned int) ((unsigned short) arr_52 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_16] [i_0 - 1])))));
                    arr_70 [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) - (((((/* implicit */long long int) -1769221690)) - (arr_50 [i_0] [i_1] [i_16] [i_16] [i_0 - 2] [i_1])))))) || (((/* implicit */_Bool) (+((~(3341156385754040150ULL))))))));
                }
            }
        } 
    } 
}
