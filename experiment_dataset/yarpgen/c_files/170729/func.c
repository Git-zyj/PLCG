/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170729
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
    var_10 -= ((/* implicit */unsigned int) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 ^= ((/* implicit */_Bool) (unsigned char)8);
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_13 -= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)247))));
    }
    for (unsigned int i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        var_14 -= ((((/* implicit */int) (unsigned char)22)) + (((/* implicit */int) (_Bool)0)));
        var_15 -= ((/* implicit */unsigned char) ((unsigned long long int) max(((-(var_2))), (((/* implicit */unsigned long long int) arr_2 [i_1 - 2] [i_1 - 2])))));
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_16 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 + 1])))))));
            arr_8 [i_1] = ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned char)233)) >> (((arr_3 [i_2]) - (8181523727970598412LL)))))));
        }
        for (short i_3 = 3; i_3 < 12; i_3 += 3) 
        {
            var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_9 [i_1 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3 - 3] [i_1] [i_1])))))))) || (((/* implicit */_Bool) max((1897857658240546851ULL), (((/* implicit */unsigned long long int) arr_7 [i_1 - 2] [i_3 + 2] [i_3 + 1])))))));
            arr_11 [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) (short)3947)) || (((/* implicit */_Bool) var_2)))))))) > (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)68)), (var_6)))) ? (((var_2) >> (((arr_3 [i_1]) - (8181523727970598373LL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_5 [i_1] [i_1 + 1]))))))));
            arr_12 [i_1 + 2] [i_3] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3 + 2] [i_1 + 2] [i_3 + 2]))) & (var_2))));
            arr_13 [i_3] [i_3] = ((((/* implicit */_Bool) (unsigned char)234)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2680110222U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)251))))) : (72057319160020992ULL))) : (((unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (short)32767))))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 4; i_4 < 13; i_4 += 1) 
        {
            var_18 -= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_4)))) < ((~(((/* implicit */int) arr_5 [6LL] [10]))))));
            var_19 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (_Bool)1)))));
        }
        for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            var_20 = ((unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (2147221504) : (((/* implicit */int) (signed char)13))))) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            var_21 = ((/* implicit */short) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5] [i_5] [i_1 - 2]))) + (8796093022176LL))));
            arr_19 [i_1 + 1] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_7)), ((+(min((9493558935284472353ULL), (4796122276840421791ULL)))))));
        }
    }
    for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 4; i_7 < 8; i_7 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                var_22 = (-(arr_10 [i_7 + 2]));
                var_23 ^= ((/* implicit */unsigned int) arr_24 [(_Bool)1] [i_7] [i_7] [i_7 + 1]);
            }
            var_24 = ((/* implicit */int) min((min((18374686754549530624ULL), (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6]))))))), (((/* implicit */unsigned long long int) var_9))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (short i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    for (unsigned int i_12 = 1; i_12 < 9; i_12 += 3) 
                    {
                        {
                            arr_39 [i_6] [i_12] [i_6] [i_6] = ((/* implicit */int) ((signed char) 6U));
                            arr_40 [i_6] [i_12] [i_10] [i_6] [i_12] = ((/* implicit */unsigned long long int) var_8);
                            var_25 -= arr_17 [(unsigned char)6] [i_11] [i_9];
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_13 = 2; i_13 < 6; i_13 += 4) 
            {
                arr_43 [i_13] [i_9] [i_6] = ((/* implicit */unsigned long long int) arr_6 [i_13] [3U] [1LL]);
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_6] [i_9] [i_13])) ? (11571056144394176571ULL) : (arr_4 [i_6] [i_6] [i_6])));
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((_Bool) arr_25 [i_13 - 2] [i_13 + 2])))));
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(9223372036854775807LL)))) & (((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            }
            for (short i_14 = 2; i_14 < 9; i_14 += 3) 
            {
                var_29 = ((arr_6 [i_14 - 2] [i_14] [i_14 - 2]) / (arr_6 [i_14] [i_14 - 2] [i_14 - 2]));
                var_30 = ((/* implicit */short) max((var_30), ((short)-32757)));
                var_31 = 8953185138425079278ULL;
                var_32 = ((/* implicit */unsigned int) (short)-32763);
            }
            for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    for (signed char i_17 = 3; i_17 < 8; i_17 += 1) 
                    {
                        {
                            var_33 -= ((/* implicit */_Bool) 10780813740870343797ULL);
                            var_34 ^= ((/* implicit */long long int) var_7);
                        }
                    } 
                } 
                var_35 = ((/* implicit */short) ((((unsigned int) arr_47 [i_15 + 1] [i_9] [5U] [3ULL])) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18374686754549530623ULL))))))));
                var_36 = ((/* implicit */_Bool) var_2);
                var_37 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)38))));
                var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233))) >= (arr_15 [i_6]))))))))));
            }
        }
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            arr_57 [i_18] [i_6] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)19))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)235)) >> (((18446744073709551599ULL) - (18446744073709551569ULL)))))) / (1543572024652958132ULL)))));
            arr_58 [i_18] [i_18] [i_18] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)163))))), (8388607LL)))));
            /* LoopNest 2 */
            for (signed char i_19 = 0; i_19 < 10; i_19 += 1) 
            {
                for (short i_20 = 0; i_20 < 10; i_20 += 4) 
                {
                    {
                        var_39 ^= ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) (~(arr_23 [i_6] [i_18 - 1])))), (((unsigned long long int) (unsigned char)40))))));
                        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 8724493416701751036LL)))) ? (((((/* implicit */_Bool) arr_14 [i_18])) ? (((/* implicit */int) arr_17 [i_18] [i_18] [i_20])) : (((/* implicit */int) arr_5 [i_6] [i_20])))) : (((/* implicit */int) ((arr_44 [i_6] [i_20]) && (((/* implicit */_Bool) (short)14336)))))))) || (((/* implicit */_Bool) 3115744190795280051ULL))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_21 = 0; i_21 < 10; i_21 += 3) 
            {
                for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 4) 
                {
                    for (long long int i_23 = 2; i_23 < 8; i_23 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) 9959824733294684113ULL))));
                            arr_73 [i_6] [i_23] [i_21] [i_22] [i_23] [i_22] = ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (0ULL))), (18446744073709551615ULL)))));
                            var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((unsigned char) -1925517085710946304LL)))));
                            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)235))))))))));
                            var_44 = max((((/* implicit */unsigned long long int) arr_42 [i_18] [i_23 + 1])), (arr_41 [i_18 - 1] [i_18] [i_18]));
                        }
                    } 
                } 
            } 
        }
        var_45 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((7328154579699892081LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7)))))))) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) max((-1547711618805233086LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_50 [i_6] [i_6] [i_6] [i_6]))))))))));
        arr_74 [i_6] = ((/* implicit */int) ((min((max((arr_54 [3LL]), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) ((int) (_Bool)1))))) << (((max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (5971938667384584087ULL))) - (18446744073709518786ULL)))));
    }
    var_46 ^= ((/* implicit */int) var_4);
}
