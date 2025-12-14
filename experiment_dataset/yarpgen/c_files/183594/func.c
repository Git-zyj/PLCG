/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183594
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        arr_8 [i_2] [i_3] [i_1] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0 + 2] [i_1 + 1] [i_1 - 1])) ^ (((/* implicit */int) arr_6 [i_0 - 1] [i_1 - 1] [i_1 + 2]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((1274526405U) >= (3267330561U)))));
                        arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_14 -= arr_0 [i_2];
                        var_15 = ((/* implicit */int) arr_0 [i_3]);
                        arr_10 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */int) var_9)) - (var_4))) + (((/* implicit */int) arr_0 [i_1]))))) / (-4951563806462044011LL)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (unsigned char i_6 = 1; i_6 < 9; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        {
                            arr_24 [i_4] [i_4] [i_5] [i_5] [i_4] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (min((max((1027636735U), (((/* implicit */unsigned int) (_Bool)0)))), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (1027636759U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5]))))))) : (min((((/* implicit */unsigned int) (_Bool)1)), (((unsigned int) arr_0 [i_0]))))));
                            var_16 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_4] [i_4]))) + ((~(arr_16 [i_0] [i_4] [i_6] [i_7]))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_3 [i_6] [i_4])) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) arr_7 [i_6 + 1] [i_4] [i_7] [i_6 + 1])))), (((/* implicit */int) (short)-32756)))))));
                            var_17 *= ((/* implicit */short) var_3);
                            var_18 ^= ((/* implicit */unsigned char) var_6);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_8 = 3; i_8 < 10; i_8 += 3) 
            {
                for (int i_9 = 2; i_9 < 11; i_9 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) -1LL);
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_32 [i_0 - 1] [i_4] [i_4] [i_9] [i_4] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) arr_21 [i_0 + 3] [i_0 + 3] [i_0 + 1])) >= (((/* implicit */int) arr_21 [i_0 + 3] [i_0 + 2] [i_0 - 1])))));
                            var_20 = ((/* implicit */unsigned short) arr_26 [i_8 - 1] [i_8 - 1] [i_0 - 1]);
                            var_21 = var_5;
                        }
                        var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_1 [i_9 - 2]) * (((/* implicit */int) var_2))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_30 [i_9] [i_8] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_9))))), (((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_8] [(_Bool)1] [i_8 + 1] [11LL])))))))));
                        var_23 = ((/* implicit */int) ((signed char) (+(376203521U))));
                    }
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (short i_11 = 0; i_11 < 14; i_11 += 1) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_13 = 1; i_13 < 11; i_13 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        for (short i_15 = 0; i_15 < 14; i_15 += 2) 
                        {
                            {
                                arr_49 [i_11] [i_11] [i_12] [i_11] [i_14] [i_11] = ((/* implicit */_Bool) arr_46 [i_13 + 1] [i_11] [i_13 - 1] [i_14] [i_15] [(short)6]);
                                arr_50 [i_15] [i_11] [(signed char)3] [i_11] [i_11] = ((/* implicit */unsigned short) ((long long int) (_Bool)0));
                                var_24 = ((/* implicit */long long int) ((arr_41 [i_13] [i_13] [i_13 - 1] [i_13 + 2]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                                arr_51 [i_15] [i_11] [i_13] [i_12] [i_11] [(_Bool)1] = ((/* implicit */unsigned long long int) var_11);
                                arr_52 [i_15] [i_15] [i_15] [i_15] [i_11] [i_15] = ((/* implicit */long long int) arr_33 [i_11]);
                            }
                        } 
                    } 
                    var_25 += ((/* implicit */int) (signed char)(-127 - 1));
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        var_26 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [(signed char)13] [i_13 - 1] [i_13] [i_16] [i_16] [i_12]))) : ((~(1879113862U))));
                        var_27 += ((/* implicit */_Bool) ((((((/* implicit */int) var_3)) / (((/* implicit */int) arr_45 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))) / (((/* implicit */int) var_5))));
                        arr_56 [i_11] [i_11] [i_11] [i_13] [i_11] [i_16] = ((/* implicit */unsigned long long int) var_5);
                        arr_57 [i_16] [(unsigned short)11] [i_11] [i_11] [i_12] [i_11] = ((/* implicit */signed char) (~((+(((/* implicit */int) var_8))))));
                    }
                    arr_58 [(unsigned char)4] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -6428586078639477109LL)) ? (((/* implicit */int) (short)32755)) : (((/* implicit */int) arr_39 [i_11] [i_13 + 1]))));
                }
                for (unsigned short i_17 = 2; i_17 < 13; i_17 += 1) 
                {
                    arr_61 [i_11] [i_11] [i_11] [i_11] = max((((/* implicit */int) arr_38 [(unsigned short)6] [i_12] [i_17] [i_11])), (((((/* implicit */_Bool) arr_40 [i_11] [i_17 + 1] [6ULL] [i_11])) ? (arr_40 [i_11] [i_17 - 2] [i_17] [i_11]) : (arr_40 [i_11] [i_17 - 1] [i_17] [i_11]))));
                    var_28 = ((/* implicit */short) ((max((((((/* implicit */int) arr_33 [i_17])) < (((/* implicit */int) (_Bool)0)))), ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_45 [i_11] [i_12] [i_17] [i_17] [i_11] [i_17])), (min((arr_53 [i_11]), (((/* implicit */unsigned short) arr_37 [i_17] [i_12] [i_11])))))))) : (min((-6428586078639477109LL), (((/* implicit */long long int) (unsigned short)4460))))));
                    arr_62 [i_11] = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) arr_44 [i_11])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_37 [i_11] [i_11] [i_11])))), ((~(((/* implicit */int) (_Bool)1)))))), (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))) - (((/* implicit */int) max((arr_42 [(unsigned short)6] [4] [i_12] [4]), (var_2))))))));
                }
                arr_63 [i_11] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_36 [i_11] [i_11] [i_11])) < (-710367552))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_18 = 0; i_18 < 24; i_18 += 2) 
    {
        arr_66 [i_18] [i_18] = var_11;
        /* LoopNest 3 */
        for (unsigned char i_19 = 0; i_19 < 24; i_19 += 1) 
        {
            for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 3) 
            {
                for (signed char i_21 = 3; i_21 < 21; i_21 += 2) 
                {
                    {
                        arr_76 [i_21] [i_19] [i_19] [i_19] = ((/* implicit */long long int) max((3267330561U), (((/* implicit */unsigned int) var_3))));
                        var_29 = var_2;
                        var_30 = ((/* implicit */long long int) arr_74 [i_18] [i_18] [i_18] [i_18]);
                    }
                } 
            } 
        } 
    }
}
