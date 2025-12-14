/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144077
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 24; i_2 += 4) 
            {
                {
                    var_14 = (-(max((((/* implicit */long long int) ((((/* implicit */_Bool) 4360347945737210050LL)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_7 [i_0] [3] [i_2] [8]))))), (min((-9223372036854775796LL), (((/* implicit */long long int) (unsigned char)1)))))));
                    var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))))), ((~(arr_6 [i_0] [i_1] [i_2 - 1])))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((int) max((((/* implicit */unsigned short) (unsigned char)187)), ((unsigned short)0)))) >> (((arr_8 [i_0] [i_0] [7] [7]) - (3893126875U))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_3 = 2; i_3 < 24; i_3 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)27))));
            arr_12 [i_0] [i_0] [i_3] = ((/* implicit */int) ((_Bool) arr_0 [i_0] [i_3]));
        }
        for (unsigned char i_4 = 3; i_4 < 21; i_4 += 4) 
        {
            var_18 = ((/* implicit */unsigned int) ((arr_13 [i_4] [i_4] [i_4]) & (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)4)) * (((/* implicit */int) arr_11 [i_0] [i_0] [i_4]))))))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                var_19 = ((/* implicit */unsigned int) (-((+(-1899304565)))));
                var_20 *= ((/* implicit */unsigned int) (((~(3717131978749483388LL))) <= (((/* implicit */long long int) ((int) (unsigned char)189)))));
            }
            for (int i_6 = 2; i_6 < 23; i_6 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    for (unsigned int i_8 = 2; i_8 < 24; i_8 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) 3717131978749483362LL);
                            var_22 = ((/* implicit */unsigned char) max((((min((arr_21 [i_0] [i_4] [i_7] [i_8]), (((/* implicit */int) arr_10 [i_4] [19] [12])))) >> ((((~(1558098023))) + (1558098025))))), (((/* implicit */int) ((_Bool) arr_4 [i_4 - 3] [(unsigned short)21] [i_4 - 3])))));
                        }
                    } 
                } 
                var_23 |= ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_6] [i_4] [i_0] [(unsigned char)23]))))), ((-(arr_8 [i_6] [i_6] [i_4] [i_0])))))));
            }
            /* vectorizable */
            for (int i_9 = 2; i_9 < 23; i_9 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 1; i_10 < 24; i_10 += 2) 
                {
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        {
                            var_24 -= ((/* implicit */_Bool) arr_30 [i_0] [i_4] [i_9 + 1] [i_4] [5U] [5U] [i_11]);
                            arr_34 [i_4 - 1] [13] [i_9] [i_4 - 1] [i_0] = ((int) arr_21 [i_0] [i_0] [i_0] [(unsigned char)11]);
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) 969017815)) ? (((((/* implicit */_Bool) 1689269589)) ? (arr_32 [i_0] [i_4] [i_9] [i_9] [i_4] [15]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)187))))) : (((/* implicit */unsigned int) arr_18 [i_4 + 2] [i_0])))))));
                        }
                    } 
                } 
                arr_35 [i_4 + 1] = ((/* implicit */unsigned int) ((int) arr_7 [i_4] [i_9 - 2] [i_4 - 1] [i_4]));
            }
            for (int i_12 = 2; i_12 < 23; i_12 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_13 = 2; i_13 < 23; i_13 += 1) 
                {
                    arr_42 [i_13] [i_12] [i_0] [i_13] = (-(-1774121009));
                    /* LoopSeq 1 */
                    for (int i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        arr_45 [(unsigned char)13] [i_0] [(unsigned char)12] [(unsigned char)12] [i_13] [(unsigned char)12] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)27))));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_19 [i_4] [18] [i_4] [i_14]))));
                    }
                    arr_46 [i_13] [i_13] [i_12] [i_13] = ((/* implicit */_Bool) ((int) (+(((/* implicit */int) arr_11 [i_0] [(unsigned char)15] [i_13])))));
                }
                var_27 ^= ((/* implicit */_Bool) max(((-(((int) arr_10 [i_0] [i_0] [i_0])))), (min((((/* implicit */int) arr_28 [i_0] [i_4] [i_12] [i_0])), (((((/* implicit */_Bool) 1838775818U)) ? (((/* implicit */int) (unsigned char)35)) : (-1899304565)))))));
            }
        }
        for (long long int i_15 = 1; i_15 < 24; i_15 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_16 = 0; i_16 < 25; i_16 += 1) 
            {
                var_28 = ((/* implicit */unsigned char) min((arr_24 [i_16] [i_0] [i_15] [i_0] [i_0] [i_0] [24]), (((((/* implicit */_Bool) (+(arr_13 [i_0] [i_16] [i_16])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -821641211))))) : (1233597283)))));
                var_29 = ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((1224760885), (arr_18 [16] [16]))))))) : (((/* implicit */int) (unsigned char)255)));
                /* LoopNest 2 */
                for (unsigned char i_17 = 3; i_17 < 22; i_17 += 2) 
                {
                    for (unsigned char i_18 = 3; i_18 < 23; i_18 += 1) 
                    {
                        {
                            arr_57 [i_0] [i_0] [i_0] [i_0] [(unsigned char)12] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_16] [i_17]))));
                            arr_58 [i_0] [i_0] [i_0] [i_0] [i_0] [10] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((max((408980702), (-2147483646))) >= (((/* implicit */int) arr_2 [i_15 + 1] [(unsigned short)10]))))), (((((/* implicit */_Bool) arr_29 [i_0] [i_15] [i_16] [i_16] [i_16])) ? ((+(0U))) : (((/* implicit */unsigned int) ((-1) / (arr_36 [i_16] [i_16] [(unsigned char)8] [i_0]))))))));
                            var_30 = ((/* implicit */unsigned char) min((max((((/* implicit */int) arr_9 [i_0] [i_15 + 1] [16U] [22])), ((-2147483647 - 1)))), (((/* implicit */int) (!(((/* implicit */_Bool) max((627712388), (-1209075866)))))))));
                        }
                    } 
                } 
            }
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((unsigned short) ((unsigned int) arr_33 [i_15 - 1] [i_15 - 1] [i_15] [i_15 - 1] [i_15]))))));
            /* LoopNest 3 */
            for (unsigned int i_19 = 0; i_19 < 25; i_19 += 4) 
            {
                for (unsigned int i_20 = 2; i_20 < 24; i_20 += 4) 
                {
                    for (int i_21 = 2; i_21 < 21; i_21 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) arr_7 [i_0] [(_Bool)1] [(_Bool)1] [5]))));
                            arr_67 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_37 [i_0] [(unsigned char)7]);
                            arr_68 [2LL] [i_15] [i_19] [i_20] [i_21 - 2] = ((/* implicit */long long int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_22 = 0; i_22 < 25; i_22 += 1) 
        {
            var_33 = ((unsigned int) max((arr_55 [i_0] [i_22]), (arr_55 [i_0] [i_22])));
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_21 [i_0] [(unsigned char)7] [i_0] [i_22])), (1879048192U))), (((/* implicit */unsigned int) (unsigned char)255))))) ? (((/* implicit */int) (_Bool)1)) : ((-(max((((/* implicit */int) (unsigned char)24)), (-1)))))));
            var_35 = ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) (-(((/* implicit */int) arr_26 [i_0] [i_0] [i_22] [i_22]))))), (-2305843009213693952LL)))));
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 25; i_23 += 2) 
            {
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_25 = 0; i_25 < 25; i_25 += 2) 
                        {
                            var_36 = (+(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((2456191477U) << (((((/* implicit */int) (unsigned short)65514)) - (65497))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0])))))));
                            var_37 = ((/* implicit */unsigned char) min((max((min((((/* implicit */unsigned int) arr_52 [i_25] [i_22] [i_23])), (arr_64 [i_0] [6U] [i_24] [i_25]))), (((/* implicit */unsigned int) (!(arr_73 [i_0] [i_0] [i_25])))))), (((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) (unsigned short)6063))))))));
                            var_38 = ((/* implicit */unsigned int) (unsigned char)255);
                            arr_78 [i_0] [(unsigned char)24] [i_24] [i_23] [i_22] [i_0] [i_0] = min((((((/* implicit */int) arr_23 [i_25] [i_25] [i_24] [i_23] [1] [i_22] [i_0])) << (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [17] [i_0] [i_0] [i_0])))), (((int) 1899756837U)));
                        }
                        /* vectorizable */
                        for (unsigned char i_26 = 0; i_26 < 25; i_26 += 4) 
                        {
                            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) arr_9 [i_22] [i_23] [i_22] [i_22]))));
                            var_40 = ((int) arr_77 [i_0] [i_22] [i_23] [i_26]);
                        }
                        arr_83 [i_23] [i_23] [i_23] [18U] [i_0] = ((/* implicit */unsigned char) (~(arr_13 [i_0] [i_0] [i_23])));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_27 = 1; i_27 < 23; i_27 += 2) 
    {
        var_41 = ((/* implicit */int) arr_32 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27]);
        arr_86 [i_27] [i_27] = ((/* implicit */unsigned char) (+(max(((+(3374086933U))), (((/* implicit */unsigned int) max((arr_29 [i_27] [i_27] [i_27] [(_Bool)1] [i_27 - 1]), ((unsigned char)25))))))));
        var_42 = ((/* implicit */_Bool) (unsigned char)115);
    }
    var_43 = (~(max((3455529859U), (((/* implicit */unsigned int) var_11)))));
    var_44 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(1161448979))))))));
    var_45 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(1965384396)))), ((+(19U)))))) ? (((/* implicit */int) ((unsigned char) (~(var_3))))) : (max(((~(1674920126))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))))));
}
