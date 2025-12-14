/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164894
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
    var_17 = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) max((9223372036854775776LL), (9223372036854775763LL)))), (min((18446744073709551592ULL), (((/* implicit */unsigned long long int) var_5))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) (((~(((((-12LL) + (9223372036854775807LL))) >> (((9223372036854775763LL) - (9223372036854775755LL))))))) % (((((((/* implicit */_Bool) var_7)) ? (-9223372036854775766LL) : (9223372036854775775LL))) / (((((/* implicit */_Bool) var_9)) ? (var_14) : (9223372036854775803LL)))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 11; i_1 += 4) /* same iter space */
        {
            var_18 -= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775773LL)) ? (31LL) : (-4346313208980176672LL)))) ? (-9223372036854775759LL) : (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [(short)3] [i_1 - 3]), ((short)-1))))))), (min((arr_5 [i_0] [i_1 + 2]), (-2LL)))));
            arr_6 [(short)10] [i_1] [i_1] = ((/* implicit */short) arr_5 [i_1 + 2] [i_1 + 1]);
            var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 3])) ? ((-(var_9))) : (min((4501400604114944ULL), (((/* implicit */unsigned long long int) -9223372036854775804LL)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) var_1)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)4558)) || (((/* implicit */_Bool) 0ULL))))))))))));
        }
        for (long long int i_2 = 3; i_2 < 11; i_2 += 4) /* same iter space */
        {
            arr_10 [i_2] = ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-32758)) + (2147483647))) << (((arr_8 [(short)0] [i_2 + 2]) - (1969754981536785911ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((14742879387450448397ULL) >= (((/* implicit */unsigned long long int) 33554431LL)))))) : (max((12200599800328584175ULL), (((/* implicit */unsigned long long int) (short)-7248)))));
            var_20 += arr_4 [i_0] [i_0];
            var_21 = ((((/* implicit */_Bool) (~(var_1)))) ? (0ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0])));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32041))) : (arr_9 [i_3])));
            var_22 &= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (arr_9 [i_3]) : (18032046014506949031ULL)));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (long long int i_5 = 3; i_5 < 11; i_5 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 4) /* same iter space */
                        {
                            arr_25 [i_0] [7ULL] [0ULL] [8ULL] [0ULL] = arr_5 [i_4] [i_0];
                            arr_26 [8LL] [i_3] [i_4] [i_5] [i_6] [i_5 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [2LL] [2LL] [i_5 - 1] [(short)3] [i_5 + 1])) ? (3137932804978605875ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                            var_23 = ((/* implicit */short) (~(10826450395292099495ULL)));
                            arr_27 [i_6] [i_5] [i_4] [i_4] [9LL] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) arr_18 [i_6 - 1] [i_6] [i_6] [i_0] [i_3] [i_0]));
                        }
                        for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned long long int) -14LL);
                            var_25 = ((/* implicit */short) var_1);
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */unsigned long long int) 7361265891857713503LL)) + (12815413551058264644ULL))))));
                            arr_34 [i_8 - 1] [i_5] [i_4] [i_3] [i_0] = ((/* implicit */unsigned long long int) arr_23 [i_3] [i_4] [i_5 + 1] [i_8 - 1]);
                        }
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((((/* implicit */_Bool) arr_9 [i_4])) ? (arr_9 [i_3]) : (7620293678417452113ULL)))));
                    }
                } 
            } 
            arr_35 [i_0] [4ULL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_3] [i_3])) ? (var_0) : (arr_18 [i_0] [i_0] [i_3] [i_3] [i_3] [i_3])));
            var_28 = ((/* implicit */unsigned long long int) arr_21 [i_0] [9LL] [i_3] [i_3] [i_3] [i_3] [(short)10]);
        }
    }
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        arr_38 [(short)0] = ((/* implicit */short) ((((/* implicit */_Bool) 4122098079843767362LL)) ? (arr_37 [i_9]) : (arr_36 [i_9] [i_9])));
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 19; i_10 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_11 = 1; i_11 < 17; i_11 += 4) 
            {
                for (unsigned long long int i_12 = 2; i_12 < 15; i_12 += 2) 
                {
                    {
                        arr_49 [i_9] [i_9] [(short)1] [i_11] = var_13;
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 1; i_13 < 17; i_13 += 2) 
                        {
                            var_29 = ((/* implicit */long long int) (short)-2935);
                            arr_53 [i_11] [i_10] [i_11 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_7)) ? (arr_43 [i_11] [i_11] [i_10] [i_11]) : (-3397951685539982060LL)))));
                            arr_54 [i_11] [6ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (arr_44 [i_11 + 1] [i_11 + 1] [i_11 + 2]) : (arr_37 [i_12 + 4])));
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (!(((/* implicit */_Bool) 7620293678417452108ULL)))))));
                        }
                        for (long long int i_14 = 3; i_14 < 18; i_14 += 2) 
                        {
                            var_31 = 5631330522651286971ULL;
                            var_32 = ((/* implicit */short) (~(((/* implicit */int) var_11))));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_15 = 2; i_15 < 16; i_15 += 4) 
            {
                for (unsigned long long int i_16 = 1; i_16 < 16; i_16 += 2) 
                {
                    for (unsigned long long int i_17 = 1; i_17 < 17; i_17 += 4) 
                    {
                        {
                            var_33 = ((((/* implicit */_Bool) arr_59 [i_9] [i_17 - 1] [17LL] [i_16 - 1])) ? (var_5) : (1743838826606314027LL));
                            arr_65 [i_9] [i_17] [i_15] [i_16] [i_17 + 2] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) var_12))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_18 = 1; i_18 < 16; i_18 += 2) 
        {
            var_34 = ((/* implicit */long long int) arr_40 [i_9]);
            var_35 = ((/* implicit */unsigned long long int) min((var_35), (7620293678417452111ULL)));
            arr_68 [i_18] [i_18] = ((/* implicit */short) (((+(arr_55 [i_18]))) / (((/* implicit */unsigned long long int) (-(var_4))))));
        }
        for (long long int i_19 = 4; i_19 < 16; i_19 += 2) 
        {
            var_36 = ((/* implicit */short) ((var_9) | (((/* implicit */unsigned long long int) -9223372036854775767LL))));
            arr_72 [i_9] [i_19] [6LL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32042)) * (((/* implicit */int) arr_39 [i_19 - 4] [i_19 + 3] [i_19 - 1]))));
            /* LoopNest 2 */
            for (long long int i_20 = 1; i_20 < 18; i_20 += 3) 
            {
                for (short i_21 = 1; i_21 < 16; i_21 += 2) 
                {
                    {
                        arr_78 [11LL] [i_19] [i_20 + 1] [i_21] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_70 [i_19])))) ? (6488351781649558796LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -5341949004679340180LL))))))));
                        arr_79 [i_9] [i_19] [i_21] = ((/* implicit */short) arr_69 [i_19 + 3] [i_21 - 1]);
                        var_37 |= ((/* implicit */short) (-(arr_62 [i_21 + 2] [i_19] [i_21 + 3] [i_19] [(short)2])));
                        arr_80 [i_21] = ((/* implicit */long long int) var_11);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_22 = 1; i_22 < 15; i_22 += 2) 
                        {
                            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (short)-27241))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4002093565848524671LL)) ? (16LL) : (0LL)))) : (((((/* implicit */_Bool) arr_36 [i_20] [(short)7])) ? (((/* implicit */unsigned long long int) arr_69 [(short)5] [(short)5])) : (0ULL)))));
                            var_39 *= var_7;
                            var_40 = arr_44 [i_9] [i_19 - 1] [7ULL];
                        }
                        for (unsigned long long int i_23 = 0; i_23 < 19; i_23 += 4) 
                        {
                            var_41 = ((/* implicit */unsigned long long int) min((var_41), (((((/* implicit */_Bool) (short)17873)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))) : (9223372036317904896ULL)))));
                            arr_86 [i_21] [i_21] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
                            var_42 += ((/* implicit */short) ((long long int) (~(3LL))));
                        }
                    }
                } 
            } 
        }
    }
    var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((18LL) >> (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (-748211327305393538LL))) + (1442LL)))))) ? (((/* implicit */unsigned long long int) ((long long int) 0ULL))) : (9223372037391646713ULL)));
}
