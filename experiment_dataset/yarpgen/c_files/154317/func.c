/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154317
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
    var_11 = ((/* implicit */signed char) (unsigned short)0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 16080408839125260156ULL))))) ^ (((((arr_1 [i_0]) ^ (var_4))) & (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_5 [i_0] [i_1] [(short)12]))))))));
                arr_8 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((arr_2 [i_1]), (arr_2 [i_1])))), (min((((/* implicit */long long int) arr_6 [i_0])), (var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (signed char)127))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16080408839125260156ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13665))) : (16080408839125260166ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14335))) : (((((/* implicit */_Bool) var_10)) ? (2366335234584291460ULL) : (((/* implicit */unsigned long long int) arr_1 [i_1]))))))));
                var_12 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9913952501298638632ULL)) ? (16080408839125260166ULL) : (((((/* implicit */unsigned long long int) ((int) 16080408839125260156ULL))) - (16080408839125260154ULL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */short) var_3);
                            var_14 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13666))) + (12957389308661548069ULL))), ((~(((((/* implicit */_Bool) (short)-13666)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127)))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    arr_24 [i_2] [i_3] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13652)) ? (((/* implicit */unsigned long long int) var_5)) : (16080408839125260174ULL))))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-13666)) ? (var_4) : (((/* implicit */int) (short)-13665))))) != (2366335234584291460ULL))))));
                    arr_25 [i_2] [i_3] = (unsigned short)192;
                }
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 1; i_8 < 9; i_8 += 2) 
                    {
                        var_15 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (~(16080408839125260173ULL))))) && (((/* implicit */_Bool) arr_19 [7] [i_7] [i_2] [i_2]))));
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            arr_33 [i_8] [i_8] [i_7] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8 + 1] [(signed char)9] [i_3]))) - ((-(((((/* implicit */unsigned long long int) 0LL)) / (2366335234584291431ULL)))))));
                            var_16 = ((/* implicit */long long int) max((16080408839125260174ULL), (((/* implicit */unsigned long long int) -978808576))));
                            arr_34 [i_7] [i_8] [i_7] [i_8] [i_9] = ((/* implicit */int) ((signed char) ((arr_16 [i_2 - 2] [i_8 - 1] [i_3 - 1] [i_2 - 2]) >= (2366335234584291475ULL))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_2])) ? (((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) arr_4 [i_2] [i_8] [i_10]))), (((((/* implicit */_Bool) arr_19 [i_2] [i_3] [i_8] [i_8])) ? (((/* implicit */int) var_6)) : (arr_12 [i_7] [i_8 + 1] [i_10])))))) : (var_2)));
                            var_18 |= ((/* implicit */int) ((((17760569240910661975ULL) ^ (((/* implicit */unsigned long long int) 0LL)))) >> (((max((min((var_5), (((/* implicit */long long int) (signed char)-1)))), (((/* implicit */long long int) 1991500146)))) - (1991500099LL)))));
                        }
                    }
                    var_19 = ((/* implicit */signed char) (+(((unsigned long long int) ((((/* implicit */unsigned long long int) 262143)) > (16080408839125260199ULL))))));
                    var_20 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)127)), (-1991500166))))));
                }
                /* vectorizable */
                for (unsigned short i_11 = 1; i_11 < 9; i_11 += 2) 
                {
                    arr_42 [i_11] [i_3 - 1] [i_11] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_6)) ? (var_10) : (var_1))));
                    /* LoopSeq 3 */
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        arr_45 [i_2] [i_2] [i_11] [i_11] [i_11] [i_12] = ((/* implicit */int) var_6);
                        arr_46 [i_3] [i_3] [i_3] [i_3] [i_3] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_2] [i_2] [i_2] [i_2 + 2] [i_2])) ? (((/* implicit */long long int) -262143)) : (var_1)));
                        arr_47 [i_2] [i_2] [i_3] [i_11] [i_11] = ((/* implicit */long long int) 16080408839125260124ULL);
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_4 [3LL] [i_3] [i_3])))))))));
                    }
                    for (short i_13 = 3; i_13 < 6; i_13 += 3) /* same iter space */
                    {
                        arr_51 [i_2] [i_3] [i_11] [i_11] [i_13] = ((/* implicit */signed char) ((var_2) & (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2] [i_2 - 1] [i_3 - 2] [i_11 - 1] [i_13 + 1])))));
                        arr_52 [i_11] = (-(((/* implicit */int) arr_37 [i_11] [i_13] [i_13 - 2] [i_13] [i_13] [i_13])));
                        arr_53 [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_40 [i_3] [i_3 - 1] [i_11] [i_3]))));
                        var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)29465)) ? (((/* implicit */long long int) ((((/* implicit */int) (short)13665)) | (((/* implicit */int) arr_18 [i_2] [i_3] [i_11] [0LL] [i_13]))))) : ((~(var_1)))));
                    }
                    for (short i_14 = 3; i_14 < 6; i_14 += 3) /* same iter space */
                    {
                        arr_56 [i_2 + 1] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) var_8))) == (((/* implicit */int) ((short) 2366335234584291505ULL)))));
                        var_23 = ((/* implicit */unsigned long long int) ((var_4) / (((/* implicit */int) arr_28 [i_11 + 1] [i_14] [i_14 + 3] [i_14] [i_14]))));
                    }
                    var_24 = ((/* implicit */signed char) ((int) (short)-13666));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        for (unsigned long long int i_16 = 1; i_16 < 9; i_16 += 4) 
                        {
                            {
                                var_25 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 957290692395418439ULL)) ? (var_7) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) (unsigned short)65344)) : (((/* implicit */int) arr_31 [i_15] [i_3 + 1] [i_3] [i_2 + 1] [i_2]))));
                                arr_61 [i_2] [i_3] [i_3] [i_11] [i_16 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)192)) ? (((((/* implicit */_Bool) arr_38 [i_16] [(unsigned short)0] [i_2] [(unsigned short)0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42949))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_16] [i_3] [i_2 - 1])))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */unsigned long long int) min((130560), (((/* implicit */int) (signed char)(-127 - 1)))))) == (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_4)) : (((unsigned long long int) var_4)))))))));
}
