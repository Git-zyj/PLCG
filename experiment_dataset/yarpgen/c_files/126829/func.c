/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126829
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32256)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */int) -8911410466861127940LL);
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            arr_15 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3])) << (((var_4) - (8783345677043434190LL))))));
                            arr_16 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) arr_3 [i_0]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */_Bool) ((arr_13 [i_0] [i_1] [i_0] [i_2] [i_3] [9]) >> (((arr_13 [i_0] [i_3] [i_2] [i_3] [i_0] [i_5]) - (299698682)))));
                            var_16 = ((/* implicit */signed char) (unsigned short)33280);
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) 268510849673963125LL)) ? (arr_5 [i_0]) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)33295))))))))));
                            arr_19 [i_2] = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_3] [i_2])) + (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_2] [10])) == (((/* implicit */int) (unsigned short)33279))))))), (((/* implicit */int) ((signed char) arr_13 [(short)9] [(short)9] [i_2] [i_3] [(short)9] [i_6])))));
                            arr_23 [i_6] [i_2] [i_2] [i_2] [6U] = ((/* implicit */unsigned short) ((arr_20 [i_2] [i_0] [i_2] [i_0] [i_2]) ? (((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_3)))))) : (((/* implicit */int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_2]))))))));
                            arr_24 [i_0] [(signed char)3] [i_2] [i_2] [i_6] = ((/* implicit */short) max((((((/* implicit */_Bool) (short)-25406)) ? (var_2) : (((/* implicit */int) (unsigned short)33280)))), (min((-505505055), ((~(((/* implicit */int) var_1))))))));
                        }
                    }
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        arr_28 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */long long int) 2694619126U);
                        var_19 = ((/* implicit */_Bool) (unsigned short)32255);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_31 [i_2] [7] = ((/* implicit */int) ((((((_Bool) (unsigned short)2296)) ? (((13735289793370390969ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (var_12))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_18 [i_0] [i_2] [i_2] [i_8] [i_0] [i_8]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))))))));
                        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) arr_13 [7] [7] [11LL] [i_2] [i_2] [i_8])))));
                        var_21 = ((/* implicit */_Bool) (+((~((-(((/* implicit */int) arr_18 [i_0] [i_2] [9LL] [(unsigned short)4] [9LL] [(_Bool)1]))))))));
                    }
                    arr_32 [i_0] [i_2] [i_0] = ((/* implicit */int) ((unsigned long long int) (-(max((((/* implicit */unsigned int) var_0)), (var_8))))));
                    var_22 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (short)8192)), (((((/* implicit */unsigned int) arr_25 [i_0] [i_0] [i_2] [i_2])) + (arr_1 [i_0] [i_0])))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) min((arr_11 [i_0] [10] [10] [i_9]), (((/* implicit */unsigned short) (((!((_Bool)0))) && (((/* implicit */_Bool) var_1)))))));
                        arr_35 [i_0] [i_1] [i_2] [i_9] = ((/* implicit */int) ((((_Bool) ((arr_5 [i_0]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned short)54849)) ? (3519006520U) : (1600348169U)))))));
                        arr_36 [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) arr_30 [i_0] [i_2])))));
                    }
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        arr_40 [9ULL] [i_2] [(short)6] = ((/* implicit */unsigned long long int) arr_17 [(short)10] [i_1] [i_2] [i_2] [i_1] [i_2]);
                        arr_41 [i_2] [i_1] [i_2] [i_10] = ((/* implicit */_Bool) min((((unsigned char) ((arr_22 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [(signed char)8] [(_Bool)1] [(signed char)7])))))), (((/* implicit */unsigned char) (((-(arr_5 [i_0]))) < (((/* implicit */long long int) ((/* implicit */int) arr_27 [(_Bool)1] [i_1] [(unsigned char)1] [i_10]))))))));
                    }
                }
            } 
        } 
    } 
}
