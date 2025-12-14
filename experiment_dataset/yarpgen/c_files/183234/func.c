/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183234
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
    var_12 = var_1;
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) < (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2122320074)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (_Bool)0))))))))));
        arr_3 [i_0] [16] = ((/* implicit */long long int) var_0);
        var_14 = ((/* implicit */unsigned char) ((((long long int) min(((short)22646), (((/* implicit */short) arr_0 [i_0]))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) + (((/* implicit */int) var_1))))) ? (((((/* implicit */unsigned int) var_5)) * (arr_1 [i_0]))) : (arr_1 [i_0]))))));
        var_15 += ((/* implicit */unsigned short) var_9);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) var_7);
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
        var_16 = ((/* implicit */int) ((signed char) (unsigned char)255));
    }
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        var_17 &= ((/* implicit */unsigned char) ((unsigned short) min((max((var_5), (var_5))), ((+(var_5))))));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned char)208);
    }
    for (short i_3 = 1; i_3 < 9; i_3 += 4) 
    {
        arr_17 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)22652))))) ? (((/* implicit */int) ((min((((/* implicit */unsigned int) var_5)), (var_3))) < (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_3]))) : (var_2)))))) : ((~(((/* implicit */int) (short)22658))))));
        var_18 = ((/* implicit */unsigned short) (short)-1);
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_3]))));
        var_20 = ((/* implicit */unsigned char) arr_1 [i_3]);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_5 = 3; i_5 < 23; i_5 += 3) 
        {
            arr_22 [i_4] [i_4] [i_4] = ((/* implicit */long long int) var_5);
            /* LoopSeq 3 */
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                arr_25 [i_6] [i_4] [i_4] = ((/* implicit */unsigned short) ((short) ((unsigned char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_20 [i_4] [i_5] [i_4]))))));
                var_21 = ((/* implicit */int) var_1);
                arr_26 [i_4] [i_4] [i_4] [i_4] = (short)-22640;
            }
            /* vectorizable */
            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                arr_29 [i_4] = ((/* implicit */unsigned short) (~(var_5)));
                arr_30 [(unsigned char)18] [i_4] [i_4] = ((/* implicit */short) ((unsigned long long int) 125829120U));
            }
            /* vectorizable */
            for (unsigned char i_8 = 1; i_8 < 22; i_8 += 3) 
            {
                arr_33 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((unsigned int) var_6));
                var_22 += ((/* implicit */unsigned int) var_5);
            }
            var_23 = ((((/* implicit */_Bool) ((((-1) + (2147483647))) >> (((((/* implicit */int) (unsigned char)237)) - (226)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) var_3)))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) (short)22641)) - (var_5)))), (arr_23 [i_5 - 1] [i_5 - 3] [i_5 + 1]))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            var_24 += ((/* implicit */unsigned long long int) arr_34 [6] [6]);
            arr_37 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((signed char) (unsigned char)122)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 127)) ? (arr_34 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133))))) != (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-73))) * (4294967295U))))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (var_9))) ^ (var_2)))));
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_19 [i_4]))) && (((_Bool) arr_19 [i_4]))));
            arr_38 [i_4] [i_4] = ((/* implicit */unsigned int) (short)-22647);
        }
    }
    /* LoopSeq 1 */
    for (int i_10 = 0; i_10 < 22; i_10 += 3) 
    {
        arr_42 [i_10] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_0))));
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            for (unsigned short i_12 = 1; i_12 < 19; i_12 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */int) var_9);
                        var_27 = ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
                        /* LoopSeq 3 */
                        for (unsigned short i_14 = 4; i_14 < 21; i_14 += 3) 
                        {
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_7))));
                            arr_54 [i_14] [i_10] [3LL] [i_12 + 2] [i_11] [i_10] [(signed char)10] = ((/* implicit */unsigned int) var_8);
                            arr_55 [i_10] [i_10] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))), (((unsigned int) ((unsigned short) (_Bool)1)))));
                            arr_56 [i_14] [i_10] [i_12] [i_10] [i_10] = ((/* implicit */signed char) (unsigned char)122);
                            var_29 = ((/* implicit */unsigned char) var_9);
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 4) 
                        {
                            arr_61 [i_10] [i_13] [i_11] [i_10] = ((/* implicit */unsigned int) 3102389261204774087LL);
                            var_30 = ((/* implicit */unsigned int) ((long long int) (unsigned short)62931));
                        }
                        for (unsigned int i_16 = 1; i_16 < 21; i_16 += 3) 
                        {
                            arr_66 [i_16] [i_10] [5ULL] [i_10] [i_10] = ((/* implicit */long long int) arr_27 [i_10] [i_10]);
                            var_31 = min((((unsigned char) min((((/* implicit */unsigned long long int) var_0)), (arr_53 [i_16] [6U] [(unsigned char)7] [i_11] [6U])))), (((/* implicit */unsigned char) ((min((var_9), (((/* implicit */unsigned int) var_10)))) > (((unsigned int) (unsigned char)237))))));
                            arr_67 [i_10] [i_11] [i_12] [i_11] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)239)) << (((((-2133795651) + (2133795676))) - (5)))));
                        }
                    }
                    for (unsigned short i_17 = 0; i_17 < 22; i_17 += 4) /* same iter space */
                    {
                        arr_70 [i_10] [i_12] [i_11] [i_10] = ((/* implicit */short) ((524287U) + (((/* implicit */unsigned int) 0))));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_7))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (arr_24 [i_12 + 2] [i_12 + 3] [i_12 + 3] [i_12 + 3]))))));
                        var_33 = ((/* implicit */unsigned int) ((unsigned short) var_3));
                    }
                    for (unsigned short i_18 = 0; i_18 < 22; i_18 += 4) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned int) 1469071404);
                        var_35 = ((/* implicit */signed char) var_11);
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        var_36 = ((/* implicit */signed char) ((int) (signed char)-81));
                        arr_77 [i_19 + 1] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((unsigned int) var_5));
                        arr_78 [i_19] [i_10] [i_10] [i_11] [i_10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) 9))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)141)) ? (arr_1 [i_12]) : (var_9)))))) || (((/* implicit */_Bool) (unsigned char)103))));
                        var_37 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (((((/* implicit */_Bool) arr_57 [i_19] [i_12] [i_12 - 1] [i_11] [21U] [i_10] [i_10])) ? (arr_23 [i_12] [i_12] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96)))))));
                    }
                    for (int i_20 = 0; i_20 < 22; i_20 += 1) 
                    {
                        arr_81 [i_10] [i_10] = ((/* implicit */unsigned int) ((((((unsigned long long int) var_4)) >> (((((/* implicit */int) (signed char)-8)) + (9))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_20] [i_12 + 3] [i_12 + 1] [i_12 + 2]))))))));
                        var_38 = ((/* implicit */long long int) -1738168734);
                        var_39 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_74 [i_10] [(signed char)1] [i_10])) : (((/* implicit */int) (unsigned short)61370))))), (536870911U))), ((-(arr_23 [i_12 + 2] [i_12 + 2] [i_12 - 1])))));
                    }
                    for (int i_21 = 0; i_21 < 22; i_21 += 4) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_3) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2604)))))) / (((((/* implicit */_Bool) arr_72 [i_11] [i_11] [i_11])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_74 [i_21] [i_11] [i_10]))))))) ? (((((/* implicit */_Bool) (~(204040267U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((~(3296038566U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_22 = 0; i_22 < 22; i_22 += 4) 
                        {
                            var_41 = ((/* implicit */int) max((max((arr_85 [i_12] [i_12 - 1] [i_12] [i_12 + 1] [i_12 - 1]), (arr_85 [i_12] [i_12] [i_12 - 1] [i_12 - 1] [i_12 - 1]))), (((/* implicit */unsigned int) ((signed char) (unsigned char)133)))));
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)58803)) - (((/* implicit */int) var_0))))) && (((/* implicit */_Bool) (~(var_5)))))))));
                            var_43 = ((/* implicit */unsigned int) var_5);
                            var_44 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_1))))));
                            var_45 += ((/* implicit */_Bool) ((short) ((min((((/* implicit */unsigned int) (short)22652)), (660247861U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2)))))));
                        }
                        for (unsigned long long int i_23 = 0; i_23 < 22; i_23 += 4) 
                        {
                            var_46 = ((/* implicit */unsigned short) max((arr_63 [i_23] [i_10] [(short)3] [21ULL] [i_10] [i_10] [21ULL]), (((arr_59 [9U] [i_23] [i_23] [i_23] [i_12] [i_12 + 1] [i_12]) == (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                            var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) var_3))));
                            arr_89 [i_23] [i_21] [i_12 + 1] [i_10] [(unsigned char)19] [i_11] [i_10] = arr_43 [i_23] [i_11];
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_24 = 0; i_24 < 22; i_24 += 4) 
                        {
                            arr_92 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16631801880876870513ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4005))) : (18446744073709551615ULL)));
                            arr_93 [i_24] [i_10] [i_12] [i_10] [i_10] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (unsigned char)128)), (4294967272U))) <= (0U)));
                            arr_94 [i_10] [i_12] [i_11] [i_10] = ((/* implicit */short) ((unsigned char) (unsigned char)14));
                            arr_95 [i_24] [i_10] [i_12 + 1] [i_10] [i_10] = ((/* implicit */unsigned int) arr_53 [i_24] [i_21] [i_12] [i_11] [8ULL]);
                        }
                        for (unsigned int i_25 = 1; i_25 < 20; i_25 += 4) 
                        {
                            var_48 = ((/* implicit */unsigned short) ((unsigned char) ((long long int) 3493140201U)));
                            var_49 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) -455369036)) ? (((var_5) + (((/* implicit */int) var_10)))) : (((int) 1814942192832681103ULL)))), (((var_1) ? (((/* implicit */int) ((_Bool) arr_45 [i_10]))) : (var_5)))));
                            arr_98 [i_10] [i_25 + 2] [i_21] [i_12] [i_11] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) -5342126473100778519LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (644790447U)))) ? (max((16631801880876870499ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                            arr_99 [i_10] [20LL] [i_10] = ((/* implicit */unsigned char) var_6);
                        }
                    }
                    for (int i_26 = 0; i_26 < 22; i_26 += 4) /* same iter space */
                    {
                        arr_102 [16ULL] [i_10] [i_11] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned short) arr_50 [i_26] [i_11] [5LL]))), (arr_24 [(signed char)17] [i_12] [i_11] [(unsigned char)11])));
                        var_50 = ((/* implicit */unsigned char) var_4);
                        arr_103 [i_10] [i_10] [i_11] [i_10] = ((_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) (signed char)-7))))) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) ((unsigned char) (short)-22653)))));
                        arr_104 [i_10] [i_12] [0U] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (-8344032181236524589LL)));
                    }
                }
            } 
        } 
    }
}
