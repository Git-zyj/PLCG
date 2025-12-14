/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12632
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
    var_19 = ((/* implicit */short) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65527))) * (2147467264U)));
        var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_15))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)220)))))) == ((+(var_8)))));
            arr_9 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (var_6))))) & (((78219568182860677ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238)))))));
        }
        for (int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            arr_13 [i_1] [i_3] [i_1] = ((((var_16) / (var_8))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                var_23 = ((/* implicit */signed char) min((((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_5)))), (((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (var_17))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        {
                            arr_23 [i_4] [i_4] [i_4] [i_4] [i_1] = ((/* implicit */signed char) min(((-(((/* implicit */int) var_17)))), ((+(((/* implicit */int) var_2))))));
                            arr_24 [i_1] [i_1] = ((/* implicit */unsigned short) (~((~(1335891414670308181ULL)))));
                        }
                    } 
                } 
                arr_25 [i_1] [i_3] [i_1] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (unsigned char)26)), (2147500020U))), (((/* implicit */unsigned int) min((((/* implicit */short) var_17)), (var_1))))));
                arr_26 [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) >> (((/* implicit */int) var_17))))), ((~(var_8)))));
            }
            /* LoopSeq 4 */
            for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                arr_29 [i_1] [i_3] [i_7] [i_7] = ((/* implicit */signed char) min((((4072246912U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65527))))), (((/* implicit */unsigned int) (signed char)-60))));
                arr_30 [(unsigned char)7] [i_1] [i_7] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_0)), (var_8)));
                arr_31 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) var_1)), (var_16)))));
            }
            for (unsigned int i_8 = 1; i_8 < 22; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_9 = 4; i_9 < 22; i_9 += 3) 
                {
                    arr_38 [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) var_2))))), (min((min((var_16), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) var_7))))));
                    arr_39 [i_1] [i_3] [i_8] [i_9] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((((/* implicit */int) var_17)) / (((/* implicit */int) var_10))))) - (var_12)))));
                    arr_40 [i_1] [(unsigned char)6] [(short)18] [i_1] = max(((+(((/* implicit */int) var_1)))), (((/* implicit */int) max(((unsigned short)65527), ((unsigned short)20333)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        arr_45 [i_1] [i_3] [(signed char)0] [i_3] [i_3] &= ((/* implicit */short) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_1))));
                        var_24 ^= ((/* implicit */unsigned char) (+(var_8)));
                    }
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        var_25 -= ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) var_11)), (var_12)))));
                        arr_50 [i_1] [i_1] [i_8] [13U] [i_11] = ((/* implicit */_Bool) max((((((/* implicit */int) var_15)) - (((/* implicit */int) var_1)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_15)), (var_10))))));
                        var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_9))))), (((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                        var_28 = ((/* implicit */short) var_18);
                    }
                }
                arr_53 [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */signed char) var_9)), (var_15)))), (((((/* implicit */int) (unsigned char)230)) | (((/* implicit */int) (unsigned char)251))))));
            }
            for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_14 = 2; i_14 < 21; i_14 += 2) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) var_11);
                            var_30 = ((/* implicit */int) max((max((var_13), (var_10))), (((/* implicit */unsigned char) var_15))));
                            var_31 = max(((+(((/* implicit */int) var_1)))), (((((/* implicit */int) var_15)) / (((/* implicit */int) var_7)))));
                            var_32 = ((/* implicit */unsigned long long int) min(((+(34811379))), (((/* implicit */int) var_17))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_16 = 0; i_16 < 24; i_16 += 1) 
                {
                    var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) == (var_8))))));
                    arr_65 [i_1] = ((/* implicit */short) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_13))));
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_15))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_17 = 1; i_17 < 22; i_17 += 2) 
                {
                    var_35 += ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_7))));
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 1; i_18 < 22; i_18 += 1) 
                    {
                        arr_70 [i_13] [i_13] &= ((/* implicit */unsigned short) ((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        arr_71 [i_1] [i_17] [i_13] [(unsigned short)10] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_17))));
                    }
                    arr_72 [i_1] [i_1] = ((/* implicit */unsigned char) var_16);
                }
            }
            /* vectorizable */
            for (int i_19 = 0; i_19 < 24; i_19 += 3) 
            {
                arr_76 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
                /* LoopSeq 4 */
                for (signed char i_20 = 0; i_20 < 24; i_20 += 3) /* same iter space */
                {
                    var_36 ^= ((/* implicit */unsigned short) ((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                    arr_79 [i_19] [i_1] = var_8;
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) var_2))));
                }
                for (signed char i_21 = 0; i_21 < 24; i_21 += 3) /* same iter space */
                {
                    arr_84 [8ULL] [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_18))));
                    var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_13)))))));
                    arr_85 [(unsigned short)14] [i_19] [i_19] [i_1] [i_21] [i_19] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))));
                    /* LoopSeq 1 */
                    for (unsigned short i_22 = 3; i_22 < 21; i_22 += 2) 
                    {
                        arr_88 [i_1] [i_3] [(unsigned char)5] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_6))));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))));
                        arr_89 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned short)1] [17ULL] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
                    }
                }
                for (signed char i_23 = 0; i_23 < 24; i_23 += 3) /* same iter space */
                {
                    var_40 &= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)205)) / (((/* implicit */int) (unsigned char)5))));
                    var_41 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_9))));
                    /* LoopSeq 2 */
                    for (unsigned int i_24 = 0; i_24 < 24; i_24 += 2) 
                    {
                        arr_97 [(unsigned char)19] [i_3] [i_24] [i_24] [i_1] [i_24] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_18))));
                        var_42 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_1))));
                        var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))));
                    }
                    for (unsigned short i_25 = 2; i_25 < 21; i_25 += 3) 
                    {
                        var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) var_5))));
                        arr_102 [i_1] [22U] [i_1] [i_19] [i_19] [22U] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_10))));
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_5))));
                    }
                }
                for (signed char i_26 = 0; i_26 < 24; i_26 += 3) /* same iter space */
                {
                    var_46 = ((/* implicit */unsigned long long int) (~(var_12)));
                    var_47 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) || (var_6)));
                    arr_107 [(_Bool)1] [i_3] &= ((/* implicit */int) var_11);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_27 = 0; i_27 < 24; i_27 += 2) /* same iter space */
                    {
                        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) (+(var_8))))));
                        var_49 ^= ((/* implicit */short) (~(((/* implicit */int) var_4))));
                    }
                    for (unsigned long long int i_28 = 0; i_28 < 24; i_28 += 2) /* same iter space */
                    {
                        var_50 = ((/* implicit */signed char) var_7);
                        var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_7))));
                    }
                    for (unsigned long long int i_29 = 0; i_29 < 24; i_29 += 2) /* same iter space */
                    {
                        arr_119 [i_1] [i_3] [i_1] = ((/* implicit */signed char) var_2);
                        arr_120 [i_1] [i_1] [i_19] [i_1] [i_29] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_18))));
                        var_52 -= ((/* implicit */unsigned int) ((19925641513440956LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)-22814)))));
                    }
                }
            }
            var_53 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_4)) / (((/* implicit */int) var_4))))));
        }
        arr_121 [i_1] = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) max((var_9), (var_9)))), (var_8)))));
    }
    for (signed char i_30 = 0; i_30 < 24; i_30 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_31 = 3; i_31 < 23; i_31 += 3) 
        {
            arr_128 [i_30] = ((/* implicit */unsigned short) (~(var_14)));
            var_54 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_4))))) - ((~(((/* implicit */int) var_2))))));
            var_55 = ((/* implicit */unsigned short) min((0U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1539426909)))))));
        }
        for (unsigned int i_32 = 0; i_32 < 24; i_32 += 2) 
        {
            var_56 -= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) var_7)), (var_8))), (((/* implicit */unsigned long long int) var_18))));
            var_57 += ((/* implicit */signed char) ((((var_14) == (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
        }
        for (unsigned long long int i_33 = 3; i_33 < 23; i_33 += 1) 
        {
            /* LoopNest 3 */
            for (short i_34 = 0; i_34 < 24; i_34 += 3) 
            {
                for (_Bool i_35 = 1; i_35 < 1; i_35 += 1) 
                {
                    for (unsigned int i_36 = 0; i_36 < 24; i_36 += 4) 
                    {
                        {
                            var_58 *= ((/* implicit */unsigned char) ((max((var_12), (((/* implicit */unsigned int) var_1)))) - (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (min((var_12), (((/* implicit */unsigned int) var_17))))))));
                            var_59 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_17)))))) != (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (var_14)))));
                            arr_143 [i_36] [i_30] [i_30] [i_30] [i_30] [(unsigned char)6] = ((/* implicit */unsigned short) (!(((((/* implicit */int) var_2)) <= (((/* implicit */int) var_17))))));
                        }
                    } 
                } 
            } 
            arr_144 [i_30] = ((/* implicit */unsigned short) min(((unsigned char)19), (((/* implicit */unsigned char) max((((/* implicit */signed char) (_Bool)1)), ((signed char)32))))));
        }
        arr_145 [i_30] = ((/* implicit */unsigned int) (-(((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) > (4294967295U))))))));
    }
}
