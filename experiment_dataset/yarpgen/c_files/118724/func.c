/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118724
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] [5LL] = ((/* implicit */long long int) ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_2 [i_0])))) : (((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)135))) : (559973889U)))));
        arr_4 [i_0] = ((/* implicit */signed char) min(((+(559973888U))), (((/* implicit */unsigned int) ((signed char) (_Bool)1)))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_17 |= (+(arr_5 [i_1]));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 2; i_3 < 20; i_3 += 2) 
            {
                var_18 = ((/* implicit */int) ((unsigned short) -7493910337300806478LL));
                var_19 = ((/* implicit */unsigned int) (-(((arr_13 [i_1] [(signed char)18] [i_3] [i_2]) % (arr_12 [i_2] [i_2] [i_3] [i_2])))));
                var_20 = ((/* implicit */unsigned long long int) ((unsigned int) ((signed char) arr_7 [i_2])));
            }
            var_21 ^= ((/* implicit */_Bool) (-(var_15)));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 1; i_6 < 20; i_6 += 3) 
                        {
                            var_22 = ((/* implicit */long long int) ((unsigned int) arr_6 [i_6 - 1] [i_6 + 1]));
                            var_23 &= ((/* implicit */signed char) (-(arr_18 [i_1] [i_6 - 1] [i_6 + 1] [i_4] [i_6 + 1])));
                        }
                        for (int i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            var_24 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_4])) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) arr_15 [i_1] [i_2] [i_4]))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((559973889U) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 1823663622574758807LL)))))))));
                            arr_24 [i_1] [i_2] [i_2] [i_5] [i_7] = ((/* implicit */long long int) var_13);
                            arr_25 [i_1] [i_7] [i_4] [i_2] [i_7] [i_7] [0U] = ((/* implicit */int) arr_11 [i_1] [i_4] [i_5] [i_2]);
                            var_26 = ((/* implicit */long long int) (+(((arr_5 [i_7]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                        }
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_28 [i_1] [i_2] [(signed char)11] [i_5] [i_5])) / (arr_5 [i_5])));
                            arr_29 [i_2] = ((/* implicit */long long int) 397643241);
                        }
                        arr_30 [i_1] [i_4] [i_4] [i_4] [i_5] [i_2] |= ((/* implicit */_Bool) ((unsigned short) 397643214));
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 2; i_9 < 21; i_9 += 3) 
                        {
                            arr_33 [i_9] [i_1] [i_2] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((arr_9 [i_4] [i_2] [i_9]) ? (((/* implicit */unsigned long long int) (~(3716746173223965191LL)))) : (arr_5 [i_4])));
                            var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)57))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    for (signed char i_12 = 3; i_12 < 21; i_12 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64))));
                            arr_41 [i_2] [i_2] [7LL] [i_2] [i_2] = ((/* implicit */_Bool) var_12);
                        }
                    } 
                } 
                arr_42 [i_1] [i_2] [i_10] [i_10] = ((((/* implicit */_Bool) ((int) (signed char)-28))) ? (3370811439432884247LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)91))));
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 22; i_14 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */int) arr_47 [i_2] [i_2] [i_1] [i_2] [i_2]);
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) var_9))));
                            var_32 &= ((/* implicit */signed char) var_15);
                        }
                    } 
                } 
            }
        }
        for (long long int i_15 = 0; i_15 < 22; i_15 += 2) 
        {
            arr_51 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_5)) * (4667972120943395783ULL)));
            /* LoopNest 3 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 3; i_17 < 21; i_17 += 1) 
                {
                    for (short i_18 = 0; i_18 < 22; i_18 += 2) 
                    {
                        {
                            arr_62 [i_1] [i_15] [i_15] [20] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_17 + 1]))) : (arr_54 [i_17 - 1] [i_17 - 1] [i_17 - 3] [i_17 - 2])));
                            var_33 -= ((/* implicit */_Bool) ((unsigned long long int) 4208425059814945237LL));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (signed char i_19 = 0; i_19 < 22; i_19 += 2) 
            {
                var_34 = ((/* implicit */short) ((long long int) arr_32 [20LL] [i_15] [i_15] [i_15] [20LL] [i_15] [i_15]));
                var_35 = ((/* implicit */signed char) var_9);
                var_36 += ((/* implicit */signed char) ((short) var_9));
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_21 = 1; i_21 < 21; i_21 += 2) 
                {
                    for (unsigned int i_22 = 0; i_22 < 22; i_22 += 1) 
                    {
                        {
                            var_37 = ((_Bool) ((unsigned int) var_4));
                            arr_75 [i_1] [i_22] [i_20] [i_1] [i_22] [i_21] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)199))));
                            arr_76 [(signed char)13] [i_15] [i_20] [(signed char)1] [i_15] [i_22] [i_21 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)56)) : (((((/* implicit */_Bool) 559973894U)) ? (((/* implicit */int) (_Bool)1)) : (var_5)))));
                            arr_77 [i_1] [i_15] [i_1] [i_1] [i_1] [i_22] [i_22] = ((/* implicit */int) arr_63 [i_1] [(signed char)5] [i_1]);
                        }
                    } 
                } 
                arr_78 [i_15] [19LL] [(unsigned char)5] = ((/* implicit */int) ((unsigned int) 5901347405558083599LL));
            }
            for (short i_23 = 0; i_23 < 22; i_23 += 1) 
            {
                arr_81 [i_23] = var_10;
                arr_82 [i_23] [(_Bool)1] = ((/* implicit */short) ((((unsigned int) var_13)) == (var_13)));
            }
        }
    }
    for (long long int i_24 = 0; i_24 < 13; i_24 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
        {
            for (long long int i_26 = 1; i_26 < 12; i_26 += 2) 
            {
                for (long long int i_27 = 1; i_27 < 12; i_27 += 1) 
                {
                    {
                        arr_93 [i_24] [i_25] [i_24] [i_27] = ((min((arr_47 [i_26 + 1] [i_25] [i_26 + 1] [i_25] [4U]), (((/* implicit */unsigned int) arr_21 [i_26 + 1] [i_26 + 1] [i_26 + 1] [i_27 - 1] [i_26])))) % (((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_26 + 1] [i_25] [i_24] [i_24] [i_24]))))));
                        arr_94 [5U] [5U] [i_25] [12LL] [i_25] [i_27] = ((/* implicit */long long int) var_13);
                        arr_95 [i_24] |= ((/* implicit */short) var_2);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
        {
            for (signed char i_29 = 0; i_29 < 13; i_29 += 3) 
            {
                {
                    var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((2238015608U), (((/* implicit */unsigned int) 397643214)))), (((/* implicit */unsigned int) ((1640500659U) > (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))) ? (((/* implicit */unsigned long long int) -4208425059814945253LL)) : (min((((/* implicit */unsigned long long int) -2987368958987232376LL)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))) * (1899955981485375141ULL))))))))));
                    arr_102 [i_29] [(unsigned char)1] [i_28] [i_28] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) / (2654466624U)));
                    /* LoopNest 2 */
                    for (signed char i_30 = 0; i_30 < 13; i_30 += 2) 
                    {
                        for (int i_31 = 1; i_31 < 12; i_31 += 3) 
                        {
                            {
                                var_39 = (+(((long long int) (signed char)7)));
                                arr_108 [i_29] [i_29] [i_29] [i_30] [i_31 - 1] = ((/* implicit */short) var_2);
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */short) (-(((/* implicit */int) ((((17750393742900736110ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) < (((/* implicit */unsigned long long int) arr_66 [i_24] [i_28 + 1] [i_29])))))));
                }
            } 
        } 
    }
    var_41 = ((/* implicit */long long int) var_13);
    /* LoopSeq 1 */
    for (long long int i_32 = 0; i_32 < 21; i_32 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_33 = 0; i_33 < 21; i_33 += 3) 
        {
            for (signed char i_34 = 0; i_34 < 21; i_34 += 1) 
            {
                {
                    arr_117 [i_32] [i_33] [i_32] [i_32] = max((((signed char) arr_54 [i_32] [i_33] [(short)13] [i_34])), (((signed char) (!(((/* implicit */_Bool) -7LL))))));
                    var_42 = ((/* implicit */_Bool) ((((min((-2987368958987232376LL), (((/* implicit */long long int) (signed char)107)))) + (9223372036854775807LL))) >> (((((min((4208425059814945260LL), (((/* implicit */long long int) (unsigned char)159)))) * (((/* implicit */long long int) ((/* implicit */int) ((short) 559973888U)))))) + (4965899LL)))));
                    arr_118 [i_32] [i_32] [i_33] [(signed char)5] = ((((_Bool) arr_15 [i_32] [i_33] [8LL])) ? ((-(max((((/* implicit */long long int) (unsigned short)31274)), (-1LL))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) var_5)) ? (arr_10 [i_33]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                    /* LoopNest 2 */
                    for (signed char i_35 = 0; i_35 < 21; i_35 += 3) 
                    {
                        for (signed char i_36 = 1; i_36 < 19; i_36 += 3) 
                        {
                            {
                                arr_123 [i_32] [i_35] [i_34] [i_33] [i_33] = ((/* implicit */short) (signed char)-72);
                                var_43 += ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) ((short) arr_38 [i_32] [i_33] [(_Bool)1] [i_32] [i_36]))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_5)))))))));
                                arr_124 [i_32] [i_33] [i_34] &= ((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) arr_64 [(short)13] [i_33] [i_33] [i_35])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) -9042818340073966149LL)))), (min((((/* implicit */long long int) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (549178945U)))), (min((((/* implicit */long long int) 3734993407U)), (var_8)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_44 = ((/* implicit */long long int) min(((signed char)16), ((signed char)-66)));
    }
}
