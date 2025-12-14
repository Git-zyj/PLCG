/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138153
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
    var_18 = ((/* implicit */short) var_1);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) max((max((((((/* implicit */_Bool) (unsigned short)35339)) ? (((/* implicit */int) (short)-23473)) : (1262882634))), (((/* implicit */int) max((((/* implicit */short) (unsigned char)13)), ((short)0)))))), (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) (short)-23473)) || (((/* implicit */_Bool) (short)23486))))), (arr_1 [i_0]))))));
        arr_4 [12LL] = ((/* implicit */unsigned short) arr_0 [21LL] [4LL]);
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_0 [i_0] [22LL]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 4; i_2 < 23; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned int) (~(((long long int) arr_10 [i_3]))));
                        arr_15 [i_1] [i_2 - 3] [2LL] [2LL] [i_2] = ((/* implicit */unsigned int) arr_8 [i_1] [i_3]);
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_6 [i_2 - 3] [i_2 - 2])) + (2147483647))) << (((((((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 4])) + (58))) - (16))))))));
                    }
                    for (short i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        arr_18 [i_1] [i_2] [i_3] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_14 [i_1] [i_2 + 1] [i_2 + 1] [i_1]))) ? ((-(arr_17 [i_1] [7LL] [i_3] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) (short)-23473)))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 2; i_6 < 24; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */int) ((5376602460429232818LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1])))));
                            arr_21 [i_1] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_11 [i_2 + 2] [i_2 + 2] [i_2 - 4])) : (((/* implicit */int) arr_11 [i_2 + 2] [i_2 + 2] [i_2 - 4]))));
                        }
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_2 - 2])) & (((/* implicit */int) arr_10 [i_2 - 1])))))));
                        arr_22 [i_5] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) arr_7 [(_Bool)1] [i_5]);
                    }
                    var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-23486))));
                }
            } 
        } 
        arr_23 [i_1] [11] = ((/* implicit */short) (signed char)-20);
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1] [(_Bool)1])) - (-445815368))))));
        arr_24 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) (short)-23487)))));
    }
    /* LoopSeq 4 */
    for (long long int i_7 = 3; i_7 < 18; i_7 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_8 = 1; i_8 < 18; i_8 += 3) /* same iter space */
        {
            arr_29 [i_7] [(unsigned char)14] = ((/* implicit */short) ((int) arr_28 [i_8 + 1] [i_7 - 3]));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_7] [i_8])) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_1 [i_8 + 1])) : (((/* implicit */int) (unsigned char)151))));
        }
        for (int i_9 = 1; i_9 < 18; i_9 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_10 = 1; i_10 < 17; i_10 += 3) 
            {
                for (short i_11 = 3; i_11 < 18; i_11 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            arr_40 [i_7 - 2] [i_9] [i_10 + 2] [i_9] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 5373226964709487818LL))));
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) arr_6 [(unsigned char)6] [(unsigned char)16])) * (((/* implicit */int) (unsigned char)0))))))))))));
                            arr_41 [i_12] [i_11 + 1] [i_9] [i_9] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_11 - 1] [i_9 - 1])) * (((/* implicit */int) arr_9 [i_11 - 1] [i_9 + 1]))))) ? (((((((/* implicit */_Bool) (unsigned short)11949)) ? (arr_27 [8U]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23486))))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)104))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_17 [i_7] [i_7] [i_7] [i_9]))) << (((((/* implicit */int) (short)23487)) - (23484))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 1) 
                        {
                            var_28 -= ((/* implicit */signed char) ((((/* implicit */int) arr_31 [i_10 + 1] [i_10] [i_10])) * (((/* implicit */int) ((((/* implicit */int) arr_20 [i_10] [i_10] [i_11] [i_10] [9] [i_7])) < (((/* implicit */int) arr_0 [i_7] [i_7])))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_7 - 2] [i_9 + 1] [i_10 + 1] [i_10 - 1] [i_11 - 3])) ? (((/* implicit */int) arr_16 [i_7 + 1] [i_9 + 1] [i_10 + 2] [i_10 + 2] [i_11 - 1])) : (((/* implicit */int) arr_16 [i_7 + 1] [i_9 - 1] [i_10 + 1] [i_10 + 1] [i_11 - 2]))));
                        }
                        for (signed char i_14 = 0; i_14 < 19; i_14 += 3) 
                        {
                            var_30 = ((/* implicit */int) max((var_30), (min(((-(((/* implicit */int) max((((/* implicit */short) arr_31 [i_7 - 1] [i_7] [i_7])), (arr_37 [i_7] [0] [i_10 + 1] [i_11] [12LL])))))), ((((-(((/* implicit */int) (_Bool)0)))) - (((/* implicit */int) min((((/* implicit */short) (unsigned char)12)), ((short)32767))))))))));
                            var_31 -= min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_10] [20])) ? (-2782290473676450025LL) : (arr_17 [22] [4] [22] [(unsigned char)12])))) ? (((/* implicit */int) arr_33 [(_Bool)1] [i_7] [(_Bool)1] [(_Bool)1])) : (((((/* implicit */_Bool) arr_9 [i_7] [i_7 - 2])) ? (((/* implicit */int) arr_48 [i_14] [i_11 + 1] [i_10])) : (((/* implicit */int) (_Bool)0))))))), (((long long int) 445815367)));
                        }
                        arr_49 [i_7] [i_9] [i_11 - 3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24301)) ? (((/* implicit */int) arr_13 [i_11 - 1] [i_10] [i_9 - 1] [16U] [i_7])) : (((/* implicit */int) (short)-23473))))) ? (((/* implicit */int) max((((/* implicit */short) arr_6 [i_11] [i_10])), (arr_19 [i_7] [(short)2] [(short)2] [i_7 - 3])))) : (((/* implicit */int) max((arr_30 [i_7] [(_Bool)1] [i_7]), (arr_44 [i_11] [i_10] [i_7]))))))), (((((/* implicit */_Bool) arr_19 [i_7] [i_9] [i_9] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (short)3488))) : (arr_26 [i_7 + 1] [i_9])))));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (signed char)-126))));
            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) arr_16 [20] [i_7] [i_7] [i_7 - 1] [i_7 - 1]))));
        }
        arr_50 [i_7] [i_7] |= max((((((arr_32 [(unsigned char)4] [i_7]) + (9223372036854775807LL))) << (((((/* implicit */_Bool) 1374135944311777504ULL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)108)))))), (((/* implicit */long long int) ((((/* implicit */int) ((short) 668843588U))) & (arr_36 [i_7 - 3] [i_7 - 3] [i_7 - 2] [i_7 + 1] [i_7 - 2])))));
        arr_51 [i_7 - 2] [i_7] = ((/* implicit */int) arr_28 [i_7] [(unsigned short)15]);
        arr_52 [i_7] = arr_37 [(_Bool)1] [(signed char)4] [i_7] [i_7] [i_7];
    }
    for (signed char i_15 = 1; i_15 < 9; i_15 += 1) 
    {
        arr_55 [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_15 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), ((short)25171))))) : (10435177874484627023ULL)));
        arr_56 [i_15] [i_15] = ((/* implicit */_Bool) arr_2 [i_15 + 2] [(short)9]);
        arr_57 [i_15] = ((/* implicit */long long int) arr_44 [i_15 - 1] [i_15] [i_15 - 1]);
        /* LoopNest 3 */
        for (unsigned int i_16 = 0; i_16 < 11; i_16 += 1) 
        {
            for (long long int i_17 = 0; i_17 < 11; i_17 += 1) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        arr_67 [i_15] = ((/* implicit */_Bool) (short)23486);
                        arr_68 [i_15] = ((/* implicit */unsigned char) arr_19 [i_18] [i_18] [i_17] [i_18]);
                    }
                } 
            } 
        } 
        arr_69 [i_15] = max((((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)106)), ((unsigned char)38)))), (max((((/* implicit */long long int) arr_61 [i_15 - 1] [i_15 - 1] [4LL] [i_15 - 1])), ((-9223372036854775807LL - 1LL)))));
    }
    for (long long int i_19 = 0; i_19 < 11; i_19 += 3) 
    {
        var_34 = ((/* implicit */unsigned short) ((max(((~(arr_72 [i_19]))), (((/* implicit */unsigned int) max((arr_37 [i_19] [(unsigned short)12] [(unsigned short)12] [(unsigned short)6] [i_19]), (arr_46 [i_19] [10U] [i_19] [i_19] [i_19] [i_19] [(unsigned char)11])))))) & (((((/* implicit */_Bool) max((arr_17 [i_19] [i_19] [i_19] [12LL]), (((/* implicit */long long int) 2255613478U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (arr_72 [i_19])))));
        var_35 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_39 [(signed char)6] [i_19] [(signed char)6] [i_19] [(short)14] [i_19])), (min((((/* implicit */int) (_Bool)1)), (arr_36 [i_19] [i_19] [i_19] [i_19] [i_19])))));
    }
    for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 4) 
    {
        arr_76 [i_20] [i_20] = arr_10 [i_20];
        arr_77 [(unsigned char)20] [i_20] |= ((/* implicit */long long int) (+(((/* implicit */int) (signed char)126))));
    }
}
