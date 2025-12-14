/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126585
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
    var_20 += ((/* implicit */unsigned int) (~(var_17)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        arr_4 [i_0 + 1] = ((/* implicit */_Bool) var_16);
        var_21 *= ((/* implicit */signed char) ((var_6) & (var_14)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_22 = ((((/* implicit */_Bool) ((var_6) ^ (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */int) var_10)) != (var_5)))));
                    var_23 = ((/* implicit */long long int) max((var_23), (((var_11) - (((/* implicit */long long int) (-(var_16))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (long long int i_5 = 2; i_5 < 21; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 21; i_6 += 4) 
                    {
                        for (int i_7 = 3; i_7 < 21; i_7 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_2))));
                                var_25 = var_0;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 21; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 21; i_9 += 3) 
                        {
                            {
                                arr_28 [i_4] [i_8 + 1] [i_5] [i_4] [i_4] = var_11;
                                arr_29 [i_4] [i_4] [i_8] [i_8] [i_8] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_17))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 4; i_10 < 20; i_10 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_11 = 2; i_11 < 20; i_11 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((((((/* implicit */_Bool) var_5)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) % ((-(var_18)))))));
                            arr_36 [i_4] [(signed char)20] [i_10] [(signed char)20] [i_11] [i_10] [i_11] = ((/* implicit */unsigned long long int) var_16);
                        }
                        for (signed char i_12 = 1; i_12 < 19; i_12 += 4) 
                        {
                            arr_41 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_13))));
                            arr_42 [i_3] [i_3] [i_4] [(signed char)10] [i_12] = ((/* implicit */signed char) ((var_6) / (((/* implicit */int) var_12))));
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) var_10))));
                            arr_43 [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                        }
                        arr_44 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) var_3);
                    }
                    for (unsigned int i_13 = 4; i_13 < 20; i_13 += 3) /* same iter space */
                    {
                        arr_47 [i_3] [i_4 + 1] [i_4] [i_4] [i_3] &= ((/* implicit */int) var_3);
                        var_28 *= ((/* implicit */unsigned int) var_9);
                        /* LoopSeq 2 */
                        for (signed char i_14 = 1; i_14 < 21; i_14 += 1) /* same iter space */
                        {
                            var_29 = ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) var_5)) : (((((/* implicit */long long int) var_1)) % (var_19))));
                            arr_51 [i_3] [i_13 + 2] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 10ULL)) ? (18050579244910523330ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                            arr_52 [i_4] [i_4] [i_4] [i_13] [i_4] = var_4;
                            arr_53 [i_3] [i_3] [i_3 + 2] [i_3 + 2] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) var_1)) != (var_16)));
                        }
                        for (signed char i_15 = 1; i_15 < 21; i_15 += 1) /* same iter space */
                        {
                            arr_57 [i_3] [i_4] [i_5 - 1] [i_13] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_19)) < (var_17))))));
                            arr_58 [(signed char)8] [i_15] [i_3] [i_13] &= ((/* implicit */long long int) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((var_1) + (896340787)))));
                            var_30 |= ((/* implicit */int) var_0);
                            arr_59 [i_3] [i_4] [i_5] [i_3] [i_13 - 4] [i_4] [i_15] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (var_3)));
                        }
                    }
                    for (unsigned int i_16 = 4; i_16 < 20; i_16 += 3) /* same iter space */
                    {
                        arr_62 [i_3] [i_3 - 2] [i_3] [i_3] &= ((/* implicit */long long int) ((((/* implicit */unsigned int) (-2147483647 - 1))) & (3589575166U)));
                        arr_63 [i_3] [i_4] [i_5] [i_4] [i_16] = ((/* implicit */signed char) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_4))));
                    }
                    arr_64 [i_4] [i_4 + 1] [i_5] = ((var_14) << (((var_9) - (10668679267689493558ULL))));
                }
            } 
        } 
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) var_19))));
        arr_65 [i_3] [i_3] &= var_2;
        arr_66 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) 705392130U)) && (((/* implicit */_Bool) (unsigned char)255))));
        var_32 = ((((/* implicit */int) (signed char)48)) ^ (var_1));
    }
    for (int i_17 = 4; i_17 < 18; i_17 += 4) 
    {
        arr_71 [i_17 + 1] &= ((/* implicit */unsigned int) (-(((var_11) / (((/* implicit */long long int) var_14))))));
        /* LoopNest 2 */
        for (unsigned int i_18 = 2; i_18 < 20; i_18 += 2) 
        {
            for (signed char i_19 = 1; i_19 < 20; i_19 += 1) 
            {
                {
                    arr_77 [i_17] [i_17] [i_17] = ((/* implicit */int) (!(((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_16))))));
                    var_33 = (~(((/* implicit */int) max((((/* implicit */signed char) var_10)), (var_13)))));
                    arr_78 [i_17] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((-94543167) + (2147483647))) >> (((18050579244910523341ULL) - (18050579244910523338ULL)))))) == (max((var_3), (((/* implicit */unsigned int) var_12))))))) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (var_7))) - (3128582186U)))));
                    /* LoopSeq 1 */
                    for (signed char i_20 = 2; i_20 < 20; i_20 += 2) 
                    {
                        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_17)))) && (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_5)))))))));
                        var_35 = ((/* implicit */signed char) ((28LL) * (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_21 = 1; i_21 < 22; i_21 += 2) 
    {
        var_36 = ((/* implicit */int) min((var_11), ((+(var_8)))));
        arr_85 [i_21] = ((((/* implicit */_Bool) max((-5969319582030485543LL), (((/* implicit */long long int) (unsigned char)12))))) ? (min((-5969319582030485543LL), (((/* implicit */long long int) (unsigned char)24)))) : (((/* implicit */long long int) (-(((/* implicit */int) ((var_6) <= (var_14))))))));
        var_37 = ((/* implicit */signed char) max((((var_17) | (var_17))), (((/* implicit */unsigned long long int) ((((-2207200918336183796LL) + (9223372036854775807LL))) << (((4294967272U) - (4294967272U))))))));
        arr_86 [i_21] = var_6;
    }
    var_38 = ((((((var_8) ^ (((/* implicit */long long int) var_5)))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) max((var_1), (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_7))) - (79U))));
}
