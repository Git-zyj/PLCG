/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118189
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [15U])) - (18446744073709551603ULL)))) ? (((/* implicit */unsigned int) ((((var_1) + (2147483647))) >> (((((/* implicit */int) var_12)) + (3979)))))) : (arr_3 [i_0] [i_1] [i_1]))))))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(min((var_14), (((/* implicit */long long int) var_7))))))) | (max(((-(18014398509481983ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_17)) : (559829771)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 1) 
                        {
                            arr_18 [(_Bool)1] [(_Bool)1] [(unsigned char)6] [(unsigned short)8] [8U] [(_Bool)1] [9] = (+(3ULL));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (~(8745616791671996528LL))))));
                            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) var_14)))));
                        }
                        for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (21ULL) : (((/* implicit */unsigned long long int) 1125899906842624LL)))))));
                            var_26 = ((/* implicit */unsigned long long int) (~(arr_2 [i_5 - 1] [i_5 + 1])));
                            arr_21 [i_2] [(short)1] [i_4] [i_5] [(unsigned short)4] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (short)2047))));
                            arr_26 [(_Bool)1] [(short)4] [i_5] [i_4] [(unsigned char)4] [(unsigned short)6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (arr_4 [(unsigned short)0]))))));
                            arr_27 [i_8] [i_5] |= ((/* implicit */long long int) arr_16 [i_5 - 1] [(_Bool)1] [i_5] [(short)7] [i_5 + 1]);
                            var_28 = ((/* implicit */int) min((var_28), ((+(((/* implicit */int) arr_25 [(unsigned char)5] [i_4] [i_5 + 1] [(unsigned char)5] [i_8] [8]))))));
                        }
                        var_29 = ((/* implicit */int) min((var_29), ((-(arr_20 [(short)0] [i_3] [i_4] [i_5 - 1] [(short)3] [i_2] [i_2])))));
                    }
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (((!(((/* implicit */_Bool) arr_1 [10])))) ? (((((/* implicit */_Bool) 213817771689204683ULL)) ? (arr_2 [i_4] [(unsigned short)15]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))))) : (780997061U))))));
                    arr_28 [9U] [6ULL] [8U] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_14 [i_2] [2] [3ULL] [7ULL]) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-16)) + (2147483647))) << (((11ULL) - (11ULL))))))));
                }
            } 
        } 
        var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
        arr_29 [(unsigned short)5] = ((/* implicit */unsigned long long int) (signed char)-121);
        arr_30 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_5 [(signed char)5] [i_2])))) ? (8745616791671996528LL) : (((/* implicit */long long int) arr_10 [i_2]))));
    }
    for (signed char i_9 = 1; i_9 < 19; i_9 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_10 = 4; i_10 < 18; i_10 += 2) 
        {
            arr_35 [i_9] [(signed char)4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_9 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_31 [i_9 + 2])));
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((18446744073709551582ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8)))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)41)) > (((/* implicit */int) (unsigned char)95))))) : (((/* implicit */int) arr_33 [i_9 - 1] [(unsigned char)11]))));
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (33ULL)));
            arr_36 [i_9] [17U] = ((/* implicit */unsigned long long int) var_6);
            var_34 = ((/* implicit */unsigned int) max((var_34), (21U)));
        }
        arr_37 [i_9] = ((/* implicit */unsigned char) arr_33 [i_9] [(unsigned short)18]);
        /* LoopSeq 3 */
        for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            arr_41 [19LL] [i_11] [5ULL] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)3))))) <= (8444249301319680ULL))))));
            arr_42 [i_11] &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((-1LL) & (((/* implicit */long long int) ((/* implicit */int) var_18)))))), (var_8)));
        }
        for (long long int i_12 = 0; i_12 < 21; i_12 += 4) /* same iter space */
        {
            var_35 = (+(((((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_44 [5U]))))) - (var_15))));
            /* LoopSeq 1 */
            for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                arr_48 [i_9] [i_12] [i_13] = ((/* implicit */unsigned char) (short)-17728);
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 4; i_15 < 20; i_15 += 4) 
                    {
                        {
                            var_36 &= ((/* implicit */unsigned long long int) (_Bool)1);
                            var_37 = ((/* implicit */long long int) var_10);
                            var_38 = ((/* implicit */long long int) (unsigned short)15);
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 21; i_16 += 4) /* same iter space */
        {
            var_39 = ((/* implicit */_Bool) -576285456);
            var_40 = ((/* implicit */short) ((((/* implicit */_Bool) 2827953837440166901ULL)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) arr_55 [i_9 + 1]))));
        }
        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_55 [i_9])), ((-(18446744073709551586ULL))))))));
    }
    var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (var_14)))), (var_5)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)112)) / (((/* implicit */int) (unsigned char)147))))) ? (((1811063935699678020LL) + (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))))) : (((/* implicit */long long int) var_0))));
}
