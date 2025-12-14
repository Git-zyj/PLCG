/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133056
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        arr_15 [i_0 - 1] [i_0 - 1] = ((/* implicit */long long int) max((max((1167442325U), (var_0))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_3] [i_1])) : (((/* implicit */int) (unsigned char)76))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((var_17), (((/* implicit */unsigned short) (unsigned char)212))))))))));
                        arr_16 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (unsigned char)76);
                        var_18 -= ((/* implicit */unsigned long long int) var_10);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_17 [i_0] [i_0 + 2] [i_2 - 2] [i_3 - 1] [i_4])) ? (var_7) : (-840995028))));
                            arr_19 [i_0] = (-(((((/* implicit */int) (unsigned short)4320)) | (((/* implicit */int) (_Bool)1)))));
                            arr_20 [i_0] [i_2] [(short)13] = ((/* implicit */signed char) (-(-1456606610251948130LL)));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)33364)) ? (((/* implicit */int) (unsigned short)61215)) : (2067734843))), (((/* implicit */int) (!(((/* implicit */_Bool) -2147483636))))))))));
                        }
                        for (int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                        {
                            arr_24 [i_0] [i_1 + 2] [i_2] [i_3] [i_5] = max((((/* implicit */unsigned long long int) ((int) min((arr_7 [i_0 - 1] [i_1 + 3] [16U]), (((/* implicit */unsigned long long int) var_6)))))), ((+(15901301813740101864ULL))));
                            var_21 = ((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_0] [i_0 + 1] [i_0] [i_0]));
                            var_22 += ((/* implicit */long long int) ((((long long int) arr_2 [i_1 + 1])) == (((((/* implicit */long long int) ((/* implicit */int) var_17))) & (arr_2 [i_1 + 2])))));
                        }
                        for (int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) max((arr_14 [i_2 + 1] [i_1 + 1] [i_2 + 1] [i_1 + 1]), (((/* implicit */int) arr_4 [i_0 - 1] [i_2 + 1]))));
                            var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) (-(max((11214612847855737941ULL), (var_3)))))) ? (arr_12 [i_1 + 2]) : (arr_6 [12ULL])))));
                        }
                    }
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        var_25 = ((/* implicit */signed char) arr_17 [i_1 - 2] [i_2 + 2] [i_1] [i_1 - 2] [(short)19]);
                        var_26 -= (!(((arr_28 [i_0 - 1] [i_0 + 2]) < (410400023))));
                        arr_29 [(unsigned short)18] [i_1 - 1] [i_2] [i_7] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                        var_27 ^= ((/* implicit */_Bool) ((unsigned long long int) var_4));
                    }
                    /* LoopSeq 1 */
                    for (int i_8 = 3; i_8 < 20; i_8 += 2) 
                    {
                        arr_33 [i_0] [i_2 - 1] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_0] [11U] [14LL] [11U])) ? (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_8] [i_2 - 3]))) | (var_3))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 - 1])))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) -1838631470)))))) > (min((-6155830608728114855LL), (4948297232265918066LL))))))));
                        var_28 = arr_1 [i_8];
                    }
                    arr_34 [4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_2 - 1] [i_1]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) 
    {
        for (unsigned char i_10 = 1; i_10 < 9; i_10 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 1; i_11 < 9; i_11 += 2) 
                {
                    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned int) ((((unsigned long long int) (unsigned char)17)) / (((/* implicit */unsigned long long int) 4003254068U))));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_14 [i_9] [i_10] [i_11 + 2] [i_12]))));
                            arr_46 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) var_13);
                            /* LoopSeq 3 */
                            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                            {
                                arr_49 [i_9] [i_9] [i_9] [3LL] [i_9] [6LL] [i_9] = ((/* implicit */unsigned short) var_3);
                                arr_50 [i_13] [i_12] [i_12] [i_11] [(unsigned short)1] [i_9] [i_9] = var_5;
                                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) min((((int) arr_36 [i_9])), (((/* implicit */int) (unsigned short)33526))))) : (((((/* implicit */_Bool) arr_31 [i_10 + 1] [i_10 + 2] [i_11 - 1] [i_11] [i_11 + 2] [i_12])) ? ((-(4123143415U))) : (var_0)))));
                                var_32 = min((((/* implicit */int) var_4)), ((+(((/* implicit */int) (unsigned char)60)))));
                            }
                            for (int i_14 = 1; i_14 < 8; i_14 += 3) 
                            {
                                arr_55 [i_14] [i_12] [(_Bool)1] [5] [(short)6] [i_9] = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_36 [i_10 + 2]))))));
                                arr_56 [i_14] [i_12] [1ULL] [i_9] = ((/* implicit */_Bool) arr_35 [i_10 + 2]);
                                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (short)18137))) ? (((((/* implicit */_Bool) ((short) arr_26 [i_9] [i_9] [i_11] [i_11 + 3] [i_11] [i_9] [19U]))) ? (((int) var_8)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_51 [i_9] [4] [(signed char)11] [(short)5] [i_14])) : (((/* implicit */int) var_17)))))) : (((/* implicit */int) var_6))));
                            }
                            for (unsigned short i_15 = 3; i_15 < 8; i_15 += 3) 
                            {
                                var_34 = ((/* implicit */long long int) min((((/* implicit */signed char) arr_36 [i_10])), (var_6)));
                                var_35 = ((/* implicit */int) min((var_35), ((-(((/* implicit */int) var_12))))));
                                var_36 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */int) (unsigned short)15912)) : (((/* implicit */int) (unsigned char)187)))), (((/* implicit */int) (short)-18138))));
                                var_37 = ((/* implicit */unsigned long long int) max(((unsigned char)141), ((unsigned char)187)));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (int i_17 = 0; i_17 < 12; i_17 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_18 = 0; i_18 < 12; i_18 += 1) 
                            {
                                arr_67 [i_9] [i_9] [i_9] [i_9] [0LL] [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_37 [i_16] [i_9] [i_10 + 3]))));
                                var_38 = ((/* implicit */unsigned short) min((max(((+(arr_59 [(unsigned char)4] [7U] [i_17] [i_18]))), (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (signed char)127))))))), (((int) max((((/* implicit */short) (signed char)-108)), ((short)18137))))));
                                var_39 = ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
                                var_40 = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) -254533664)))));
                                var_41 = ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
                            }
                            for (short i_19 = 0; i_19 < 12; i_19 += 1) 
                            {
                                var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned char)228)))), ((-(((/* implicit */int) (short)-18696))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)94)) ? (6659892392563526275ULL) : (((/* implicit */unsigned long long int) 1334698874))))) ? (17146314752LL) : (2818159783612925007LL))))));
                                var_43 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_17]))) < (-5187447075140850557LL))) && (((/* implicit */_Bool) max((var_7), (((/* implicit */int) var_8)))))))) / (((/* implicit */int) (short)-390))));
                                arr_71 [i_9] [i_10] [i_16] [i_9] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)30188)))) ? (min((arr_1 [i_9]), (16252928))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)3214)) : (((/* implicit */int) var_4))))))) ? (var_7) : (((/* implicit */int) (short)-3214))));
                                var_44 += ((/* implicit */short) (-((-(((/* implicit */int) (short)378))))));
                                var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_7) : ((-(992722041))))))));
                            }
                            for (long long int i_20 = 3; i_20 < 9; i_20 += 1) 
                            {
                                arr_75 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((arr_53 [i_20 + 1] [i_17] [i_16] [i_9] [i_9]) ? ((~(3121567752U))) : (((/* implicit */unsigned int) arr_28 [i_9] [i_9])))) < (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 8156301186991658753LL))))))))));
                                var_46 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_27 [i_20 + 2] [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
                                arr_76 [(short)0] [i_10] [7LL] [i_10] [9U] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_17))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) max((var_9), (((/* implicit */short) var_13)))))))) : (((unsigned long long int) 3264745556U))));
                                var_47 = ((/* implicit */signed char) ((((((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_2)))) == ((+(((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned int) arr_27 [i_9] [i_10] [i_16] [i_17] [i_20])) : ((-(arr_72 [i_20 + 3] [i_20] [i_20] [i_20] [i_20 + 2])))));
                            }
                            arr_77 [i_17] [i_17] [i_10] [i_10] [i_9] = ((/* implicit */_Bool) min((8901681328325017756ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                        }
                    } 
                } 
                var_48 = ((/* implicit */int) ((unsigned char) ((int) ((((/* implicit */_Bool) var_15)) ? (arr_59 [i_9] [i_10] [i_10] [i_10]) : (arr_28 [i_10 + 2] [i_9])))));
            }
        } 
    } 
}
