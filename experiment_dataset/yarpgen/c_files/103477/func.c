/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103477
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_2 [(unsigned char)6] = ((/* implicit */long long int) ((((((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0])), (arr_0 [i_0])))) <= (((/* implicit */int) (_Bool)1)))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((arr_1 [i_0]) ? (((/* implicit */int) max((arr_0 [(_Bool)0]), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0])))))))));
        var_13 = ((/* implicit */long long int) min(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            arr_8 [(unsigned short)1] [i_1] |= ((/* implicit */int) (~(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) - (arr_7 [i_2])))));
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_2] [i_1])) == (((/* implicit */int) (!((_Bool)1)))))))));
            var_15 = ((/* implicit */short) (~(((/* implicit */int) var_5))));
        }
        arr_9 [4] [(short)3] = (~(((/* implicit */int) arr_0 [4LL])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_5 = 1; i_5 < 9; i_5 += 3) /* same iter space */
                    {
                        arr_21 [i_1] [i_1] [i_1] &= (~(((/* implicit */int) arr_14 [i_5 - 1] [i_3])));
                        arr_22 [i_1] [i_1] [i_1] [i_5] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_23 [(unsigned char)0] [(unsigned short)8] [(unsigned char)0] [i_5] = ((/* implicit */short) arr_17 [i_5 - 1] [i_5 - 1] [i_5] [i_5]);
                        arr_24 [i_1] [i_3] [i_3] [i_5] = ((/* implicit */unsigned int) arr_18 [i_1]);
                    }
                    for (signed char i_6 = 1; i_6 < 9; i_6 += 3) /* same iter space */
                    {
                        arr_27 [(_Bool)1] = ((/* implicit */_Bool) arr_17 [(unsigned short)6] [i_1] [i_1] [i_1]);
                        arr_28 [i_1] [(_Bool)1] [i_4] [i_6 + 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_6] [i_6] [(signed char)9] [i_6 + 1]))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        var_16 = (!(((/* implicit */_Bool) arr_11 [i_1] [i_4] [i_7])));
                        arr_32 [i_7] [i_4] [i_4] [i_3] [i_1] &= ((/* implicit */unsigned short) arr_17 [2] [i_3] [i_4] [(unsigned char)6]);
                        var_17 ^= ((/* implicit */signed char) ((var_8) > (((/* implicit */int) arr_4 [i_7]))));
                    }
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (+(arr_6 [(_Bool)1]))))));
                    var_19 = (~(var_7));
                    arr_33 [(signed char)1] [i_3] = ((/* implicit */short) (_Bool)1);
                }
            } 
        } 
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1]))));
        /* LoopSeq 3 */
        for (signed char i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) ((arr_34 [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
            var_22 &= ((/* implicit */unsigned short) arr_12 [i_1] [i_1] [7U]);
            arr_37 [i_1] [i_1] [i_8] &= ((/* implicit */short) (!(((/* implicit */_Bool) (+(var_1))))));
        }
        for (signed char i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */int) arr_39 [i_9]);
            arr_40 [i_1] [i_9] [i_9] &= ((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_4 [(unsigned char)0]))))));
            var_24 = ((4565259837667439493ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_1] [i_1] [i_9]))));
            arr_41 [i_1] [(signed char)9] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1]))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_45 [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_1]))));
            var_25 = ((/* implicit */int) min((var_25), (var_11)));
            /* LoopSeq 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_26 = ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_44 [i_1] [i_1] [i_1]))))) + ((+(((/* implicit */int) arr_12 [i_1] [i_10] [(unsigned short)4])))));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    for (unsigned short i_13 = 2; i_13 < 8; i_13 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (+(((((/* implicit */_Bool) arr_36 [9] [(unsigned char)3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8648310611285162715ULL))))))));
                            arr_54 [i_1] [9] [i_1] [i_1] [i_1] [i_1] [i_1] = (-(((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [i_1])));
                            var_28 *= ((/* implicit */unsigned int) arr_51 [i_13 + 2] [i_13] [i_13 + 1]);
                        }
                    } 
                } 
                arr_55 [i_11] &= (~(((((/* implicit */_Bool) (unsigned char)77)) ? (arr_6 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7843))))));
                var_29 *= ((/* implicit */long long int) ((((/* implicit */int) ((short) var_10))) > (((/* implicit */int) arr_18 [i_1]))));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_59 [i_1] [i_10] [i_14] [i_1] = ((/* implicit */short) (_Bool)1);
                arr_60 [i_1] [i_10] [i_1] |= ((/* implicit */unsigned int) var_9);
                var_30 = ((/* implicit */signed char) arr_47 [i_10] [(_Bool)1] [i_10] [2]);
            }
            for (unsigned char i_15 = 0; i_15 < 10; i_15 += 2) 
            {
                arr_63 [i_1] = ((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_15] [i_1]);
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 9; i_16 += 3) 
                {
                    for (int i_17 = 0; i_17 < 10; i_17 += 3) 
                    {
                        {
                            var_31 = (!(((/* implicit */_Bool) arr_68 [i_16] [i_1] [i_16 + 1] [i_16 - 1] [i_17])));
                            arr_70 [i_1] [i_1] [i_16] [i_15] [i_15] [(_Bool)1] = ((/* implicit */signed char) 4565259837667439497ULL);
                        }
                    } 
                } 
                var_32 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)50)) || (((/* implicit */_Bool) ((short) arr_10 [(_Bool)1] [i_1] [i_1])))));
                var_33 &= ((/* implicit */short) (+(((/* implicit */int) ((0ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))))));
                var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_51 [i_1] [i_10] [i_15]) & (((/* implicit */int) var_9))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) var_12))))));
            }
        }
    }
    for (unsigned long long int i_18 = 2; i_18 < 21; i_18 += 3) 
    {
        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_72 [i_18])) ? (((/* implicit */int) (short)-5)) : (((/* implicit */int) var_9)))) + (2147483647))) << (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_71 [i_18 + 2] [i_18 - 1])) | (((/* implicit */int) arr_72 [i_18]))))));
        var_36 = ((/* implicit */int) var_12);
        var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) var_9))));
    }
    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_8) : ((+(((/* implicit */int) var_5))))));
}
