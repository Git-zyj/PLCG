/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174849
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
    var_18 = max((var_8), (((unsigned int) var_10)));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 6; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_5)), (var_12))) != (((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_3] [i_2] [i_1 - 1] [i_3]))))))));
                        var_20 = ((/* implicit */signed char) ((max((((var_6) << (((((/* implicit */int) var_3)) - (174))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967295U))))))) ^ (max((((4294967295U) / (4294967295U))), (min((4294967295U), (0U)))))));
                        var_21 = ((/* implicit */int) (-(min((max((arr_1 [i_2]), (arr_1 [i_0 - 2]))), (((/* implicit */long long int) ((arr_6 [i_0] [i_1 - 1]) << (((var_15) - (582139125U))))))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    var_22 = ((/* implicit */unsigned char) var_7);
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (3766886321U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) : (arr_1 [i_0 - 3])));
                        var_24 = ((/* implicit */unsigned int) 9223372036854775807LL);
                    }
                    arr_17 [i_0 + 4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) arr_9 [i_4] [i_1 - 2] [i_1 - 1] [i_1]))));
                    var_25 = ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_16)) : (0U))) ^ (((10U) << (((arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]) - (3638262075U))))));
                }
                var_26 = ((/* implicit */unsigned int) arr_5 [i_0]);
                var_27 = (-(((/* implicit */int) ((min((9223372036854775807LL), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 4012038837038758944ULL))))))));
                var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0 - 2] [i_0 + 1] [i_0] [i_0 + 4] [i_0 + 3])) ? (arr_16 [i_0 - 1] [i_0 - 2] [(unsigned char)4] [i_0] [i_0]) : (29U)))) ? (arr_14 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0] [i_0] [i_0 + 2]) : (((((/* implicit */_Bool) arr_14 [i_0 - 3] [i_0 - 2] [3U] [i_0] [i_0 + 3] [i_0])) ? (arr_16 [i_0 + 2] [i_0 - 2] [i_0] [i_0 + 3] [i_0]) : (var_15))));
                /* LoopSeq 2 */
                for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((arr_13 [i_0] [i_0] [2] [i_0] [i_0] [i_0 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0 + 4] [i_0 - 1] [i_0] [i_0] [i_0])))))) ^ (((((/* implicit */_Bool) 1422901527U)) ? (arr_18 [i_0] [i_1 + 1] [i_4] [i_1 + 1]) : (((/* implicit */long long int) var_8)))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) 4113396132U)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (signed char)127)))))));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((min((var_1), (((/* implicit */unsigned int) (signed char)127)))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2])))))) >= (((unsigned long long int) 4294967295U))));
                    arr_20 [i_7] [i_7] [i_4] [i_1] [i_0] = ((/* implicit */signed char) min((arr_11 [i_0 + 1] [i_0 - 3] [i_1 - 1]), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)243)))))));
                    arr_21 [i_0 - 3] [i_1] [i_4] [i_7] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) min((4294967294U), (4294967295U)))) || (((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) - (9223372036854775807LL)))))))));
                }
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    arr_26 [i_0] [i_1] [i_4] [i_8] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4]))) : (4294967295U)))) ? (((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) (unsigned char)5))))) : (max((((/* implicit */long long int) var_17)), (9223372036854775807LL))))), (((/* implicit */long long int) arr_9 [i_4] [i_1 - 2] [i_4] [i_4]))));
                    var_31 = -997138185;
                }
            }
            for (unsigned int i_9 = 1; i_9 < 9; i_9 += 3) 
            {
                var_32 = ((/* implicit */unsigned int) arr_1 [i_0]);
                arr_30 [i_9] [i_1] [i_9] = ((/* implicit */long long int) (unsigned char)23);
                var_33 = ((/* implicit */signed char) 9223372036854775790LL);
                var_34 = ((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) arr_24 [i_9] [i_1] [i_0 - 1] [i_0])) : (-6845780284700616503LL))))), (((/* implicit */long long int) ((((/* implicit */int) ((4294967295U) <= (var_1)))) < ((+(((/* implicit */int) (unsigned char)0)))))))));
            }
            for (int i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                var_35 = ((/* implicit */unsigned int) ((unsigned char) var_11));
                var_36 ^= ((/* implicit */unsigned long long int) ((min((arr_0 [i_1]), (arr_0 [i_1 - 1]))) + (((((/* implicit */_Bool) arr_10 [i_0] [i_1 - 1] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) : (arr_0 [i_10])))));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        {
                            var_37 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) max((5696066882231392604LL), (((/* implicit */long long int) var_14))))))));
                            var_38 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) 2147483647)), (9223372036854775807LL)));
                            var_39 = ((/* implicit */unsigned int) 2147483647);
                        }
                    } 
                } 
            }
        }
        var_40 = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
        var_41 ^= ((/* implicit */long long int) 8665781443036155624ULL);
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
        {
            for (unsigned int i_14 = 4; i_14 < 6; i_14 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 10; i_16 += 3) 
                        {
                            {
                                var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_48 [i_14 - 1] [i_14 + 2] [i_14] [i_14] [i_14] [i_14 + 1] [i_14 + 3])))) ? (((((/* implicit */_Bool) min((9U), (((/* implicit */unsigned int) (signed char)62))))) ? (min((4294967295U), (arr_13 [i_0] [i_0 - 1] [i_0 - 1] [4] [i_0 + 2] [i_0 + 3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (var_16) : (((/* implicit */int) var_3))))))) : ((~(arr_38 [i_0] [i_13] [i_14 + 2] [i_15] [i_14])))));
                                var_43 = ((/* implicit */unsigned char) var_11);
                                var_44 = ((/* implicit */signed char) (((+(((unsigned int) arr_10 [i_0] [i_13] [i_14 + 4] [i_15] [i_15] [i_16])))) >> (((/* implicit */int) ((((unsigned int) var_1)) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_12 [i_15] [i_14] [i_13] [i_0])) == (var_9))))))))));
                            }
                        } 
                    } 
                    arr_49 [i_0 - 2] [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) arr_12 [i_0 + 2] [i_14 - 4] [i_14 - 3] [i_14 + 4])) : (var_2)))) ? (((arr_12 [i_0 + 1] [i_14 - 2] [i_14 + 4] [i_14 + 1]) / (arr_12 [i_0 + 1] [i_14 + 3] [i_14 + 2] [i_14 - 4]))) : (((-2147483647) / (arr_12 [i_0 + 2] [i_14 + 2] [i_14 + 3] [i_14 - 2])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_17 = 0; i_17 < 12; i_17 += 3) 
    {
        var_45 = (~(((/* implicit */int) (unsigned char)13)));
        arr_53 [i_17] [i_17] = ((/* implicit */signed char) var_13);
        var_46 = (i_17 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) arr_50 [i_17])) << (((((/* implicit */int) arr_51 [i_17])) - (102)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) arr_50 [i_17])) << (((((((/* implicit */int) arr_51 [i_17])) - (102))) - (34))))));
        /* LoopNest 3 */
        for (signed char i_18 = 1; i_18 < 11; i_18 += 3) 
        {
            for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                for (unsigned int i_20 = 0; i_20 < 12; i_20 += 4) 
                {
                    {
                        var_47 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_54 [i_17] [i_17] [i_20])) ? (9223372036854775807LL) : (((/* implicit */long long int) 16U)))));
                        arr_61 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned long long int) var_3);
                    }
                } 
            } 
        } 
    }
    for (long long int i_21 = 0; i_21 < 11; i_21 += 1) 
    {
        var_48 = ((/* implicit */signed char) ((long long int) arr_55 [i_21]));
        arr_64 [i_21] [i_21] = ((/* implicit */unsigned char) (((-(max((var_7), (var_7))))) == (((/* implicit */unsigned int) ((/* implicit */int) min((arr_60 [i_21] [i_21] [i_21] [i_21]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 2147483647)))))))))));
        var_49 ^= ((/* implicit */int) min((4294967295U), (3304286426U)));
    }
}
