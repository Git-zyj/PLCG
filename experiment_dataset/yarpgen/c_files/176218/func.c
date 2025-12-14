/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176218
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(-6330172556864637480LL)))))) ? (var_15) : (((/* implicit */unsigned long long int) (+(max((var_3), (((/* implicit */unsigned int) (_Bool)1)))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!((_Bool)1))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [(signed char)0])) ? (((((/* implicit */int) arr_0 [i_0])) % (((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_1 [i_0] [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5071583073164562699LL)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 2; i_3 < 15; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((arr_5 [i_1]) != (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) min((arr_10 [i_4] [i_1] [i_1]), (((/* implicit */short) arr_13 [i_1] [i_2]))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)224)), ((unsigned short)22529)))))))));
                        var_22 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 + 3] [i_3] [i_3 + 3] [i_3 + 3]))))));
                    }
                } 
            } 
        } 
        var_23 += ((/* implicit */unsigned char) var_0);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                for (long long int i_8 = 4; i_8 < 9; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_24 ^= ((/* implicit */_Bool) (unsigned char)174);
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-6330172556864637487LL) : (-5726451014351412763LL)))) ? (max((9223372036854775807LL), (((/* implicit */long long int) 1760821316U)))) : (arr_9 [i_5] [i_8])))) ? (min((max((((/* implicit */unsigned long long int) var_14)), (var_9))), (((/* implicit */unsigned long long int) max((var_2), (var_2)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6] [i_6])))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */unsigned long long int) -2075331635)) ^ (8725724278030336ULL))) : (((/* implicit */unsigned long long int) (~(var_3))))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        {
                            arr_36 [i_5] [6LL] [i_5] [i_11] [i_11] [i_12] = ((/* implicit */unsigned int) arr_12 [i_5] [18ULL] [i_10] [i_11] [i_12]);
                            var_27 = ((/* implicit */_Bool) var_13);
                        }
                    } 
                } 
                var_28 ^= ((/* implicit */short) (+((~(((/* implicit */int) (_Bool)0))))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
            {
                var_29 = ((/* implicit */_Bool) -991365397348059808LL);
                arr_41 [i_5] [i_5] = ((/* implicit */unsigned int) var_4);
            }
            for (short i_14 = 2; i_14 < 8; i_14 += 3) 
            {
                var_30 = ((/* implicit */long long int) max((var_30), (-3868596114439148521LL)));
                arr_46 [i_5] [i_6] = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) arr_23 [(unsigned char)2] [i_14 + 1] [i_14 - 2] [(unsigned char)2])), (9223372036854775801LL))), (((/* implicit */long long int) ((((((/* implicit */int) arr_23 [(_Bool)1] [0LL] [i_14 + 2] [(_Bool)1])) + (2147483647))) << (((((((/* implicit */int) arr_23 [(short)0] [i_14] [i_14 + 2] [(short)0])) + (14007))) - (3))))))));
                var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) max((arr_7 [i_14 + 2] [(unsigned char)16] [i_14 - 2]), (arr_7 [i_14 + 2] [(unsigned char)4] [i_14 - 2])))), (var_0))))));
            }
            var_32 = ((/* implicit */unsigned long long int) -2075331635);
            var_33 = arr_14 [i_6] [i_5];
            var_34 = ((/* implicit */unsigned short) var_3);
        }
        /* LoopNest 2 */
        for (signed char i_15 = 3; i_15 < 8; i_15 += 3) 
        {
            for (long long int i_16 = 4; i_16 < 9; i_16 += 2) 
            {
                {
                    var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                    arr_55 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_14 [i_15 + 1] [i_16 - 3])) ? (arr_14 [i_15 + 3] [i_16 - 3]) : (arr_14 [i_15 + 2] [i_16 - 3]))), (((/* implicit */unsigned int) arr_54 [i_16 + 2]))));
                    arr_56 [i_5] = ((/* implicit */signed char) min((var_7), (max(((unsigned short)12595), (((/* implicit */unsigned short) arr_45 [i_5] [(signed char)4] [i_5] [i_16]))))));
                    /* LoopNest 2 */
                    for (long long int i_17 = 2; i_17 < 10; i_17 += 4) 
                    {
                        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_36 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_19 [i_18 - 1] [i_15 + 1] [i_5])))));
                                arr_61 [i_18 - 1] [i_17] [i_17 + 1] [i_16] [(signed char)0] [i_15 + 1] [i_5] = min((min((((/* implicit */unsigned long long int) var_4)), (895251329438266583ULL))), (((((/* implicit */_Bool) arr_35 [i_18] [i_18 - 1] [i_18 - 1] [i_18] [i_18] [i_18] [i_18 - 1])) ? (((/* implicit */unsigned long long int) var_3)) : (arr_35 [i_18] [(unsigned short)0] [i_18] [i_18 - 1] [i_18] [10] [i_18 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_37 = ((/* implicit */_Bool) arr_37 [i_5] [i_5] [i_5]);
    }
    /* vectorizable */
    for (signed char i_19 = 1; i_19 < 12; i_19 += 1) 
    {
        var_38 = ((/* implicit */_Bool) arr_12 [i_19] [i_19 + 2] [i_19 + 1] [i_19 + 1] [i_19]);
        var_39 = ((/* implicit */long long int) max((var_39), (((((/* implicit */_Bool) arr_9 [18U] [18U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_19 - 1] [i_19 + 1]))) : (var_8)))));
        var_40 = ((/* implicit */unsigned int) (~(arr_62 [i_19 - 1] [i_19 - 1])));
        var_41 ^= ((((/* implicit */int) arr_8 [i_19 - 1] [i_19])) == (((/* implicit */int) arr_8 [i_19 + 1] [i_19 + 2])));
    }
}
