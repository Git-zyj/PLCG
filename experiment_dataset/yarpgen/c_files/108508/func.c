/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108508
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                for (unsigned short i_3 = 4; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_10 [i_2] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
                        var_17 |= 18446744073709551612ULL;
                        arr_11 [i_0] [i_1] [i_2 - 1] [i_0] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (short)-28463)) ^ (((/* implicit */int) arr_2 [i_3]))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */signed char) (+(((arr_6 [i_0] [(signed char)10] [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4896)))))));
        arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-14)) ? (((/* implicit */int) ((signed char) (unsigned short)16564))) : (((((/* implicit */_Bool) 2720790300U)) ? (((/* implicit */int) (short)4879)) : (((/* implicit */int) (short)4879))))));
    }
    /* LoopSeq 2 */
    for (long long int i_4 = 2; i_4 < 18; i_4 += 3) 
    {
        var_19 += ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned char) min((3ULL), (((/* implicit */unsigned long long int) 7242349959323484258LL)))))), (min((var_14), (((/* implicit */unsigned long long int) -7242349959323484259LL))))));
        var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)24109)) ? (((/* implicit */int) arr_14 [i_4] [i_4 + 1])) : (((/* implicit */int) var_3)))), (((/* implicit */int) (short)-4895))));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned short) ((min(((!(((/* implicit */_Bool) 16LL)))), (((((/* implicit */_Bool) arr_13 [i_4] [i_4])) || (((/* implicit */_Bool) (unsigned short)23294)))))) ? (((((/* implicit */int) (short)-4897)) / (-4096))) : (((((/* implicit */_Bool) min(((unsigned short)61674), (((/* implicit */unsigned short) var_2))))) ? (((/* implicit */int) min(((short)4896), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) arr_13 [i_4] [i_4]))))));
        var_21 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 9445073793927243570ULL)) && (((/* implicit */_Bool) (short)-22491))))), (((long long int) var_10))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+(arr_18 [i_5]))))));
            arr_23 [i_6] = ((/* implicit */unsigned int) arr_5 [i_6] [i_6] [i_6]);
            var_23 *= ((/* implicit */signed char) ((unsigned int) arr_9 [i_5] [i_5] [i_6] [i_5]));
        }
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            arr_26 [i_5] [i_7] [i_7] = ((/* implicit */signed char) var_10);
            var_24 &= ((/* implicit */long long int) (~((~(15ULL)))));
            /* LoopSeq 1 */
            for (long long int i_8 = 1; i_8 < 10; i_8 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_9 = 4; i_9 < 12; i_9 += 3) 
                {
                    arr_31 [i_5] [i_5] [i_7] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)7)) * (((/* implicit */int) var_0))))) ? ((-(-12LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7])))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) 2147483647)), (var_11)))) ? (max((18446744073709551612ULL), (((/* implicit */unsigned long long int) 3300315513U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_25 |= ((/* implicit */unsigned short) ((max((((/* implicit */long long int) max((3300315513U), (((/* implicit */unsigned int) 2147483647))))), (min((var_16), (((/* implicit */long long int) var_11)))))) << (((max((((562949684985856LL) << (((((/* implicit */int) (unsigned char)248)) - (238))))), (((/* implicit */long long int) ((((/* implicit */int) (short)4879)) & (((/* implicit */int) arr_1 [i_7]))))))) - (576460477425516515LL)))));
                }
                for (short i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_11 = 3; i_11 < 13; i_11 += 3) 
                    {
                        var_26 -= ((/* implicit */signed char) ((((arr_30 [i_11 - 1] [(short)10] [(short)10] [i_8 + 3]) * (arr_30 [i_11 - 1] [4LL] [4LL] [i_8 + 3]))) | (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_20 [i_8 + 3] [i_8] [i_8 + 4])), (arr_32 [i_7] [i_8] [i_10] [i_11]))))));
                        arr_38 [i_5] [i_5] [i_10] [i_7] [i_5] = ((/* implicit */long long int) ((0ULL) << (((((long long int) arr_2 [i_10])) + (21LL)))));
                        var_27 += ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) arr_0 [i_11])) ? (arr_0 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_5] [i_7] [i_8 + 2] [(signed char)4] [i_11] [i_5]))))), (((/* implicit */long long int) min((var_1), (((/* implicit */int) var_3))))))), (((/* implicit */long long int) arr_35 [i_5] [i_7] [i_8] [i_10] [10LL]))));
                        var_28 = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)97))) <= (((long long int) arr_34 [(_Bool)1] [i_5] [i_7] [i_7] [i_5] [i_5]))))), (max((((/* implicit */short) (!(((/* implicit */_Bool) 2147483643))))), ((short)4883)))));
                    }
                    var_29 = ((/* implicit */short) arr_7 [i_7] [i_7] [i_7] [i_7] [i_7]);
                    var_30 = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_36 [i_5] [i_8 - 1] [i_5] [i_7] [i_10]))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) /* same iter space */
                    {
                        var_31 |= -7242349959323484250LL;
                        var_32 = ((/* implicit */unsigned short) (~(0U)));
                    }
                    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 3) /* same iter space */
                    {
                        arr_45 [i_5] [i_5] [i_5] [i_7] [i_13] = ((/* implicit */long long int) max((((((/* implicit */int) arr_22 [i_5] [i_10])) != (((/* implicit */int) (unsigned char)241)))), ((!(((/* implicit */_Bool) arr_22 [i_5] [i_10]))))));
                        arr_46 [i_5] [i_5] [i_7] [i_5] [(short)11] = ((/* implicit */unsigned char) min(((-((~(((/* implicit */int) arr_22 [i_5] [12U])))))), (((/* implicit */int) (short)0))));
                        arr_47 [i_7] = ((/* implicit */unsigned short) (~(max((((int) var_5)), (((/* implicit */int) ((((/* implicit */int) (short)9420)) < (((/* implicit */int) arr_36 [i_5] [i_7] [(short)3] [(short)3] [i_7])))))))));
                        var_33 *= ((/* implicit */short) max(((+(((/* implicit */int) arr_35 [i_10] [i_7] [i_8 + 4] [i_10] [(unsigned char)4])))), (((/* implicit */int) max((max((arr_22 [i_7] [i_8]), (((/* implicit */short) arr_33 [i_5] [(signed char)4])))), ((short)-3))))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned short i_14 = 1; i_14 < 12; i_14 += 3) 
                {
                    arr_50 [2] [i_7] = ((/* implicit */long long int) (+(((((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_7] [i_7]))) != (arr_32 [i_5] [i_5] [i_8] [i_14]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5] [i_8 + 3]))) : (((((/* implicit */_Bool) (unsigned char)163)) ? (var_12) : (((/* implicit */unsigned long long int) arr_16 [i_14]))))))));
                    var_34 = ((/* implicit */int) max((var_34), (((int) arr_37 [i_14 - 1] [i_7] [i_8] [i_8 + 3] [i_8] [i_14] [i_5]))));
                }
                arr_51 [i_7] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */short) (!(((/* implicit */_Bool) var_6))))), (max((((/* implicit */short) var_0)), (arr_17 [i_8 - 1])))));
            }
        }
        for (unsigned long long int i_15 = 1; i_15 < 12; i_15 += 3) /* same iter space */
        {
            arr_54 [i_15] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) ((var_5) >= (((/* implicit */unsigned int) -588935739))))))));
            arr_55 [i_15] [i_15 + 1] = ((((((/* implicit */_Bool) ((short) arr_36 [i_5] [i_15] [i_5] [i_15] [i_5]))) ? (((/* implicit */int) arr_35 [i_5] [i_5] [i_5] [i_15] [i_15])) : (((/* implicit */int) var_2)))) <= (((/* implicit */int) min((((((/* implicit */int) arr_19 [i_5])) != (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_6 [i_5] [i_15] [i_5] [i_15])) || (((/* implicit */_Bool) arr_18 [(signed char)1]))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_16 = 1; i_16 < 12; i_16 += 3) /* same iter space */
        {
            arr_58 [i_16] [i_5] = ((/* implicit */unsigned char) 18446744073709551615ULL);
            var_35 = (-(((/* implicit */int) arr_24 [i_16])));
        }
        arr_59 [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_5])) || (((/* implicit */_Bool) arr_1 [i_5])))))));
        /* LoopNest 2 */
        for (unsigned int i_17 = 0; i_17 < 14; i_17 += 3) 
        {
            for (int i_18 = 3; i_18 < 13; i_18 += 3) 
            {
                {
                    var_36 = (~(((/* implicit */int) arr_57 [i_5] [i_17] [i_17])));
                    var_37 &= ((/* implicit */signed char) ((((_Bool) arr_44 [i_5] [i_5] [i_18] [i_18] [i_18] [6U] [i_17])) ? (((/* implicit */int) max((arr_39 [i_18 - 3] [i_18] [i_18] [i_18 + 1] [i_18 - 1] [i_18 - 3] [i_18]), ((short)-9438)))) : (((((/* implicit */_Bool) (-(var_4)))) ? (0) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)7))))))));
                }
            } 
        } 
    }
    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) 16699139577559401812ULL))));
}
