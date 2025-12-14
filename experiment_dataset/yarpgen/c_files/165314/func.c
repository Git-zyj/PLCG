/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165314
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
    var_16 *= ((/* implicit */signed char) min((((/* implicit */int) (unsigned short)18522)), (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)9)))), (((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) (signed char)6);
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)121))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 12; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_18 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_4 [i_3 + 1] [i_1])) ? (2147483647) : (((/* implicit */int) arr_2 [i_3 - 1]))))));
                                var_19 *= ((/* implicit */short) (-(((/* implicit */int) (short)20097))));
                                var_20 = ((/* implicit */unsigned short) var_14);
                                arr_15 [i_1] [i_3 + 1] = ((/* implicit */signed char) ((arr_10 [i_0] [5LL] [i_2] [i_3 - 3] [i_4] [i_4]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [i_4] [i_3 + 1] [i_3 - 4])))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)19801))) >= (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) 2801675922U)) : (arr_8 [i_0] [2] [i_1] [i_2])))));
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    var_22 = ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) var_6)))));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_5])) == (((/* implicit */int) (signed char)6)))))));
                }
                /* vectorizable */
                for (unsigned char i_6 = 4; i_6 < 9; i_6 += 2) 
                {
                    var_24 = ((/* implicit */int) ((short) arr_18 [i_6] [i_6 + 1] [(unsigned short)6] [i_6 + 2]));
                    arr_21 [i_6 + 1] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) arr_6 [i_0] [(signed char)5])) : (((/* implicit */int) arr_0 [i_0]))))));
                    arr_22 [i_0] [i_1] [i_6 + 3] = ((/* implicit */long long int) 4045242820U);
                }
                var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((arr_3 [i_1] [i_0] [i_0]), (arr_3 [i_0] [i_1] [i_0])))), (2697990767U)));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_7 = 2; i_7 < 16; i_7 += 2) 
    {
        var_26 = ((/* implicit */unsigned short) arr_24 [i_7] [i_7 + 1]);
        var_27 = ((/* implicit */unsigned int) arr_24 [i_7] [i_7]);
        arr_26 [(short)15] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)127))));
        var_28 = ((/* implicit */unsigned short) (signed char)-106);
    }
    for (short i_8 = 0; i_8 < 19; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 3; i_9 < 17; i_9 += 3) 
        {
            for (short i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                {
                    var_29 = ((/* implicit */signed char) max((((/* implicit */int) arr_31 [i_9 - 3] [i_9])), (((((/* implicit */int) var_2)) / (((/* implicit */int) arr_32 [i_9 + 2] [i_9] [i_10]))))));
                    arr_34 [i_8] [i_9] = ((/* implicit */int) arr_29 [i_8]);
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 524659604393886376ULL)) ? ((~(((/* implicit */int) min((((/* implicit */signed char) arr_32 [i_8] [(unsigned short)7] [i_8])), (arr_31 [i_8] [i_8])))))) : (((/* implicit */int) max((arr_33 [i_8] [1U] [i_8] [i_8]), (((/* implicit */unsigned short) (unsigned char)140))))))))));
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) var_13))));
        arr_35 [i_8] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_28 [i_8])), (((((/* implicit */int) (signed char)32)) ^ (((/* implicit */int) arr_32 [i_8] [i_8] [0U]))))));
    }
    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
    {
        arr_40 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */long long int) arr_37 [i_11])), (arr_39 [i_11]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33027)))));
        var_32 = ((/* implicit */int) 2697990764U);
    }
    for (long long int i_12 = 0; i_12 < 10; i_12 += 2) 
    {
        var_33 = ((/* implicit */unsigned int) (unsigned short)33027);
        var_34 &= ((/* implicit */_Bool) ((((((arr_18 [i_12] [i_12] [i_12] [i_12]) - (arr_10 [i_12] [i_12] [(unsigned short)11] [i_12] [i_12] [i_12]))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))))) >> (((((/* implicit */int) arr_42 [i_12])) - (36973)))));
        /* LoopNest 2 */
        for (unsigned short i_13 = 2; i_13 < 9; i_13 += 4) 
        {
            for (unsigned short i_14 = 3; i_14 < 8; i_14 += 4) 
            {
                {
                    arr_48 [i_13] [i_13] [2U] [i_13] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((((/* implicit */_Bool) arr_36 [i_12] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))) : (arr_24 [i_13 + 1] [i_14]))) <= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-4)), ((unsigned short)0)))))))), (((((/* implicit */int) var_7)) << (((((/* implicit */int) (unsigned short)36944)) - (36935)))))));
                    /* LoopNest 2 */
                    for (signed char i_15 = 2; i_15 < 7; i_15 += 4) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 10; i_16 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_18 [4ULL] [i_13 - 2] [i_13] [i_13]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18475)))))) * (((/* implicit */int) (signed char)-6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (2640952336U)));
                                arr_53 [i_12] [i_13 - 2] [i_14 - 1] [i_15 + 3] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)54266)) ? (((((/* implicit */_Bool) (((_Bool)0) ? (2640952336U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_12])))))) ? (((/* implicit */long long int) var_8)) : (arr_24 [i_12] [i_12]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_10)))))))));
                                var_36 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((_Bool) arr_47 [i_15 + 1] [i_14] [i_14] [i_13 - 2]))), (max((arr_47 [i_15 + 1] [i_14] [i_14] [i_13 - 2]), (arr_47 [i_15 + 1] [i_14] [i_13] [i_13 - 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
