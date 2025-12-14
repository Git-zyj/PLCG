/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110995
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) var_18);
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    var_20 = ((/* implicit */unsigned long long int) ((long long int) var_0));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) var_14))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_13 [i_4] [i_3] [i_3 + 2] [i_3] [i_2] [i_2])) : (((/* implicit */int) arr_13 [i_4] [i_3] [i_3 - 2] [i_3] [i_3] [i_3]))));
                            var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_9))));
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((var_11) ^ (((/* implicit */unsigned long long int) 134215680))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (signed char)104))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            arr_18 [i_0] [i_1] [i_0] [i_3] [i_5] = ((/* implicit */signed char) 0LL);
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) : (arr_9 [i_5] [i_3 + 1])));
                            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */short) 1606746036);
                        }
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((unsigned char) var_19));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)37128)) ? (-16LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_3 - 2] [i_3 - 1] [i_1])))));
                        }
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_7] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_16 [i_3 - 1] [i_1] [i_2] [i_3 - 1]))));
                            arr_26 [i_2] [i_7] [i_2] [i_3] [i_7] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 14482572183211912373ULL)) ? (var_7) : (((/* implicit */unsigned long long int) 0LL))));
                        }
                        var_27 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)28408)) ? (0LL) : (((/* implicit */long long int) var_19))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 1; i_8 < 7; i_8 += 3) 
                        {
                            arr_30 [i_8] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (var_19))))) == (((((/* implicit */_Bool) (unsigned short)28404)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))) : (1160754167U)))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)28412)) << (16LL)));
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 2) 
                        {
                            arr_33 [i_0] [i_1] [i_1] [i_9] [i_1] [i_9] = ((/* implicit */unsigned char) (unsigned short)37128);
                            arr_34 [i_9] [i_3] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)28415))));
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 4) 
                        {
                            arr_37 [i_10] [i_3] [i_2] [i_0] = ((/* implicit */unsigned int) var_18);
                            arr_38 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) -7LL)) ? (((/* implicit */long long int) var_19)) : (-10LL)));
                            var_29 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                        }
                    }
                    /* LoopSeq 1 */
                    for (int i_11 = 2; i_11 < 9; i_11 += 2) 
                    {
                        arr_41 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_13))));
                        arr_42 [i_1] [i_2] [i_11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_11 + 2] [i_11 + 2])), ((unsigned short)15626))))));
                        var_30 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (short)-9632)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)37133)) + (((/* implicit */int) (signed char)(-127 - 1)))))) : (min((8938843991683277225ULL), (((/* implicit */unsigned long long int) (unsigned char)120)))))));
                    }
                }
                for (unsigned char i_12 = 2; i_12 < 9; i_12 += 3) 
                {
                    arr_47 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~((+(min((-1153060922), (((/* implicit */int) arr_2 [i_0]))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            arr_54 [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) arr_15 [i_12 + 1] [i_12 + 1] [i_12] [i_12 - 2] [i_12 - 1])))));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (unsigned short)37139))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_16))))))));
                            var_32 = ((/* implicit */long long int) ((unsigned long long int) max((10LL), (((/* implicit */long long int) var_6)))));
                            var_33 = ((/* implicit */short) ((((/* implicit */int) (short)-10955)) <= ((~(((((/* implicit */int) (unsigned short)37140)) & (1868991842)))))));
                        }
                        for (int i_15 = 0; i_15 < 11; i_15 += 1) 
                        {
                            arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) arr_4 [i_12 + 1] [i_12 + 1]))))) ? (((/* implicit */int) ((signed char) 924050625U))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))))));
                            var_34 = ((/* implicit */unsigned long long int) (+(1808231875U)));
                            arr_58 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_55 [i_12 - 1] [i_12] [i_12] [i_12 - 1] [i_12] [i_12 + 2] [i_12 + 1])) ? (((/* implicit */int) (unsigned short)47330)) : (var_3)))));
                        }
                        var_35 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) & (((/* implicit */int) max(((unsigned short)28430), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)57771))))))))));
                        arr_59 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_0] [i_12 + 1] [i_12] [i_12 + 1]))) ^ (var_7))))));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        arr_63 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1076310277))))), (max((var_17), (((/* implicit */unsigned int) arr_12 [i_12 + 2] [i_12 + 2] [i_12] [i_12] [i_12]))))));
                        arr_64 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((long long int) arr_1 [i_12])) + (((/* implicit */long long int) min((var_19), (((/* implicit */int) arr_56 [i_16] [i_12] [i_0] [i_0]))))))))));
                    }
                }
                for (unsigned char i_17 = 0; i_17 < 11; i_17 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 3; i_18 < 9; i_18 += 2) 
                    {
                        arr_70 [i_18] [i_18] [i_18] [i_0] = ((/* implicit */unsigned long long int) ((max((arr_12 [i_18 - 2] [i_18] [i_18 - 3] [i_18 + 2] [i_1]), (arr_12 [i_18 - 2] [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_0]))) ? (((/* implicit */int) (signed char)-80)) : (-123375941)));
                        arr_71 [i_0] [i_1] [i_17] [i_17] [i_18] [i_18] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_66 [i_18 - 3] [i_18 - 2] [i_18 + 2] [i_18 - 1])))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_19 = 4; i_19 < 10; i_19 += 3) 
                        {
                            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_16 [i_0] [i_19 - 3] [i_18 - 2] [i_18]), (arr_16 [i_0] [i_19 - 4] [i_18 - 1] [i_18])))) >= (((/* implicit */int) (unsigned short)28418))));
                            arr_75 [i_19] [i_18] [i_18] [i_0] [i_18] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((var_4) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_0] [i_19 - 2] [i_19] [i_19]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1076310273)))))) : (((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) & (7571373973601224076ULL))))));
                        }
                        for (short i_20 = 0; i_20 < 11; i_20 += 4) 
                        {
                            arr_80 [i_0] [i_18] [i_18] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)28442);
                            arr_81 [i_1] [i_17] [i_17] [i_18] = ((/* implicit */short) (-(1076310277)));
                            var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) max((((/* implicit */int) max((arr_78 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) (signed char)28))))), (((int) arr_65 [i_18 - 3])))))));
                            var_38 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)61))))), (((((/* implicit */_Bool) var_2)) ? (4231990786U) : (((/* implicit */unsigned int) arr_60 [i_18] [i_18] [i_17] [i_1] [i_0])))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)14)), (var_5))))))))));
                        }
                    }
                    arr_82 [i_0] [i_0] [i_1] [i_17] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_1)), ((~(arr_65 [i_1])))));
                    var_39 = ((/* implicit */signed char) 18154045);
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 2) 
                {
                    var_40 = ((/* implicit */signed char) (~((+(18U)))));
                    arr_85 [i_21] [i_1] [i_0] = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28429)) ? (2983994980U) : (((/* implicit */unsigned int) -1076310282)))))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_22 = 1; i_22 < 15; i_22 += 2) 
    {
        var_41 = var_19;
        var_42 = ((/* implicit */unsigned long long int) (unsigned char)50);
        var_43 = ((/* implicit */long long int) (+(1U)));
    }
    /* LoopSeq 1 */
    for (long long int i_23 = 3; i_23 < 16; i_23 += 2) 
    {
        arr_91 [i_23] = ((/* implicit */unsigned char) (~(2ULL)));
        var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (var_17)))), (((arr_88 [i_23]) ^ (((/* implicit */unsigned long long int) 123375950)))))))))));
        arr_92 [i_23] = ((/* implicit */int) (~((-(max((1257740692U), (((/* implicit */unsigned int) var_19))))))));
    }
}
