/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177244
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
    var_19 = ((/* implicit */unsigned short) var_13);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] [10U] = ((/* implicit */signed char) (unsigned short)51432);
        var_20 = ((((((/* implicit */int) (signed char)-12)) + (2147483647))) << (((((/* implicit */int) var_7)) - (21759))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_21 ^= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)(-127 - 1)))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) var_4);
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 21; i_4 += 2) 
                    {
                        for (signed char i_5 = 3; i_5 < 21; i_5 += 4) 
                        {
                            {
                                arr_18 [i_1] [i_1] [i_4] [i_4 + 2] [i_5] [i_3] [i_4] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)104)))) && (((/* implicit */_Bool) (unsigned short)21255))));
                                arr_19 [i_1] [i_1] [i_4] [(_Bool)1] [i_4] [i_4] [i_5] = ((/* implicit */signed char) var_18);
                                var_23 = 0U;
                            }
                        } 
                    } 
                    var_24 -= ((/* implicit */short) ((16412305355934055446ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    }
    for (unsigned int i_6 = 1; i_6 < 15; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_9 = 3; i_9 < 16; i_9 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (_Bool)1))));
                            arr_38 [i_10] [i_7] [i_8] [i_8] [13] = ((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_10]);
                            arr_39 [i_6] = ((/* implicit */unsigned short) arr_0 [i_6 - 1] [0ULL]);
                        }
                        for (long long int i_11 = 1; i_11 < 17; i_11 += 4) /* same iter space */
                        {
                            arr_42 [i_6 - 1] [i_7] [i_11] [i_9 - 1] [i_7] [i_11] = ((/* implicit */short) var_1);
                            arr_43 [i_11 - 1] [i_6] [i_11] [i_8] [i_11] [i_6] [i_6] = ((/* implicit */unsigned char) (signed char)-117);
                        }
                        /* vectorizable */
                        for (long long int i_12 = 1; i_12 < 17; i_12 += 4) /* same iter space */
                        {
                            arr_48 [i_9] [i_7] [i_8] [i_12] [i_9] [i_8] = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
                            arr_49 [i_6 + 2] [i_6] [i_12] = ((/* implicit */short) var_11);
                        }
                        arr_50 [i_7] [i_7] = ((/* implicit */short) (_Bool)1);
                        arr_51 [i_6] [i_7] [i_7] [i_8] [i_9] = (((+(((/* implicit */int) (signed char)117)))) < (((/* implicit */int) (short)8415)));
                    }
                    for (unsigned short i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        var_26 -= ((/* implicit */unsigned short) arr_14 [i_7] [(unsigned short)6]);
                        arr_56 [i_13] [i_13] [i_13] = (signed char)-2;
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned short) 3991281709646229121ULL);
                        var_28 -= arr_22 [i_8];
                        var_29 -= ((/* implicit */short) (~((~(((/* implicit */int) (signed char)100))))));
                    }
                    /* vectorizable */
                    for (long long int i_15 = 0; i_15 < 18; i_15 += 2) /* same iter space */
                    {
                        arr_64 [(short)14] [(short)14] [i_8] [i_8] = (!(((/* implicit */_Bool) 16412305355934055446ULL)));
                        /* LoopSeq 2 */
                        for (unsigned int i_16 = 0; i_16 < 18; i_16 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (_Bool)1))));
                            var_31 = ((/* implicit */int) arr_58 [i_6] [i_6 + 2] [i_6 + 2]);
                            var_32 = ((/* implicit */unsigned short) var_13);
                            var_33 = ((/* implicit */signed char) (+(((/* implicit */int) (short)23787))));
                            var_34 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
                        }
                        for (unsigned char i_17 = 1; i_17 < 16; i_17 += 2) 
                        {
                            arr_73 [i_17] [(unsigned char)6] [(unsigned char)6] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) var_2);
                            var_35 = ((/* implicit */_Bool) (-(arr_33 [i_6] [i_7] [i_6 - 1] [i_17 + 1])));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_18 = 0; i_18 < 18; i_18 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_19 = 1; i_19 < 14; i_19 += 4) 
                        {
                            arr_81 [i_6] [i_18] [i_8] [i_6] [i_19 + 3] [i_18] [i_7] = ((/* implicit */signed char) ((arr_11 [i_19 + 1] [(short)21] [(short)21] [i_7]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
                            var_36 = ((/* implicit */signed char) (unsigned short)54185);
                        }
                        var_37 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)11351)) % (((/* implicit */int) var_13))));
                    }
                    /* vectorizable */
                    for (long long int i_20 = 0; i_20 < 18; i_20 += 2) /* same iter space */
                    {
                        var_38 &= ((/* implicit */short) (_Bool)1);
                        var_39 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-40))));
                        arr_85 [(signed char)2] [i_8] [i_6] = ((/* implicit */unsigned int) ((arr_12 [i_6 + 1] [i_6] [i_6] [i_7] [i_6] [i_6]) * (((/* implicit */int) (_Bool)1))));
                        arr_86 [i_6 + 1] [i_7] [i_6 + 1] [(signed char)15] = ((/* implicit */unsigned char) arr_55 [i_6] [i_6] [(signed char)6]);
                    }
                }
            } 
        } 
        arr_87 [i_6] = var_9;
        var_40 += ((/* implicit */unsigned int) (short)23787);
        arr_88 [i_6] = ((/* implicit */long long int) (+(16412305355934055439ULL)));
    }
}
