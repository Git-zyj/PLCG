/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139883
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) 5360281974237650686LL);
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    arr_8 [i_0] [16LL] [(signed char)3] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */long long int) arr_6 [i_0] [i_1 - 1])) ^ (arr_2 [(_Bool)1] [i_1] [i_2]))), (((/* implicit */long long int) ((3806910128U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))))))))) ? ((-((~(var_0))))) : (((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) var_9)), (arr_2 [16] [i_1 - 2] [i_1]))))))));
                    var_11 *= ((/* implicit */short) (-(((/* implicit */int) ((arr_2 [(short)12] [i_1 - 3] [i_1 - 1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 + 2] [i_1 - 3]))))))));
                    arr_9 [i_0] [i_1] [i_2 + 2] = max((((/* implicit */unsigned char) (signed char)-81)), ((unsigned char)255));
                }
                for (int i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((min((arr_0 [i_1 - 1] [i_1 - 3]), (((/* implicit */int) var_4)))) == (min((arr_0 [i_1 - 2] [i_3 + 1]), (((/* implicit */int) arr_3 [i_1] [i_1])))))))));
                        var_13 = ((max((((/* implicit */int) arr_12 [i_0] [i_1] [i_3 + 1] [i_4])), (((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_0 [i_1] [i_3]) : (((/* implicit */int) var_2)))))) - (((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_3 + 1])) ? (((/* implicit */int) arr_3 [i_1 + 2] [i_3 + 1])) : (((/* implicit */int) arr_3 [i_1 + 2] [i_3 + 1])))));
                        arr_14 [i_0] [i_0] [i_3 - 1] [i_3] [i_4] = ((/* implicit */_Bool) arr_3 [i_0] [i_1]);
                        var_14 *= ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0])) == (((((/* implicit */int) var_5)) * (((/* implicit */int) var_4))))))), (((((/* implicit */int) arr_3 [i_1] [i_1 - 2])) ^ (((/* implicit */int) arr_10 [i_0] [i_1 - 3] [i_3 - 1]))))));
                        arr_15 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) var_3);
                    }
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        arr_18 [i_5] [i_0] [i_0] [i_0] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))));
                        var_15 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_5]);
                    }
                    for (int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (-(arr_2 [i_1 - 1] [i_3] [i_6]))))));
                        var_17 |= ((/* implicit */unsigned char) arr_17 [i_0] [i_0] [i_0]);
                    }
                    for (int i_7 = 1; i_7 < 17; i_7 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6214505244319539352LL)) ? (6214505244319539358LL) : (((/* implicit */long long int) 1292920893))))) != (((var_6) << (((var_7) - (16510047278773022186ULL)))))))) << ((((~(min((((/* implicit */int) var_9)), (arr_22 [i_0]))))) - (1244)))));
                        var_19 = ((((/* implicit */_Bool) arr_19 [i_0] [i_1 - 1] [i_7 - 1])) ? (min((-1241909149), (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)0)))))) : (((/* implicit */int) ((short) arr_6 [i_0] [i_0]))));
                    }
                    arr_24 [i_0] [(short)13] [i_1 + 2] [i_3] = ((/* implicit */short) ((int) (~(((/* implicit */int) var_4)))));
                    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_1 - 2] [i_3 + 1]))) : (arr_19 [i_0] [i_1] [i_3 - 1])))), (min((var_3), (((/* implicit */unsigned long long int) var_1))))));
                }
                arr_25 [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_0] [i_1 - 2]))))), (min((6214505244319539368LL), (((/* implicit */long long int) arr_13 [i_0] [i_1 + 2]))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    var_21 |= ((/* implicit */signed char) ((((/* implicit */int) arr_4 [12] [i_1 - 2])) <= (((/* implicit */int) arr_20 [i_1] [i_1 - 2] [i_1] [i_1 - 2] [i_8] [i_0]))));
                    var_22 = ((/* implicit */int) (~(arr_2 [i_0] [i_8] [i_8])));
                    var_23 = ((/* implicit */int) arr_23 [i_8] [11U] [i_8] [i_1] [i_0]);
                }
                for (unsigned char i_9 = 1; i_9 < 17; i_9 += 4) /* same iter space */
                {
                    arr_30 [i_0] [i_1 + 2] [i_9 + 1] [i_9] = ((/* implicit */int) min((-6214505244319539352LL), (((/* implicit */long long int) 1938905719))));
                    arr_31 [i_9] [i_9] = ((/* implicit */unsigned char) arr_17 [i_0] [i_1] [i_9]);
                    var_24 = ((/* implicit */signed char) ((max((var_3), (((/* implicit */unsigned long long int) arr_28 [i_9] [i_9] [i_9] [i_9 - 1])))) % (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 663846397)), (6214505244319539352LL))))));
                }
                for (unsigned char i_10 = 1; i_10 < 17; i_10 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned char) arr_23 [i_0] [i_0] [i_0] [i_10 - 1] [i_1 + 2]);
                    var_26 = ((/* implicit */int) var_8);
                    var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
                    arr_35 [i_0] [i_1 - 3] [i_1 - 2] [i_10] = ((/* implicit */short) (~(((/* implicit */int) (!(((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2])) && (((/* implicit */_Bool) arr_13 [i_0] [i_0])))))))));
                    var_28 = ((/* implicit */_Bool) arr_1 [i_0]);
                }
                for (unsigned char i_11 = 1; i_11 < 17; i_11 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */signed char) (+(min((((/* implicit */int) arr_10 [i_0] [i_1] [i_0])), ((-2147483647 - 1))))));
                    var_30 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (var_9))))) - (((((/* implicit */_Bool) var_3)) ? (arr_11 [i_11 + 1]) : (((/* implicit */unsigned long long int) 6214505244319539351LL)))))))));
                    var_31 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_11] [i_11] [i_11 - 1])) ? (((((-6214505244319539352LL) + (9223372036854775807LL))) >> (((-6214505244319539339LL) + (6214505244319539396LL))))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (6214505244319539351LL)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)13039)), (var_0)))) ? (max((var_10), (arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_28 [i_11] [i_1] [i_11 - 1] [9ULL])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_11])))))) : (((/* implicit */int) (short)-13040))));
                    arr_39 [i_11] [i_1] [i_0] = ((/* implicit */int) (~((-(var_3)))));
                }
            }
        } 
    } 
    var_32 = min((((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) (unsigned char)99)))))), (((max((791229537624148375ULL), (17655514536085403241ULL))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)29271))))))));
    var_33 -= ((/* implicit */short) var_3);
    var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (short)13039))));
    var_35 = var_0;
}
