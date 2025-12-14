/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17343
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (signed char)84))) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (signed char)-126))));
        var_20 &= ((/* implicit */unsigned char) max((((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-30748)) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) (signed char)6)))))), ((~(-2147483638)))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)118))))) ? (((/* implicit */int) arr_11 [i_1] [(signed char)8] [(signed char)8] [i_1])) : (((/* implicit */int) ((unsigned short) var_16)))));
                        arr_13 [13LL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_1] [i_1]))))) ? (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_4 [i_1])))))) : (arr_5 [i_1])));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        arr_16 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) var_1)) : (var_0)))) : (((long long int) var_14))));
                        var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_9)) : (-2147483611)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (var_3))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)36)))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        arr_20 [i_1] [i_2] [i_1] [i_6] = ((/* implicit */_Bool) var_3);
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_11))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) arr_19 [i_7] [i_2] [i_3] [4U]);
                            var_25 = ((/* implicit */unsigned int) arr_14 [i_1] [i_2] [i_3] [8] [8]);
                            arr_23 [i_1] [(unsigned short)14] [i_3] [i_6] [i_7] = (~(((((/* implicit */_Bool) (short)-14850)) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) (signed char)-116)))));
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            arr_26 [(short)5] [i_8] [i_6] [(unsigned char)4] [(_Bool)1] [i_2] [i_1] = ((/* implicit */unsigned long long int) var_2);
                            var_26 = ((/* implicit */unsigned char) var_7);
                            var_27 = ((/* implicit */unsigned long long int) arr_7 [(unsigned short)3] [i_3]);
                            var_28 = ((/* implicit */short) ((unsigned long long int) (_Bool)1));
                            arr_27 [i_2] [i_2] [(short)3] [i_2] = ((/* implicit */short) ((var_1) % (((/* implicit */int) arr_24 [i_8] [i_6] [i_3] [i_2] [i_1]))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_32 [i_1] [14] [i_1] [i_6] [(unsigned char)4] = ((/* implicit */unsigned long long int) (-(arr_22 [i_1])));
                            var_29 = ((/* implicit */unsigned short) 2147483647);
                            var_30 = min((((arr_11 [8LL] [(unsigned short)11] [(unsigned short)11] [8LL]) ? (((/* implicit */int) arr_11 [i_1] [i_2] [i_6] [i_9])) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])))), (((arr_11 [i_1] [i_1] [i_1] [(signed char)19]) ? (((/* implicit */int) arr_11 [i_9] [i_6] [i_1] [i_1])) : (((/* implicit */int) var_16)))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            arr_35 [i_1] [i_2] [i_3] [i_6] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)189))));
                            var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_21 [i_1] [i_2] [i_3] [i_3] [i_1] [i_6] [i_10]))));
                        }
                    }
                    for (short i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
                    {
                        arr_39 [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) (+(var_3)));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 21; i_12 += 1) 
                        {
                            arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] = ((int) (+(((/* implicit */int) (signed char)79))));
                            arr_43 [5U] [5U] [i_12] [i_1] [i_3] [i_3] = ((/* implicit */short) (!(((_Bool) var_18))));
                            var_32 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [i_3] [i_12] [i_3] [i_11] [i_12] [i_12]))));
                            arr_44 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        for (unsigned int i_13 = 0; i_13 < 21; i_13 += 2) 
                        {
                            arr_47 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) (_Bool)1)));
                            var_33 = ((/* implicit */long long int) var_7);
                            var_34 = ((/* implicit */signed char) var_10);
                            var_35 = ((/* implicit */int) ((short) 3101970748972634231LL));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_50 [i_1] [i_1] [i_2] [i_3] [i_11] [i_14] = ((/* implicit */unsigned int) var_14);
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)14)), (-2098866734)))) ? (((/* implicit */unsigned long long int) max((((long long int) (_Bool)1)), (((/* implicit */long long int) ((int) var_18)))))) : (arr_17 [i_11] [i_3] [i_1])));
                        }
                    }
                    for (short i_15 = 0; i_15 < 21; i_15 += 4) /* same iter space */
                    {
                        var_37 = ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
                        var_38 = ((/* implicit */short) ((arr_14 [i_1] [i_1] [11U] [i_1] [i_1]) ? (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_8))))) : ((-(var_10)))));
                        var_39 = (~(((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)242)))));
                        arr_55 [i_1] [i_1] [i_2] [i_2] [5] [i_15] = ((/* implicit */short) var_5);
                        /* LoopSeq 4 */
                        for (unsigned char i_16 = 0; i_16 < 21; i_16 += 1) 
                        {
                            var_40 -= ((/* implicit */unsigned short) var_3);
                            var_41 = var_15;
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_42 |= ((/* implicit */_Bool) (~(0ULL)));
                            var_43 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_6), (((/* implicit */short) ((_Bool) arr_28 [i_1] [i_15] [i_3] [i_2] [i_1])))))) ? (((((/* implicit */_Bool) var_12)) ? (((long long int) 1156049353U)) : (((/* implicit */long long int) arr_36 [(signed char)13] [i_2] [i_3] [i_15] [i_15] [i_17])))) : (((/* implicit */long long int) -1011388481))));
                        }
                        /* vectorizable */
                        for (long long int i_18 = 3; i_18 < 19; i_18 += 2) 
                        {
                            var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)66))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_19)) >= (arr_28 [(short)3] [i_2] [i_3] [i_15] [i_18])))) : (((/* implicit */int) (!((_Bool)1))))));
                            var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483638)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_19))))) : (((int) 2317352632U))));
                            var_46 = ((/* implicit */unsigned short) ((short) arr_48 [i_18 + 1] [i_18 + 1] [13U] [i_18 - 3] [i_15] [i_15] [i_3]));
                            var_47 = ((/* implicit */short) 3138917943U);
                        }
                        /* vectorizable */
                        for (unsigned short i_19 = 0; i_19 < 21; i_19 += 4) 
                        {
                            var_48 = (-(((unsigned long long int) (unsigned short)22053)));
                            var_49 = ((/* implicit */short) var_19);
                            var_50 = ((unsigned short) ((unsigned long long int) var_0));
                            arr_67 [i_1] [(unsigned char)9] [i_1] [i_1] [i_19] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_14))))));
                        }
                    }
                }
            } 
        } 
        var_51 = ((/* implicit */_Bool) var_14);
        var_52 *= ((/* implicit */unsigned int) var_7);
    }
    /* LoopSeq 1 */
    for (unsigned short i_20 = 2; i_20 < 24; i_20 += 2) 
    {
        arr_72 [i_20] [(unsigned short)22] = ((/* implicit */unsigned long long int) (+(((int) (~(arr_69 [i_20]))))));
        var_53 *= ((/* implicit */signed char) var_9);
        var_54 = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned long long int) -3122025550879062893LL))) ? (min((((/* implicit */long long int) arr_71 [i_20])), (var_17))) : (((/* implicit */long long int) var_10)))) > (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)-16)) && (((/* implicit */_Bool) (short)-26367))))))))));
        var_55 = ((/* implicit */signed char) var_18);
    }
    /* LoopSeq 1 */
    for (long long int i_21 = 2; i_21 < 17; i_21 += 1) 
    {
        var_56 = ((unsigned char) ((short) ((unsigned char) var_13)));
        var_57 = ((/* implicit */int) (unsigned short)42173);
    }
}
