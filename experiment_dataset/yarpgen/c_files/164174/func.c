/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164174
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_1 [i_2 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_1] [i_2])))) : (max((arr_0 [i_0] [i_1]), (var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12022))))) < (arr_1 [i_0]))))) : (((((/* implicit */_Bool) 4294967295U)) ? (arr_2 [i_0] [i_1] [i_2 + 1]) : (max((((/* implicit */unsigned int) (unsigned short)65530)), (arr_0 [i_2 + 1] [i_0]))))));
                    arr_10 [(unsigned short)9] [i_1] [i_2] &= 1495073610U;
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1194631059U)) ? (4294967295U) : (1552198436U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_7 [(unsigned short)1] [i_1] [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_17 [i_4] [1U] [i_2] [i_2] [i_2 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 3005143673U)))) + (((((/* implicit */_Bool) (unsigned short)22)) ? (3128025625U) : (4294967294U))))))));
                                var_19 = (+((+(arr_15 [i_2 + 1] [i_2] [i_3 - 1] [i_3] [i_3 + 1] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_6 = 1; i_6 < 24; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    {
                        arr_27 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_25 [i_6 + 1] [i_5] [i_5] [i_5])))) ? (max((var_12), (((/* implicit */unsigned int) (unsigned short)21581)))) : (((((/* implicit */_Bool) var_4)) ? (arr_22 [i_6 + 1] [i_5] [i_5] [i_5]) : (arr_22 [i_6 + 1] [i_5] [i_5] [i_6])))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((1552198428U) > (4294967295U))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_7] [i_8])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_20 [i_5] [i_6]))))) : (((((/* implicit */_Bool) arr_24 [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [(unsigned short)18]))) : (4294967295U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : ((((+(199258529U))) >> (((var_14) - (3242604096U))))))))));
                        arr_28 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_24 [i_6 - 1] [i_6 - 1])) <= (((/* implicit */int) arr_24 [i_6 - 1] [i_6 - 1]))))) | (((((/* implicit */_Bool) arr_23 [i_5])) ? (((/* implicit */int) arr_24 [i_6 - 1] [i_6 + 1])) : (((/* implicit */int) arr_24 [i_6 + 1] [i_6 + 1]))))));
                        arr_29 [i_5] [i_6 + 1] [i_8] [i_5] = (unsigned short)65535;
                    }
                } 
            } 
        } 
        arr_30 [i_5] = (i_5 % 2 == zero) ? (((((/* implicit */_Bool) ((max((3082590077U), (2139153645U))) >> (((arr_23 [i_5]) - (2985881361U)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) max((arr_19 [i_5]), ((unsigned short)65520))))) + (((((/* implicit */_Bool) var_15)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36327))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 22U)) || (((/* implicit */_Bool) arr_18 [i_5]))))), ((unsigned short)65535))))))) : (((((/* implicit */_Bool) ((max((3082590077U), (2139153645U))) >> (((((arr_23 [i_5]) - (2985881361U))) - (3119333999U)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) max((arr_19 [i_5]), ((unsigned short)65520))))) + (((((/* implicit */_Bool) var_15)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36327))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 22U)) || (((/* implicit */_Bool) arr_18 [i_5]))))), ((unsigned short)65535)))))));
    }
    for (unsigned short i_9 = 4; i_9 < 15; i_9 += 1) 
    {
        var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57553))) % (2980356112U));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)27098)) ? (1225314828U) : (1070768093U)));
    }
    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_12 = 1; i_12 < 9; i_12 += 3) 
            {
                for (unsigned int i_13 = 2; i_13 < 6; i_13 += 4) 
                {
                    {
                        var_23 -= ((/* implicit */unsigned int) arr_37 [i_10]);
                        /* LoopSeq 4 */
                        for (unsigned short i_14 = 2; i_14 < 7; i_14 += 1) /* same iter space */
                        {
                            arr_50 [i_11] [i_14] = arr_48 [i_10] [i_11] [i_12] [i_13] [i_14];
                            arr_51 [i_14] [(unsigned short)4] [(unsigned short)3] [i_13] [i_14] = ((/* implicit */unsigned short) arr_46 [i_10] [7U] [i_12] [3U] [i_12] [i_13] [i_14]);
                            var_24 = ((/* implicit */unsigned short) max(((-((-(1687666121U))))), (((((/* implicit */_Bool) (unsigned short)46050)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_12 - 1] [i_11] [i_10]))) : (arr_49 [i_10] [i_13] [i_12 - 1] [i_13] [i_14 + 2])))));
                            arr_52 [i_14] [i_14] [i_14 + 1] [i_14] [i_14] = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) var_10)), (((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
                            var_25 = max((((/* implicit */unsigned int) arr_3 [i_12] [i_11] [4U])), (arr_36 [3U] [i_12] [i_14]));
                        }
                        /* vectorizable */
                        for (unsigned short i_15 = 2; i_15 < 7; i_15 += 1) /* same iter space */
                        {
                            arr_56 [i_15] = ((unsigned int) arr_20 [i_12 + 1] [i_15 + 2]);
                            var_26 = var_4;
                        }
                        for (unsigned int i_16 = 2; i_16 < 8; i_16 += 1) /* same iter space */
                        {
                            arr_59 [i_10] [1U] [i_10] [i_10] [i_10] [i_10] [i_16] = ((/* implicit */unsigned short) var_14);
                            arr_60 [i_16] [(unsigned short)7] [4U] [i_13] [i_16] [i_10] [i_16] = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)8195));
                        }
                        /* vectorizable */
                        for (unsigned int i_17 = 2; i_17 < 8; i_17 += 1) /* same iter space */
                        {
                            arr_63 [i_17] [i_11] [i_12 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_12 [i_10] [i_11] [i_12 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (3U))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_12 - 1] [i_17 - 2] [i_13 + 1])))));
                            var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)21581))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_18 = 4; i_18 < 9; i_18 += 1) 
            {
                for (unsigned short i_19 = 2; i_19 < 9; i_19 += 1) 
                {
                    {
                        arr_70 [i_10] [i_11] [7U] [i_18] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 638794897U)) ? (((var_12) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65518))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */unsigned int) (~((-(((/* implicit */int) (unsigned short)16))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_16)))) & (((unsigned int) (unsigned short)65535)))));
                        arr_71 [i_10] [i_11] [i_18] = ((/* implicit */unsigned int) var_13);
                        var_28 += ((/* implicit */unsigned short) 992594016U);
                    }
                } 
            } 
            var_29 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)1332))));
            /* LoopNest 2 */
            for (unsigned int i_20 = 1; i_20 < 8; i_20 += 2) 
            {
                for (unsigned short i_21 = 0; i_21 < 10; i_21 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_22 = 3; i_22 < 9; i_22 += 4) 
                        {
                            arr_79 [i_10] [(unsigned short)1] [2U] [i_20] [i_22] = var_16;
                            arr_80 [i_20] [i_11] [i_20] [i_21] [i_21] [i_22] = arr_36 [i_10] [i_10] [i_10];
                            arr_81 [i_10] [i_20] [i_11] [i_21] [i_22] = ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_10] [9U] [i_20] [i_21] [i_20]))) : (var_17))))));
                            arr_82 [i_10] [i_11] [i_20 + 1] [i_21] [i_20] = ((unsigned int) (((!(((/* implicit */_Bool) (unsigned short)21384)))) && (((/* implicit */_Bool) 1496301953U))));
                        }
                        arr_83 [i_10] [i_20] [i_20] [i_21] [i_20] [i_11] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3664792725U)) ? (((/* implicit */int) arr_18 [i_20 + 1])) : (((/* implicit */int) arr_18 [i_10]))))), ((~(((((/* implicit */_Bool) 4294967295U)) ? (4294967295U) : (2575052231U))))));
                    }
                } 
            } 
        }
        var_30 = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)65518));
        arr_84 [i_10] = ((((/* implicit */_Bool) arr_44 [6U] [i_10] [i_10] [i_10] [i_10] [9U])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) (unsigned short)54663))) >= (((/* implicit */int) ((4294967295U) > (1265402020U)))))))) : (((((/* implicit */_Bool) arr_35 [i_10] [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_10] [i_10]))) : (arr_58 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))));
    }
}
