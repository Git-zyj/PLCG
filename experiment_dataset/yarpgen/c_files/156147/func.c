/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156147
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [11U])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1 - 1]))))) ? (((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 1]))) : (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 - 1]))))))))));
            var_17 ^= ((/* implicit */int) (signed char)-60);
            /* LoopSeq 3 */
            for (signed char i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                var_18 = ((/* implicit */signed char) min((((/* implicit */int) arr_6 [i_2 + 3] [i_2] [i_2])), (((((/* implicit */int) arr_6 [i_2 + 3] [i_2] [i_2])) / (((/* implicit */int) arr_6 [i_2 + 3] [i_2 + 3] [i_2]))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_12 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)511)), (arr_4 [i_1 - 1] [i_2])))) ? (max((((/* implicit */long long int) arr_9 [i_1] [i_1] [i_1])), (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (-2600041625309715256LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                            var_19 = (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))) + (arr_7 [i_1] [i_1]))));
                        }
                    } 
                } 
                var_20 -= ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [(unsigned short)1] [i_1] [i_2 + 2] [i_2 + 1]);
            }
            for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_13 [i_0] [i_5] [i_1 - 1] [i_5]))));
                var_22 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) 7430983456763370367LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (9LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5])))))))) || ((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (2516372188U))))))));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 3922884031U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5]))) : (((unsigned long long int) min((((/* implicit */long long int) var_4)), (7016845310086360539LL)))))))));
                arr_16 [i_1] [i_1] [i_5] = ((/* implicit */unsigned int) ((17519946949513585836ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1934549631)) ^ (-7016845310086360522LL))))));
                var_24 = ((/* implicit */long long int) (signed char)-99);
            }
            for (int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                var_25 = ((/* implicit */long long int) (_Bool)0);
                /* LoopSeq 3 */
                for (signed char i_7 = 4; i_7 < 13; i_7 += 3) 
                {
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((long long int) arr_0 [(signed char)3]))) ? (((((/* implicit */_Bool) arr_5 [i_6])) ? (arr_13 [i_0] [i_6] [i_0] [i_6]) : (((/* implicit */unsigned long long int) var_8)))) : (0ULL))) >> (((((((/* implicit */_Bool) 7016845310086360539LL)) ? (-7016845310086360555LL) : (7016845310086360556LL))) + (7016845310086360578LL))))))));
                    arr_21 [i_0] [i_0] [i_6] [i_1] [11LL] = ((/* implicit */int) ((((((/* implicit */_Bool) min((8823829634628963782ULL), (((/* implicit */unsigned long long int) 4986649672050690579LL))))) ? (arr_4 [i_0] [i_7 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))))) == (((/* implicit */unsigned long long int) arr_0 [i_6]))));
                }
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                {
                    arr_24 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) arr_7 [i_1] [i_1]);
                    var_27 = ((/* implicit */short) 7016845310086360556LL);
                }
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
                {
                    var_28 = arr_7 [i_1] [i_6];
                    arr_28 [i_0] [i_1] [i_1] [i_6] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_9]))) - (((7016845310086360563LL) ^ (7016845310086360539LL)))));
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1] [i_9] [i_1] [i_1 - 1] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6] [i_6] [i_1]))) : (((((/* implicit */_Bool) arr_27 [i_1])) ? (((((/* implicit */_Bool) arr_20 [2ULL] [2ULL] [4] [i_6] [2ULL])) ? (-7016845310086360529LL) : (((/* implicit */long long int) var_8)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [(signed char)7] [i_0] [i_0]))) | (-7016845310086360557LL)))))));
                }
                arr_29 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1])), (((((/* implicit */_Bool) 11227034728774529131ULL)) ? ((+(arr_4 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93)))))));
            }
        }
        /* vectorizable */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0]))));
            /* LoopNest 3 */
            for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
                {
                    for (unsigned long long int i_13 = 3; i_13 < 14; i_13 += 3) 
                    {
                        {
                            var_31 ^= ((/* implicit */long long int) arr_6 [i_10] [i_11] [i_13]);
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)100)) || (((/* implicit */_Bool) (-(arr_14 [i_0] [(signed char)8] [(signed char)8] [9ULL]))))));
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-33)) ? (-7016845310086360555LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)31)))))) - (arr_4 [i_0] [i_10 - 1]))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_15 = 3; i_15 < 12; i_15 += 2) 
            {
                for (unsigned int i_16 = 0; i_16 < 15; i_16 += 4) 
                {
                    {
                        var_34 -= ((/* implicit */signed char) (_Bool)1);
                        var_35 = max((((/* implicit */unsigned long long int) arr_39 [i_0] [i_15] [i_16])), (min((min((((/* implicit */unsigned long long int) arr_40 [i_14] [i_14])), (arr_13 [i_0] [i_14] [i_15] [i_16]))), (((/* implicit */unsigned long long int) arr_27 [i_14])))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_17 = 3; i_17 < 14; i_17 += 4) 
            {
                for (unsigned int i_18 = 1; i_18 < 12; i_18 += 4) 
                {
                    for (unsigned long long int i_19 = 3; i_19 < 14; i_19 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((long long int) arr_11 [2ULL] [2ULL] [i_17] [3] [3] [3] [2ULL])))));
                            var_37 = ((((/* implicit */long long int) ((/* implicit */int) ((1606861932) == ((~(((/* implicit */int) var_10)))))))) * (min((((/* implicit */long long int) arr_14 [i_18 + 1] [i_18] [(signed char)1] [i_18])), (arr_40 [i_14] [i_14]))));
                        }
                    } 
                } 
            } 
        }
        var_38 = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) ((short) -5864932718904335437LL)))), ((~(min((((/* implicit */int) var_2)), (arr_39 [i_0] [i_0] [i_0])))))));
        var_39 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((7016845310086360572LL) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [13LL])))))))) + (arr_41 [i_0] [i_0])));
    }
    for (unsigned short i_20 = 0; i_20 < 18; i_20 += 2) 
    {
        var_40 = arr_56 [17];
        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */_Bool) arr_57 [i_20])) && (((/* implicit */_Bool) var_7)))) ? (-7016845310086360557LL) : (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_20]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) -2117110964)) : (7016845310086360527LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_20]))) : ((-(-7016845310086360548LL)))))));
    }
    for (unsigned long long int i_21 = 2; i_21 < 15; i_21 += 2) 
    {
        var_42 = ((/* implicit */_Bool) (((((~(((/* implicit */int) arr_56 [i_21])))) <= ((~(((/* implicit */int) arr_56 [i_21])))))) ? (((/* implicit */unsigned long long int) (~(min((arr_57 [i_21]), (((/* implicit */unsigned int) var_12))))))) : (max((((((/* implicit */_Bool) arr_59 [i_21] [i_21])) ? (((/* implicit */unsigned long long int) 7016845310086360524LL)) : (3ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14143)) * (((/* implicit */int) (signed char)-15)))))))));
        var_43 &= ((/* implicit */signed char) arr_59 [i_21] [i_21]);
    }
    var_44 = ((/* implicit */unsigned char) var_10);
}
