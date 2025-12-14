/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127083
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
    var_10 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((unsigned long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))) : (9223372036854775807LL)))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_5 [i_0 - 3] [i_0] [i_0]), (arr_5 [i_0 - 2] [i_0 - 2] [i_0])))) ? (((/* implicit */int) ((unsigned short) arr_5 [i_0 + 2] [6U] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775786LL)))))));
                        arr_9 [(unsigned short)22] &= ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
                        var_13 = ((/* implicit */short) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)11))) + (-2374385956643762559LL))));
                        arr_10 [i_0] [i_1] [i_1] [i_1] [6LL] [6LL] &= ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)52261))))), (max((((unsigned int) arr_0 [i_2])), (((/* implicit */unsigned int) 1883980174))))));
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)104)) - (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)160))))));
                            var_15 |= (((~(((((/* implicit */_Bool) 9223372036854775805LL)) ? (3669167257332466988LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-2606))))))) / (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-104)) > (((/* implicit */int) (short)-24575)))))) + (arr_2 [i_0] [i_0]))));
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                        {
                            var_16 *= ((/* implicit */unsigned int) ((((unsigned long long int) (+(2374385956643762562LL)))) | (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) 1883980184)))))));
                            var_17 &= ((/* implicit */signed char) -1883980160);
                            var_18 ^= ((/* implicit */signed char) (-(((int) max((var_8), (((/* implicit */int) arr_5 [i_0] [i_0] [10LL])))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            arr_20 [i_0] [i_0] [i_2] [i_0] [i_7] = ((/* implicit */long long int) ((arr_7 [i_4] [i_4] [i_2 + 3] [i_1 - 1] [i_0 - 2]) < (((/* implicit */int) arr_15 [i_0 - 1] [i_1 + 1] [i_2] [i_2] [i_2]))));
                            var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)14)) ? (-527578530) : (((/* implicit */int) ((unsigned char) 1883980172)))));
                            arr_21 [i_0] [i_1] [i_2] [(unsigned char)5] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_4 [i_1] [i_1] [5U]))) ? (((((/* implicit */long long int) -1883980172)) / (arr_18 [i_0] [i_1] [i_1] [i_0 - 3] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            var_20 = ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) -506935556310715765LL)));
                        }
                        var_21 = ((/* implicit */signed char) var_7);
                    }
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_3 [i_0] [i_0] [i_2]), (((/* implicit */unsigned int) (short)10226)))))))), (((((/* implicit */_Bool) ((12184143273029831999ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_8] [i_1])))))) ? (((int) arr_4 [i_0] [i_2] [i_8])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2 + 2]))))));
                        arr_25 [i_0] [i_1] [i_0] [i_2 - 1] [i_8] = ((/* implicit */unsigned int) ((arr_18 [i_0] [i_0 + 1] [i_2] [(_Bool)1] [i_0]) != ((~(arr_22 [i_0 + 2])))));
                        arr_26 [i_8] [i_1] [i_2] [i_8] &= ((/* implicit */signed char) (+(max((((/* implicit */long long int) ((short) 0))), (((long long int) arr_5 [i_0] [i_1] [i_8]))))));
                        var_23 *= ((/* implicit */int) ((_Bool) ((-9223372036854775786LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-24573))))));
                    }
                    for (int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */short) ((int) arr_23 [i_0] [i_1] [i_2]));
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            var_25 += ((/* implicit */short) (+(max((((unsigned int) 5970882010506384933ULL)), (2869557328U)))));
                            var_26 = ((/* implicit */unsigned long long int) (~(max((min((1883980160), (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-56)))))))));
                            var_27 = ((/* implicit */_Bool) max((max((((((/* implicit */long long int) -1883980172)) / (7715537209857766272LL))), (((/* implicit */long long int) (unsigned short)0)))), (((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_9] [(unsigned short)6] [i_1 + 1])))))));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (+(arr_11 [i_0] [i_0 - 2] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)7))) : (min((((((/* implicit */long long int) ((/* implicit */int) (short)-32489))) + (2374385956643762558LL))), (((/* implicit */long long int) ((((/* implicit */int) (short)-1)) * (1979578841))))))));
                            arr_34 [(short)15] [i_1] [i_0] [i_9] [(short)15] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */int) arr_4 [i_11] [i_0] [i_0])) - (((/* implicit */int) (short)7)))) : ((~(((/* implicit */int) arr_33 [i_0] [i_0] [(short)14] [i_0] [i_0])))))), (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_17 [i_11] [i_9] [i_2] [i_2] [i_1] [i_0]))))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_30 |= ((/* implicit */short) (+(max((((311397380) % (1723604831))), (((/* implicit */int) max(((unsigned short)28055), ((unsigned short)896))))))));
                            var_31 = ((/* implicit */short) ((unsigned char) 3173446889573796888LL));
                            var_32 ^= ((/* implicit */unsigned int) arr_6 [i_9] [i_1] [i_2] [i_9]);
                        }
                        var_33 += ((/* implicit */unsigned int) ((arr_7 [i_0] [i_1] [i_2] [i_9] [i_1]) <= (((/* implicit */int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (15163913236495085230ULL) : (((/* implicit */unsigned long long int) -361938225)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_9] [(_Bool)1] [i_9]))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_13 = 3; i_13 < 21; i_13 += 1) 
                    {
                        arr_39 [i_2] [i_1] [i_2 + 3] [(unsigned short)14] &= ((/* implicit */short) (~(((arr_22 [i_2]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_40 [i_0] [i_1] [i_2] [i_2] [(short)0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_6))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_14 = 3; i_14 < 20; i_14 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 4) 
                        {
                            arr_45 [i_0] [i_0] [i_2] [i_0] = (!(((/* implicit */_Bool) (~(-2374385956643762557LL)))));
                            var_34 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_14] [i_0])) ? (((/* implicit */int) arr_27 [i_0])) : (var_8)))))) ? (max((((arr_42 [(_Bool)1] [i_15]) + (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_14 - 1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)125)) : (975926298)))))) : (((((/* implicit */long long int) ((arr_29 [i_0] [i_2 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ^ ((((_Bool)0) ? (4929644646930832246LL) : (((/* implicit */long long int) 1883980172)))))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 23; i_16 += 4) 
                        {
                            var_35 = ((/* implicit */int) (~(arr_19 [i_16] [i_2] [i_1])));
                            var_36 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-94))));
                            var_37 = max((max((max((-1042359641), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)-10665)))), (((((/* implicit */_Bool) ((arr_28 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))) ? (-311397401) : (((/* implicit */int) ((short) (short)27986))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_17 = 0; i_17 < 23; i_17 += 4) 
                        {
                            var_38 = ((/* implicit */long long int) max((max((max((311397385), (361938230))), (((/* implicit */int) (short)-7742)))), ((~(((((/* implicit */int) (short)-29607)) & (arr_30 [i_17] [i_2])))))));
                            var_39 = ((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */_Bool) 1991396095)) || ((!(((/* implicit */_Bool) 13956791902124754684ULL))))))), ((short)-10665)));
                            arr_50 [i_0] [i_14] [11LL] [(unsigned short)20] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_35 [(short)5] [i_1 + 1] [i_1 - 1] [i_2 + 1] [i_0 - 2]))) >= (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) arr_29 [i_1 + 1] [i_0 + 1])))))));
                        }
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 1) 
                    {
                        arr_54 [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_52 [i_0] [i_1] [i_2] [i_18])) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 18446744056529682432ULL))))) : (((/* implicit */int) var_3)))));
                        arr_55 [i_0] [i_0] [i_2 + 1] [i_18] = ((/* implicit */unsigned int) max((1934589033), (((/* implicit */int) (unsigned short)25815))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_19 = 0; i_19 < 23; i_19 += 4) 
                        {
                            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_0) != (((/* implicit */long long int) ((/* implicit */int) var_5)))))) >= (((/* implicit */int) var_3))));
                            var_41 = ((/* implicit */_Bool) -196842460);
                            arr_58 [i_19] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_0] [i_2 + 3] [(unsigned char)20] [3] [(unsigned char)4] [i_2])) && (((/* implicit */_Bool) arr_37 [i_0] [i_2 + 3] [i_2] [i_18] [17LL] [17]))));
                        }
                        for (unsigned char i_20 = 0; i_20 < 23; i_20 += 2) 
                        {
                            var_42 -= ((/* implicit */int) ((((/* implicit */int) arr_8 [i_0 + 2] [i_1] [i_1] [i_18])) != (((/* implicit */int) (short)10089))));
                            arr_63 [(unsigned char)20] [i_1] [i_1] [6] [i_0] [i_1] [i_1] = ((/* implicit */int) ((max((arr_19 [i_1] [i_1 - 1] [i_1 - 1]), (((/* implicit */long long int) arr_23 [i_1 - 1] [i_1 + 1] [i_1 + 1])))) & (((/* implicit */long long int) ((((/* implicit */int) max(((unsigned short)4052), (arr_27 [i_0])))) * ((+(((/* implicit */int) arr_60 [i_0] [i_1] [i_2] [i_18] [(signed char)3] [i_20])))))))));
                            var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) max((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) max((-6283824233198542574LL), (arr_22 [i_0 - 3])))))))));
                            var_44 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)40427))))) <= (((unsigned long long int) -4929644646930832238LL))))) > (((/* implicit */int) ((short) (_Bool)1)))));
                        }
                        for (unsigned short i_21 = 0; i_21 < 23; i_21 += 3) 
                        {
                            arr_67 [i_0] [i_0] [i_2] [i_18] [i_21] = max((((/* implicit */unsigned long long int) (+((-(arr_0 [i_0])))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) || ((_Bool)1)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))) & (9006683046047981127ULL))))));
                            var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) var_3))));
                        }
                        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                        {
                            var_46 |= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 5039876461883197947ULL)))))));
                            var_47 |= ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) >> (((((/* implicit */int) max((((short) (_Bool)1)), (((/* implicit */short) var_7))))) - (58)))));
                        }
                    }
                    arr_71 [4U] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (8655118709205741757LL)));
                }
            } 
        } 
    } 
}
