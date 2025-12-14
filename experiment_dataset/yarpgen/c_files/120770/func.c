/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120770
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
    var_11 *= (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 7; i_2 += 3) /* same iter space */
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) (((~((~(var_4))))) >= ((~((~(((/* implicit */int) (unsigned char)94))))))));
                    arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_3)) ^ (var_4)))))) ? ((((~(((/* implicit */int) (unsigned char)8)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((_Bool) var_7))) : (((/* implicit */int) ((var_8) <= (((/* implicit */int) var_3)))))))));
                    arr_11 [i_0] = ((/* implicit */unsigned short) (!((_Bool)1)));
                    arr_12 [i_0] [i_0] [9] = (!((!(((/* implicit */_Bool) var_8)))));
                    var_12 = ((/* implicit */short) ((signed char) (!(((((/* implicit */int) var_9)) > (((/* implicit */int) var_7)))))));
                }
                for (unsigned long long int i_3 = 2; i_3 < 7; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            {
                                var_13 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (var_0)))) ? (((var_1) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (var_0))))))) : (((/* implicit */long long int) ((((_Bool) var_1)) ? (((/* implicit */int) ((short) var_4))) : (var_4)))));
                                arr_21 [i_4] [i_3 + 2] [i_4] [i_4] [i_3 + 2] = ((/* implicit */unsigned char) ((((var_7) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) + (((/* implicit */long long int) ((((var_7) ? (((/* implicit */int) var_2)) : (var_8))) & ((~(((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                    var_14 += ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_0)))))) - (((((/* implicit */int) var_10)) * (((/* implicit */int) var_5))))));
                    arr_22 [i_0] [2] [i_3] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) ((short) var_2)))))));
                    arr_23 [6ULL] [i_1 + 2] = ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_1)))));
                }
                for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        arr_32 [i_1] [i_1] [i_6] [i_7] [i_1] [i_7] = (!(((/* implicit */_Bool) ((long long int) (unsigned char)3))));
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))) * (((/* implicit */int) var_10)))) > (((/* implicit */int) var_5)))))));
                        var_16 -= ((/* implicit */short) (((~(((var_7) ? (((/* implicit */long long int) var_8)) : (var_1))))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (var_0))))))));
                        var_17 += ((/* implicit */_Bool) var_1);
                    }
                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 9; i_8 += 3) 
                    {
                        arr_35 [i_1] [i_1 + 2] [i_6] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (signed char)76)))))));
                        /* LoopSeq 4 */
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            arr_38 [3ULL] &= ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) ((var_2) || (((/* implicit */_Bool) var_9)))))));
                            var_19 += ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) % (var_8)));
                        }
                        for (int i_10 = 2; i_10 < 7; i_10 += 1) 
                        {
                            arr_42 [i_0] [i_1] [i_1] [i_0] [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (unsigned char)0))) ? ((~(((/* implicit */int) var_2)))) : ((+(((/* implicit */int) (unsigned char)240))))));
                            arr_43 [i_0] [i_1] [(_Bool)1] [i_8 - 2] [i_10] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)256)) - (((/* implicit */int) (_Bool)0)))))));
                            arr_44 [i_0] |= ((/* implicit */signed char) (~(var_4)));
                        }
                        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            arr_47 [i_8 - 2] [i_8 - 2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_5)) >> (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_5)))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_6))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) | (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((var_1) + (((/* implicit */long long int) var_4))))));
                        }
                        for (short i_12 = 0; i_12 < 10; i_12 += 2) 
                        {
                            var_23 = ((unsigned short) ((long long int) var_10));
                            arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_6)))))));
                        }
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) 1881700891))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (int i_14 = 1; i_14 < 9; i_14 += 1) 
                        {
                            arr_59 [i_0] [i_1] = (!(((/* implicit */_Bool) var_3)));
                            var_25 = ((/* implicit */unsigned char) ((var_0) | (var_0)));
                            arr_60 [i_0] [i_1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (var_4)))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        }
                        for (int i_15 = 2; i_15 < 7; i_15 += 1) 
                        {
                            var_26 = ((/* implicit */long long int) min((var_26), (var_1)));
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) var_2))));
                            var_28 -= ((/* implicit */signed char) ((((/* implicit */int) (signed char)112)) >> ((((((-2147483647 - 1)) - (-2147483642))) + (11)))));
                        }
                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 10; i_16 += 3) /* same iter space */
                        {
                            arr_67 [i_6] [i_16] [i_6] [i_16] [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) <= (((/* implicit */int) ((unsigned char) var_2))));
                            var_29 = ((/* implicit */signed char) var_9);
                            var_30 -= ((/* implicit */long long int) (~((~(((/* implicit */int) (short)16256))))));
                            var_31 = ((/* implicit */unsigned short) ((unsigned char) var_6));
                            arr_68 [i_0] [i_1 + 1] [i_6] [i_6] [i_16] = ((/* implicit */unsigned long long int) var_0);
                        }
                        for (int i_17 = 0; i_17 < 10; i_17 += 3) /* same iter space */
                        {
                            var_32 += ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */long long int) var_8)))));
                            arr_72 [i_0] [i_0] [(unsigned char)9] [i_17] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) | (((/* implicit */int) (!(var_2)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((var_1) % (((/* implicit */long long int) var_4))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_8)))))))) : (((long long int) ((((/* implicit */int) var_10)) / (var_4))))));
                            var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15485))));
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_2)))))))))));
                        }
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_18 = 1; i_18 < 9; i_18 += 3) /* same iter space */
                    {
                        var_36 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_2)))))));
                        arr_76 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (var_8)))) || (((_Bool) var_4))));
                        arr_77 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_7))));
                    }
                    for (short i_19 = 1; i_19 < 9; i_19 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((var_0) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))))))));
                        var_38 = ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) <= ((+(((/* implicit */int) (unsigned char)128)))))) ? (((((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_0))) & (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_3))))) ? (((((/* implicit */int) var_3)) / (var_8))) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_7)))))) : (((((/* implicit */int) (!(var_7)))) - (((/* implicit */int) var_9))))));
                        arr_80 [i_1] = ((/* implicit */unsigned short) ((int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (var_8))) < (((/* implicit */int) ((((/* implicit */int) (short)32739)) != (((/* implicit */int) (signed char)9))))))));
                        var_40 &= ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) ((signed char) var_3))))));
                    }
                    for (short i_20 = 1; i_20 < 9; i_20 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) /* same iter space */
                        {
                            arr_87 [i_21] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_3)) / (((/* implicit */int) var_2)))) : (((var_4) / (var_8)))))));
                            var_41 = ((/* implicit */long long int) ((_Bool) var_2));
                        }
                        /* vectorizable */
                        for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) /* same iter space */
                        {
                            arr_91 [i_0] [(unsigned char)8] [i_6] [i_20 + 1] [i_20] [i_22] [(signed char)0] |= (!(((/* implicit */_Bool) var_1)));
                            var_42 -= ((/* implicit */short) var_10);
                            var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */unsigned long long int) -1LL)) : (2841074428736373702ULL)));
                        }
                        for (signed char i_23 = 0; i_23 < 10; i_23 += 2) 
                        {
                            arr_96 [i_0] [i_0] &= var_5;
                            arr_97 [i_20] [i_20 + 1] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)57)) % (((/* implicit */int) ((_Bool) 4294967295U)))))) ^ (391014226013116066ULL)));
                            var_44 |= ((/* implicit */unsigned int) ((((int) var_5)) <= ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))));
                            arr_98 [i_1 - 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)121)))))));
                        }
                        var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) ((signed char) var_9)))));
                    }
                    arr_99 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4558679050882853935LL))));
                }
                var_46 = ((/* implicit */int) var_2);
                var_47 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) > (var_4)));
                var_48 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) - (-5897431727652531663LL))))))));
            }
        } 
    } 
    var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) (!(var_2))))));
    var_50 = ((signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 30064771072LL)))))));
}
