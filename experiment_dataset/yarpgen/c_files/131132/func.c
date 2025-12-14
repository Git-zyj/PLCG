/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131132
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (min((((/* implicit */unsigned int) var_5)), (((32505856U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64)))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (signed char)127))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)255)) >> (((max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) 532676608U)) : (arr_1 [i_0]))))) - (532676585LL)))));
            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) 466613850U))));
            var_14 = max(((~(arr_5 [i_1 + 1] [i_1 + 1]))), (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1])) ? (9223372036854775807LL) : (((/* implicit */long long int) 3762290688U)))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) (-((~(arr_5 [i_3] [i_1])))));
                        var_16 = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
                        var_17 += ((/* implicit */signed char) 3828353436U);
                        var_18 = ((/* implicit */short) var_3);
                        var_19 ^= ((/* implicit */short) (-(532676628U)));
                    }
                } 
            } 
        }
    }
    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    {
                        arr_22 [i_7] [i_6] [i_5] [i_4] = ((/* implicit */unsigned int) -11LL);
                        var_20 ^= ((/* implicit */signed char) ((((/* implicit */int) max((min((((/* implicit */unsigned short) (signed char)-72)), (var_2))), (((/* implicit */unsigned short) (short)-32755))))) & (((/* implicit */int) arr_13 [i_4]))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-6)))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((((/* implicit */unsigned int) var_10)), ((~(max((3591513848U), (((/* implicit */unsigned int) var_7)))))))))));
        /* LoopNest 2 */
        for (signed char i_8 = 1; i_8 < 23; i_8 += 2) 
        {
            for (short i_9 = 3; i_9 < 22; i_9 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) min((var_23), (var_4)));
                    var_24 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967295U))))), (722697029U));
                    arr_28 [i_4] [i_4] [i_4] [i_9] = ((/* implicit */signed char) var_8);
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_27 [i_4] [i_4] [i_4]), (3762290667U)))) ? (((((/* implicit */_Bool) arr_25 [i_4] [i_4])) ? (arr_27 [i_4] [i_4] [i_4]) : (arr_27 [i_4] [i_4] [i_4]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_4])) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) arr_19 [i_4] [i_4] [i_4]))))))))));
    }
    /* vectorizable */
    for (long long int i_10 = 1; i_10 < 12; i_10 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) max((var_26), (((((/* implicit */_Bool) (short)4780)) ? (((unsigned int) 703453440U)) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))));
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (arr_27 [i_10 + 2] [i_10 + 3] [i_10 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
        arr_31 [i_10] = ((/* implicit */unsigned short) (signed char)127);
        /* LoopNest 3 */
        for (unsigned short i_11 = 0; i_11 < 15; i_11 += 4) 
        {
            for (long long int i_12 = 3; i_12 < 14; i_12 += 2) 
            {
                for (signed char i_13 = 0; i_13 < 15; i_13 += 3) 
                {
                    {
                        arr_42 [i_11] [i_10] [i_12] [i_13] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 3572270267U))))));
                        var_28 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_1))))));
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_12 - 1] [i_10 + 3] [i_10 - 1])) / (((/* implicit */int) arr_19 [i_12 - 2] [i_10 - 1] [i_10 + 1])))))));
                        /* LoopSeq 1 */
                        for (long long int i_14 = 3; i_14 < 11; i_14 += 4) 
                        {
                            arr_45 [i_11] [i_10] [i_14 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 26U)) ? (((/* implicit */int) (signed char)-1)) : (((((/* implicit */_Bool) arr_43 [i_10] [i_10] [i_10] [i_10] [i_13] [i_14])) ? (((/* implicit */int) arr_26 [i_10])) : (((/* implicit */int) var_7))))));
                            var_30 = 355551456U;
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_15 = 0; i_15 < 14; i_15 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_16 = 4; i_16 < 12; i_16 += 1) 
        {
            for (signed char i_17 = 3; i_17 < 10; i_17 += 4) 
            {
                {
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((signed char)14), (arr_4 [i_15] [i_16]))))) != ((-(arr_3 [i_15] [i_16] [i_17 + 3]))))))) : (var_6)));
                    /* LoopNest 2 */
                    for (long long int i_18 = 4; i_18 < 11; i_18 += 1) 
                    {
                        for (signed char i_19 = 3; i_19 < 12; i_19 += 1) 
                        {
                            {
                                arr_60 [i_19] [i_16] [i_15] [i_18 - 3] [i_16] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) arr_21 [i_16] [i_16] [i_16] [i_16 - 1])) >= (((/* implicit */int) (!(((/* implicit */_Bool) -7242440829547024627LL)))))))), ((~(((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) arr_4 [i_15] [i_17])))))))));
                                var_32 = ((/* implicit */signed char) ((((/* implicit */int) ((min((((/* implicit */long long int) var_7)), (arr_47 [i_17] [i_17]))) <= (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_16])))))) % (((/* implicit */int) arr_2 [i_15]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_20 = 1; i_20 < 13; i_20 += 1) 
        {
            for (signed char i_21 = 0; i_21 < 14; i_21 += 1) 
            {
                for (unsigned int i_22 = 2; i_22 < 13; i_22 += 1) 
                {
                    {
                        var_33 ^= ((/* implicit */signed char) min((((7U) / (26U))), (44U)));
                        /* LoopSeq 2 */
                        for (unsigned int i_23 = 2; i_23 < 12; i_23 += 4) 
                        {
                            arr_72 [i_15] [i_20] [i_21] [i_23] = ((((/* implicit */_Bool) (short)19376)) ? (4192215755U) : (102751540U));
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((1544395200U) ^ (max((((unsigned int) 536739840U)), (((/* implicit */unsigned int) arr_18 [i_15] [i_22] [i_15] [i_15])))))))));
                        }
                        /* vectorizable */
                        for (long long int i_24 = 2; i_24 < 12; i_24 += 4) 
                        {
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) var_2))));
                            arr_77 [i_21] [i_20] [i_21] [i_22 + 1] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_54 [i_24] [(signed char)5] [i_24] [i_24] [i_24])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_53 [i_24] [i_24 - 2] [i_24] [i_24] [i_24] [i_24 + 1]))));
                            var_36 = ((/* implicit */unsigned short) var_4);
                        }
                        arr_78 [i_21] [i_21] [i_22 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) arr_51 [i_15] [i_20 + 1] [i_22 + 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_20] [i_20 + 1] [i_22 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))) : (arr_51 [i_20] [i_20 + 1] [i_22 - 1])));
                        var_37 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min((arr_43 [(signed char)8] [i_20 - 1] [(signed char)8] [(signed char)8] [i_20 - 1] [i_20]), (arr_43 [i_20] [i_20] [i_20] [i_20] [i_20 + 1] [i_20 + 1]))))) >= (var_8)));
                    }
                } 
            } 
        } 
        var_38 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_70 [i_15] [i_15] [i_15] [i_15] [i_15])) ? (((281579293U) / (arr_32 [i_15]))) : (((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15360))))))) > (var_6)));
    }
    var_39 += ((/* implicit */signed char) var_0);
    var_40 = ((/* implicit */signed char) var_1);
}
