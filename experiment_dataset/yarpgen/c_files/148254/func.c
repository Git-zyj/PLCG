/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148254
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
    var_15 = var_8;
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (!(arr_1 [14LL]))))));
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0 + 2]);
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_2]))));
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~((~(((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_0])))))))));
                var_19 = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0] [15]))));
                arr_8 [i_2 - 1] = ((/* implicit */short) arr_3 [(signed char)7]);
            }
            for (long long int i_3 = 3; i_3 < 18; i_3 += 1) 
            {
                var_20 = ((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3 - 2] [i_3]);
                var_21 = ((/* implicit */unsigned char) arr_1 [i_3 + 1]);
            }
            /* LoopNest 2 */
            for (unsigned short i_4 = 1; i_4 < 16; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 2; i_6 < 16; i_6 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_4] [i_6 + 1]))));
                            var_23 = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0 - 1] [i_0 - 2] [i_0]);
                            var_24 ^= ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0 - 1]);
                            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_4]))));
                            arr_20 [i_0 + 2] [i_0 + 2] [i_4 + 2] [i_5] [i_4] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_18 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1]))));
                        }
                        for (unsigned char i_7 = 2; i_7 < 16; i_7 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) arr_24 [i_0 + 2] [i_1] [i_4] [i_0 + 2] [i_7 + 1]);
                            var_27 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_19 [i_7]))))));
                        }
                        var_28 = (!(((/* implicit */_Bool) arr_7 [i_5] [i_5] [(short)10])));
                    }
                } 
            } 
        }
        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            /* LoopSeq 4 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_14 [i_0] [(short)18])))))));
                var_30 = ((/* implicit */unsigned char) arr_27 [i_0 + 1] [i_0] [i_0] [(signed char)2]);
                arr_30 [i_9] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_29 [i_0] [i_0]))));
            }
            for (unsigned long long int i_10 = 3; i_10 < 18; i_10 += 1) 
            {
                arr_33 [i_10] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_8] [(_Bool)1]))));
                /* LoopSeq 2 */
                for (unsigned short i_11 = 1; i_11 < 15; i_11 += 2) 
                {
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_18 [i_0] [i_8] [i_8] [i_10 - 1] [i_11])))))));
                    var_32 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0 - 2] [i_10]))));
                    arr_37 [i_8] [i_8] [i_10] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_11]))));
                    var_33 = ((/* implicit */signed char) arr_32 [i_11 + 3] [i_11 + 3] [i_11 + 4] [i_10]);
                }
                for (int i_12 = 0; i_12 < 19; i_12 += 3) 
                {
                    var_34 += ((/* implicit */unsigned short) arr_39 [i_0] [i_8] [i_0] [i_0] [i_8] [i_0]);
                    var_35 |= ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_0]))));
                    var_36 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_12] [i_12] [i_10] [i_0 + 1] [i_0 + 1]))));
                    var_37 = ((/* implicit */unsigned char) arr_34 [i_0] [i_8]);
                    var_38 += ((/* implicit */unsigned short) arr_21 [i_0]);
                }
                /* LoopSeq 1 */
                for (short i_13 = 2; i_13 < 18; i_13 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 1; i_14 < 16; i_14 += 3) 
                    {
                        var_39 = ((/* implicit */_Bool) arr_22 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1]);
                        arr_46 [i_0 - 2] [i_8] [i_10 - 1] [i_13 - 1] [i_10] = ((/* implicit */int) arr_11 [i_0] [i_8] [i_10] [8LL]);
                        arr_47 [i_0] [i_10] [i_14] [i_13 - 1] [i_14 + 1] [i_13] = ((/* implicit */_Bool) (-(arr_38 [i_0] [i_8] [i_10 + 1] [i_13 + 1] [i_13] [i_8])));
                    }
                    var_40 = arr_44 [i_0 - 1] [i_10] [(signed char)3] [(signed char)3] [(signed char)3] [i_0] [i_10];
                }
                var_41 = ((/* implicit */unsigned char) arr_34 [i_0] [i_0 - 1]);
            }
            for (unsigned short i_15 = 2; i_15 < 15; i_15 += 4) 
            {
                var_42 += ((/* implicit */short) (~((~((-(((/* implicit */int) arr_15 [i_0] [i_0 - 2] [i_8] [i_0 - 2]))))))));
                arr_51 [i_0 + 1] [i_0 + 1] [i_15 + 4] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(arr_39 [i_0] [(unsigned char)18] [i_0] [i_15] [i_0] [i_0]))))));
                var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_8] [i_8])))))));
                var_44 |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [(unsigned short)6] [i_8] [i_8] [i_0]))));
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 19; i_16 += 2) 
                {
                    for (unsigned short i_17 = 0; i_17 < 19; i_17 += 3) 
                    {
                        {
                            var_45 = ((/* implicit */signed char) (-(((/* implicit */int) arr_44 [i_0] [i_15] [i_15] [i_0] [i_15] [i_16] [i_17]))));
                            var_46 |= ((/* implicit */short) (~(((/* implicit */int) arr_23 [i_0] [i_0] [(unsigned char)9] [i_0] [i_15 + 2] [i_0] [i_17]))));
                        }
                    } 
                } 
            }
            for (short i_18 = 1; i_18 < 18; i_18 += 4) 
            {
                var_47 = ((/* implicit */int) (!((!((!(((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_8] [i_8] [i_8] [i_8] [i_0]))))))));
                arr_61 [i_0] = ((/* implicit */unsigned char) arr_38 [i_0] [(unsigned short)7] [(unsigned char)10] [(short)8] [(short)4] [i_8]);
                var_48 = ((/* implicit */unsigned char) arr_7 [i_0] [(unsigned short)9] [(unsigned short)9]);
                arr_62 [i_0 - 2] [i_0] = ((/* implicit */unsigned long long int) arr_40 [i_0]);
            }
            var_49 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_21 [i_0]))));
            arr_63 [i_0 + 2] [i_8] |= ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_8]))))));
        }
        arr_64 [(_Bool)1] = ((/* implicit */unsigned short) (-(arr_6 [i_0])));
        var_50 += ((/* implicit */long long int) (+((+(((/* implicit */int) arr_19 [i_0]))))));
    }
    for (signed char i_19 = 1; i_19 < 19; i_19 += 2) 
    {
        var_51 = ((/* implicit */unsigned long long int) arr_68 [(unsigned short)6] [i_19 + 2]);
        var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) (+(arr_66 [i_19] [i_19]))))));
        var_53 = ((/* implicit */unsigned short) arr_66 [i_19 - 1] [(_Bool)1]);
    }
    for (signed char i_20 = 0; i_20 < 19; i_20 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_21 = 0; i_21 < 19; i_21 += 2) 
        {
            for (signed char i_22 = 2; i_22 < 16; i_22 += 3) 
            {
                {
                    var_54 = ((/* implicit */unsigned short) arr_55 [i_20] [i_21]);
                    arr_76 [i_22] [i_21] [i_20] = arr_34 [i_21] [i_21];
                }
            } 
        } 
        var_55 = ((/* implicit */unsigned char) min((var_55), (((/* implicit */unsigned char) arr_34 [i_20] [i_20]))));
        var_56 = ((/* implicit */unsigned short) (~((~(arr_2 [(unsigned char)3])))));
    }
    for (unsigned char i_23 = 0; i_23 < 13; i_23 += 2) 
    {
        arr_79 [i_23] = ((/* implicit */_Bool) arr_77 [i_23] [(unsigned short)8]);
        arr_80 [i_23] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] [i_23])))))));
        arr_81 [i_23] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_72 [i_23] [(short)1] [i_23])))))));
        var_57 += ((/* implicit */short) arr_78 [i_23]);
    }
    var_58 = ((/* implicit */short) (+((~((~(((/* implicit */int) var_7))))))));
}
