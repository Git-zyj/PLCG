/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175341
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
    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_14))) ? (((/* implicit */int) min((((/* implicit */short) var_5)), (var_4)))) : (((/* implicit */int) var_7))))) ? (var_12) : (var_12)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 4; i_2 < 18; i_2 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) var_14);
                                arr_16 [i_0] [i_1] [i_2 - 3] [i_0] = ((/* implicit */unsigned int) ((var_17) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1]))));
                                arr_17 [i_1] [i_1] [i_1] = ((/* implicit */signed char) 4294967295U);
                                var_21 = ((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_2 + 1] [7] [5LL] [i_4]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (+(616043550U))))));
                }
                /* vectorizable */
                for (short i_5 = 4; i_5 < 18; i_5 += 4) /* same iter space */
                {
                    var_23 -= ((((/* implicit */_Bool) arr_12 [i_0] [i_5 - 1] [i_0] [i_5 - 3])) || (((/* implicit */_Bool) (unsigned short)10414)));
                    /* LoopSeq 4 */
                    for (unsigned int i_6 = 1; i_6 < 18; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */int) var_8);
                        var_25 += ((/* implicit */unsigned char) ((var_0) | (arr_19 [i_1] [i_6 - 1] [i_5 - 4] [i_1])));
                        var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (arr_15 [i_0] [i_0] [i_5] [i_5 - 4] [i_6] [11] [i_5 - 4]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_5] [(_Bool)1] [6U] [i_5]))))));
                        arr_22 [16U] [i_1] [i_1] = ((/* implicit */unsigned int) arr_1 [i_1]);
                    }
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_8 = 1; i_8 < 18; i_8 += 3) 
                        {
                            arr_28 [i_5] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_5 - 1] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8]))));
                            arr_29 [(signed char)17] [i_1] [10] [i_1] [i_8] = (~(arr_23 [i_1] [i_1] [i_5 - 1] [i_5 - 2]));
                        }
                        for (unsigned int i_9 = 3; i_9 < 17; i_9 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned int) var_16);
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0] [i_5 - 2] [i_9 - 3] [i_9 - 3] [i_9 + 2] [i_9 - 3] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))) : (var_8)));
                            arr_32 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_25 [i_5 - 2] [i_9 - 2] [15U] [i_9 - 2] [i_1] [i_9 - 2] [i_9 - 2]);
                        }
                        for (int i_10 = 1; i_10 < 17; i_10 += 2) 
                        {
                            arr_36 [i_0] [i_0] [i_1] [i_7] = ((/* implicit */unsigned int) var_6);
                            arr_37 [i_1] [i_1] [7ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 616043550U)) ? (((/* implicit */int) (unsigned short)29098)) : (((/* implicit */int) (unsigned short)61625))));
                            var_29 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1071689159)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_10 [i_7] [i_7] [i_7] [i_7])))))));
                            var_30 = ((/* implicit */int) ((signed char) (signed char)2));
                            var_31 = ((((/* implicit */_Bool) ((unsigned short) 1ULL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5 - 1] [i_5 - 1] [i_10 + 2] [i_10 - 1] [i_10 - 1]))) : (((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))));
                        }
                        arr_38 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (-(57820694266204155ULL)));
                        arr_39 [i_0] [i_1] [i_5] [i_7] = ((/* implicit */_Bool) (+(var_12)));
                        arr_40 [i_0] [(_Bool)1] [2LL] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_30 [i_5 - 4] [i_5 + 1] [i_5] [i_5] [i_5 - 4])) % (((/* implicit */int) arr_30 [i_5] [i_5 + 1] [i_5] [7LL] [i_5 - 3]))));
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_33 [i_5] [i_5 - 4] [i_7] [i_5 - 4] [i_5 - 3])))))));
                    }
                    for (int i_11 = 2; i_11 < 18; i_11 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) != (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_11 - 2]))))));
                        arr_44 [(unsigned short)3] [i_1] [i_1] [i_11 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)105))))) && (((/* implicit */_Bool) -1373456782))));
                        arr_45 [i_0] [(short)0] [i_1] [i_11 - 2] = ((/* implicit */int) arr_41 [i_1]);
                    }
                    for (int i_12 = 2; i_12 < 18; i_12 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_34 [i_12 + 1] [i_12 + 1] [i_0] [(unsigned char)14])))))));
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5 - 4] [i_5 - 1] [i_5 - 3] [i_5])) ? (((((/* implicit */long long int) ((/* implicit */int) var_9))) | (4676640326027680655LL))) : (arr_20 [i_1] [i_12 - 2] [i_12 + 1] [i_12 - 1])));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_13 = 4; i_13 < 16; i_13 += 3) 
                    {
                        arr_50 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((_Bool) arr_26 [(short)15] [i_1] [i_13 + 2] [i_13] [i_13 - 2]));
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) var_11))));
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) var_5))));
                    }
                }
                for (short i_14 = 4; i_14 < 18; i_14 += 4) /* same iter space */
                {
                    arr_53 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_46 [i_14 + 1] [i_14 - 2] [(unsigned char)5] [11U] [i_14 + 1] [i_14 - 4]))));
                    var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), (arr_35 [16]))))));
                }
                var_39 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_4)), (((unsigned int) ((((/* implicit */_Bool) 2097088U)) ? (((/* implicit */int) arr_49 [i_0] [i_1] [(unsigned short)12])) : (1971998365))))));
                var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_12 [i_1] [i_0] [i_1] [i_1]) ^ (arr_12 [i_1] [i_1] [i_1] [i_1])))) ? (max((arr_12 [i_1] [i_0] [i_0] [i_1]), (arr_12 [i_1] [i_1] [i_1] [(unsigned short)9]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_43 [i_0] [i_1] [i_0] [i_1]) == (arr_43 [i_0] [i_1] [i_1] [(signed char)9])))))));
            }
        } 
    } 
}
