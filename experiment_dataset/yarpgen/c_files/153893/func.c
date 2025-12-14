/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153893
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
    for (long long int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (-(var_8)));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) min((((/* implicit */long long int) (signed char)101)), (arr_9 [i_3] [i_3] [i_3]))))))));
                    arr_13 [i_0] [i_1] [i_1] = (+(((unsigned long long int) var_10)));
                    var_13 *= ((/* implicit */unsigned long long int) (-(731967377U)));
                }
                for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 4) 
                {
                    arr_16 [i_1] [i_1] [i_1] [i_1 - 2] = ((/* implicit */long long int) ((unsigned int) (((-(var_9))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))));
                    arr_17 [i_1] [i_1] [i_2] [4LL] = ((/* implicit */unsigned long long int) (~(((long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) 3463342437U)))))));
                    arr_18 [i_0] [i_1] [i_2] [7U] [i_1] [i_1] = 18446744073709551612ULL;
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_8 [i_0] [i_0] [6ULL] [i_2 + 2])))) ? (min((((/* implicit */unsigned long long int) var_9)), (arr_8 [i_1] [i_1] [i_1] [i_2 + 2]))) : (arr_8 [i_0 + 1] [i_2] [i_2] [i_2 + 1]))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    var_15 = ((/* implicit */unsigned int) min((var_15), ((~(arr_1 [i_0 - 4])))));
                    var_16 = ((/* implicit */long long int) var_6);
                    var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1 + 1]))));
                    arr_22 [i_1] [3U] [i_1] = ((/* implicit */long long int) 3463342459U);
                }
                arr_23 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_2 - 1] [i_2] [i_2] [i_2]))))) << (((/* implicit */int) arr_19 [i_0] [i_2 - 1] [i_2] [i_0 - 2] [i_0 - 2]))));
            }
            /* vectorizable */
            for (unsigned long long int i_6 = 4; i_6 < 9; i_6 += 4) 
            {
                var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3463342459U)));
                arr_28 [2ULL] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_8 [i_6] [i_6 + 2] [i_6 + 2] [(_Bool)1]);
                var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_6 + 1] [i_6 + 3] [i_1 - 3] [i_1 - 3] [i_0 + 1]))));
            }
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 831624857U)) ? (arr_0 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)6))) : (8167252785865293203LL)));
                arr_32 [i_1] [i_1 + 1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_1 - 3] [i_1 - 3] [i_1 - 3])) ? (arr_29 [i_7] [2ULL] [i_0 + 1]) : (arr_29 [i_0 - 1] [i_0 - 1] [i_7])));
            }
            var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))) < (((unsigned long long int) 5007253716857610359LL))));
            arr_33 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), ((-(((/* implicit */int) (_Bool)1))))))) % (max((((/* implicit */unsigned long long int) arr_6 [i_0 - 4] [i_1 + 1])), (var_6)))));
        }
        /* LoopNest 3 */
        for (signed char i_8 = 3; i_8 < 11; i_8 += 4) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 4) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) 8981204927013341019LL)) ? (3806537945826334996LL) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (unsigned char)255)))) - (((/* implicit */long long int) ((/* implicit */int) ((arr_30 [i_10 + 1] [7LL] [9LL]) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-5)))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            var_23 += ((/* implicit */long long int) var_3);
                            var_24 = ((/* implicit */unsigned long long int) arr_6 [i_10] [i_11]);
                        }
                        for (unsigned long long int i_12 = 3; i_12 < 9; i_12 += 4) 
                        {
                            var_25 *= ((/* implicit */_Bool) (-(max((var_1), (((/* implicit */unsigned long long int) 3463342418U))))));
                            arr_47 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */signed char) ((long long int) ((831624821U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))));
                            arr_48 [i_8] [i_8] = ((/* implicit */unsigned long long int) var_9);
                        }
                        arr_49 [i_0] [i_8] [(signed char)10] [i_10] = ((/* implicit */unsigned char) ((((unsigned long long int) (~(3463342459U)))) | (((/* implicit */unsigned long long int) var_0))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_13 = 0; i_13 < 16; i_13 += 4) 
    {
        var_26 += ((((unsigned long long int) var_9)) * (var_1));
        /* LoopSeq 1 */
        for (unsigned long long int i_14 = 4; i_14 < 14; i_14 += 4) 
        {
            arr_54 [i_13] = ((/* implicit */long long int) (signed char)-6);
            /* LoopNest 2 */
            for (signed char i_15 = 0; i_15 < 16; i_15 += 4) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        arr_61 [i_13] [i_14] [i_13] [i_16] = ((((/* implicit */_Bool) arr_52 [i_14 + 1])) ? (min((((/* implicit */unsigned int) (unsigned char)0)), (arr_58 [i_14 - 2] [i_14 - 3] [i_16] [7LL]))) : (((((/* implicit */_Bool) arr_52 [i_14 - 4])) ? (arr_58 [i_14 - 4] [i_14 + 1] [i_15] [i_16]) : (arr_58 [i_14 - 3] [i_14 - 3] [i_16] [i_16]))));
                        var_27 += ((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) arr_51 [i_13] [i_13])));
                    }
                } 
            } 
            var_28 = var_9;
        }
        var_29 = ((/* implicit */unsigned int) ((((arr_59 [i_13] [i_13] [i_13] [i_13]) >> (((((/* implicit */int) (signed char)117)) - (99))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_51 [i_13] [i_13])))))) > (((831624857U) >> (((var_8) - (2787602772U)))))))))));
        arr_62 [i_13] = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) arr_59 [i_13] [i_13] [i_13] [i_13])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_17 = 0; i_17 < 16; i_17 += 4) 
        {
            arr_66 [i_13] |= ((/* implicit */unsigned long long int) 4062328541U);
            arr_67 [i_13] [i_13] = ((/* implicit */signed char) (_Bool)1);
            /* LoopSeq 1 */
            for (long long int i_18 = 0; i_18 < 16; i_18 += 4) 
            {
                arr_71 [i_13] [i_13] [6LL] [0ULL] = ((/* implicit */long long int) (~(arr_50 [i_17])));
                var_30 = ((long long int) ((((/* implicit */_Bool) arr_65 [i_17])) ? (((/* implicit */unsigned long long int) arr_56 [i_13] [i_13] [i_18])) : (12435937412542880035ULL)));
                arr_72 [i_18] = ((signed char) arr_52 [i_17]);
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)-7))));
            }
        }
        for (unsigned char i_19 = 2; i_19 < 15; i_19 += 4) 
        {
            arr_76 [i_19] [i_19] [i_19] = ((/* implicit */unsigned long long int) max((((signed char) (~(1709766394U)))), (((signed char) arr_59 [i_19 - 2] [i_19 - 1] [i_13] [i_19 - 1]))));
            arr_77 [i_13] [i_19] [i_13] = ((long long int) (_Bool)1);
            arr_78 [i_13] [i_19] [i_13] = (!(((/* implicit */_Bool) arr_50 [i_19])));
            /* LoopNest 2 */
            for (unsigned int i_20 = 0; i_20 < 16; i_20 += 4) 
            {
                for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 4) 
                {
                    {
                        arr_84 [i_20] [i_13] [i_20] [i_13] [i_19] [6LL] = ((arr_70 [i_13]) << (((/* implicit */int) (_Bool)1)));
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (!((_Bool)1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)14)))))))))));
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned long long int) 3463342464U);
        }
        for (long long int i_22 = 4; i_22 < 14; i_22 += 4) 
        {
            arr_87 [15ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_70 [i_22 + 2]))));
            var_34 = ((/* implicit */unsigned long long int) arr_69 [i_13] [i_22] [i_22]);
        }
    }
    var_35 = ((/* implicit */unsigned char) var_8);
}
