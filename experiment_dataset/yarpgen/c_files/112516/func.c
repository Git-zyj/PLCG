/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112516
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) var_4);
        var_18 = ((/* implicit */long long int) max((12320950742898683029ULL), (((/* implicit */unsigned long long int) min((((short) var_11)), (((/* implicit */short) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)89)), (var_0)))) >= (max((((/* implicit */int) arr_0 [i_0] [i_0])), (var_2)))))) & (((/* implicit */int) var_0))));
    }
    var_20 = ((/* implicit */int) (-(var_1)));
    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_15)), (min((((/* implicit */unsigned long long int) (short)-4527)), (18ULL)))));
    /* LoopSeq 4 */
    for (unsigned char i_1 = 2; i_1 < 19; i_1 += 3) 
    {
        var_22 |= ((/* implicit */long long int) -461348648);
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 19; i_2 += 1) 
        {
            for (unsigned short i_3 = 2; i_3 < 19; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [(unsigned char)6])) : (((/* implicit */int) arr_1 [i_3] [19]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1]))))) : (var_13))), (((/* implicit */unsigned long long int) arr_2 [i_1])))))));
                                var_24 |= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_11 [i_3 - 2] [i_1 - 1] [i_2 - 1] [i_2])) ? (((/* implicit */int) ((unsigned char) (short)-12860))) : (((/* implicit */int) (signed char)89)))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_2] = ((/* implicit */signed char) arr_2 [6]);
                }
            } 
        } 
        var_25 ^= ((/* implicit */unsigned char) (~(min((((((((/* implicit */int) arr_0 [i_1] [i_1])) + (2147483647))) << (((((/* implicit */int) arr_13 [i_1])) - (28980))))), (((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (var_6))))))));
    }
    for (int i_6 = 4; i_6 < 22; i_6 += 3) 
    {
        arr_21 [i_6] = ((/* implicit */unsigned char) (+(0U)));
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    {
                        var_26 += ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
                        /* LoopSeq 1 */
                        for (signed char i_10 = 1; i_10 < 21; i_10 += 2) 
                        {
                            var_27 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) max((arr_27 [i_6] [i_9] [(unsigned char)6] [i_6] [i_6]), (((/* implicit */short) (unsigned char)46))))), (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((5533928540177355169LL) - (5533928540177355141LL))))))))));
                            arr_30 [i_6] [i_7] [i_7] [i_6] [i_7] [i_10] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)200)) >> (((((/* implicit */int) (short)-28664)) + (28674)))));
                            arr_31 [i_7] [i_7] = ((/* implicit */_Bool) min((((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_10 + 1] [i_7]))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_26 [i_10 - 1] [21ULL] [i_10 - 1] [15ULL] [i_10] [i_10])) < (arr_22 [i_10 - 1]))))));
                        }
                        var_28 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)255)) << (((28) - (7)))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(var_4)))), ((~(((((/* implicit */_Bool) var_4)) ? (arr_25 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(signed char)8] [(unsigned char)13])))))))));
    }
    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_12 = 0; i_12 < 18; i_12 += 2) 
        {
            var_30 &= ((/* implicit */signed char) max((((var_16) << (((((/* implicit */int) arr_1 [9] [i_12])) - (155))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_11] [i_11])) : (((/* implicit */int) (short)0)))), (((/* implicit */int) (unsigned char)69)))))));
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_11])) == (((/* implicit */int) arr_6 [i_12]))))) / ((~(((/* implicit */int) (short)-7197))))));
        }
        for (short i_13 = 0; i_13 < 18; i_13 += 4) /* same iter space */
        {
            var_32 = ((/* implicit */short) max((arr_24 [i_11] [i_11] [i_11]), (((/* implicit */int) (signed char)15))));
            var_33 = ((/* implicit */unsigned int) arr_5 [(unsigned char)13] [(unsigned char)13]);
        }
        for (short i_14 = 0; i_14 < 18; i_14 += 4) /* same iter space */
        {
            arr_44 [i_11] = ((/* implicit */unsigned short) arr_22 [i_14]);
            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_11] [i_14] [3LL] [i_14] [(signed char)15])))))));
        }
        arr_45 [i_11] = ((/* implicit */unsigned long long int) 1784952949U);
        var_35 = ((/* implicit */short) arr_26 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]);
        var_36 = ((/* implicit */unsigned short) (((~(20ULL))) & (((unsigned long long int) 0LL))));
    }
    for (long long int i_15 = 0; i_15 < 24; i_15 += 3) 
    {
        /* LoopNest 2 */
        for (short i_16 = 1; i_16 < 22; i_16 += 3) 
        {
            for (unsigned char i_17 = 2; i_17 < 23; i_17 += 4) 
            {
                {
                    var_37 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)124)) <= (((((/* implicit */_Bool) 482336490414366780LL)) ? (((/* implicit */int) (short)21564)) : (((/* implicit */int) arr_47 [i_15]))))))), (var_2)));
                    var_38 = ((/* implicit */short) max((((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) ((((/* implicit */long long int) -645581762)) <= (arr_48 [8] [i_16] [i_15]))))))), (var_5)));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_18 = 2; i_18 < 21; i_18 += 3) 
        {
            var_39 &= ((/* implicit */signed char) ((arr_49 [i_18] [(signed char)18]) > (arr_49 [i_18] [2LL])));
            var_40 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) >= (var_9)));
            arr_56 [i_15] = ((/* implicit */signed char) var_11);
            var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) arr_47 [i_18]))));
        }
        var_42 = ((/* implicit */unsigned long long int) ((unsigned short) (short)7));
    }
}
