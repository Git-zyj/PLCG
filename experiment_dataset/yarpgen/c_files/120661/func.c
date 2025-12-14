/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120661
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_18)) == (var_10)))) : (((/* implicit */int) var_4))));
            var_21 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) arr_2 [i_1]))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_22 = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) (unsigned short)27910)))));
            arr_9 [i_0] [i_0] [(unsigned char)16] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (short)7038))) ? (((/* implicit */int) arr_8 [4] [i_2])) : (((/* implicit */int) arr_0 [i_0] [i_2]))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_0] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)7038)) || (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29))) == (2282819989U)))));
            /* LoopSeq 3 */
            for (unsigned int i_4 = 4; i_4 < 17; i_4 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    arr_17 [i_0] [i_0] [i_3] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_2))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-3447))))))));
                    var_23 ^= ((((/* implicit */int) arr_14 [i_4] [i_4 - 1] [i_4])) != (2147483636));
                }
                for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    var_24 += ((/* implicit */_Bool) var_13);
                    /* LoopSeq 1 */
                    for (short i_7 = 2; i_7 < 17; i_7 += 2) 
                    {
                        var_25 = ((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_4 - 1])) ? (((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_4 [i_4])))) : (((/* implicit */int) ((short) arr_11 [i_4]))));
                        var_26 = ((/* implicit */unsigned int) var_1);
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) (short)-23812));
                    }
                    arr_27 [i_0] [i_3] [i_0] [i_0] [i_3] = ((/* implicit */int) (short)7116);
                }
                var_27 = ((/* implicit */int) arr_21 [i_0] [i_0]);
                var_28 = ((/* implicit */unsigned char) ((((arr_19 [i_0] [i_3] [i_0] [i_4] [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)52))))) >> (((((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)216)))) + (32769)))));
            }
            for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 3; i_10 < 16; i_10 += 1) 
                    {
                        {
                            arr_35 [i_0] [i_3] [i_0] [i_0] [i_3] [i_10 - 1] = ((((/* implicit */unsigned int) var_11)) * (arr_23 [i_10] [i_10 + 1] [i_10 + 1] [i_0] [i_10 + 1]));
                            var_29 = ((((/* implicit */int) var_15)) == (((/* implicit */int) (_Bool)1)));
                            arr_36 [i_0] [i_0] [i_0] [i_8] [i_8] [i_9] [i_8] = ((/* implicit */int) ((signed char) (unsigned char)221));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)200)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                /* LoopSeq 2 */
                for (unsigned char i_11 = 2; i_11 < 17; i_11 += 4) 
                {
                    /* LoopSeq 3 */
                    for (short i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        var_31 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)-21237)) <= (((/* implicit */int) (unsigned char)204))))) < (arr_2 [i_0])));
                        arr_43 [i_0] [i_0] [i_8] [i_0] [i_12] = 284194404;
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_48 [i_0] [i_0] [i_0] [i_0] [i_13] = ((/* implicit */int) (-(((((/* implicit */_Bool) (short)7038)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                        arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((short) (~(((/* implicit */int) (unsigned char)202)))));
                    }
                    for (signed char i_14 = 4; i_14 < 17; i_14 += 2) 
                    {
                        arr_53 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)55))));
                        arr_54 [i_0] [i_11] [i_0] [i_3] [i_0] = ((/* implicit */short) (((-(((/* implicit */int) var_5)))) == (((/* implicit */int) arr_6 [i_0] [i_14 - 2]))));
                    }
                    arr_55 [i_8] [i_3] [i_8] [i_11 - 1] [i_8] [i_0] = ((/* implicit */short) ((arr_11 [i_0]) == (((/* implicit */int) var_4))));
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_58 [i_0] [i_3] [i_8] [i_11] [i_0] = var_2;
                        arr_59 [i_0] [i_0] [i_0] [i_11] [i_15] = ((/* implicit */_Bool) var_4);
                        var_32 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 284194395)) ? (((/* implicit */int) var_16)) : (var_8))))));
                        var_33 = ((/* implicit */_Bool) var_15);
                    }
                }
                for (short i_16 = 1; i_16 < 17; i_16 += 4) 
                {
                    var_34 -= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    arr_62 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_32 [i_0] [i_16 + 1] [i_16 + 1]);
                }
                var_35 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)75))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_15)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [6]))) : (arr_22 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] [i_8])))));
            }
            for (unsigned int i_17 = 0; i_17 < 18; i_17 += 1) /* same iter space */
            {
                arr_67 [i_0] [i_0] [i_17] [i_17] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_38 [i_0] [i_0] [i_0])))) >= (((/* implicit */int) (_Bool)1))));
                var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-27910))) < (arr_1 [i_0])));
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 18; i_18 += 1) 
                {
                    for (signed char i_19 = 0; i_19 < 18; i_19 += 4) 
                    {
                        {
                            arr_74 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_13);
                            var_37 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (short)7029))));
                            var_38 = ((/* implicit */unsigned char) arr_5 [i_0] [i_3]);
                        }
                    } 
                } 
                var_39 = ((((/* implicit */_Bool) arr_50 [i_0] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_0] [i_0]))) : (3759627859U));
                arr_75 [i_3] [i_0] = ((/* implicit */unsigned long long int) arr_41 [i_0] [i_3] [i_17] [i_17]);
            }
            arr_76 [2] [2] [i_0] |= ((/* implicit */int) ((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_0] [i_3] [i_0] [i_0] [i_3])))));
            arr_77 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_12))));
        }
        arr_78 [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
    }
    var_40 = ((/* implicit */unsigned char) (-((+((-(((/* implicit */int) var_5))))))));
    var_41 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_16))));
}
