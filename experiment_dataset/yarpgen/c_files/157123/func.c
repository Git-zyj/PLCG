/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157123
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (+((-(arr_1 [i_0])))));
        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)212))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            arr_5 [i_0] [(_Bool)1] [i_1] = ((/* implicit */short) arr_1 [i_0]);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                var_17 ^= ((/* implicit */unsigned short) arr_3 [16LL] [i_1] [i_2]);
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_1 [16ULL]))));
            }
            var_19 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            var_20 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [2LL])))))));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned int i_3 = 4; i_3 < 23; i_3 += 3) 
    {
        arr_11 [i_3] [0U] &= (-(((/* implicit */int) arr_10 [(signed char)10])));
        var_21 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_9 [(signed char)2] [i_3]))))));
        arr_12 [i_3] [18ULL] &= ((/* implicit */_Bool) arr_9 [i_3] [(short)18]);
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_5 = 1; i_5 < 12; i_5 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                var_22 = ((/* implicit */signed char) (-(arr_18 [i_5] [i_5] [i_6])));
                arr_22 [i_5] [i_5] [i_5] [i_5] = arr_13 [1U] [(short)11];
            }
            arr_23 [i_5] [i_5 + 1] = ((/* implicit */unsigned long long int) arr_4 [i_4] [i_4]);
            var_23 = ((/* implicit */short) (+(arr_14 [i_4] [i_5])));
            arr_24 [i_4] [i_5] [i_5 + 1] = arr_15 [i_5];
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                var_24 |= ((/* implicit */unsigned int) arr_3 [i_7] [i_4] [i_4]);
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) arr_9 [i_4] [i_7]))));
                var_26 = ((/* implicit */long long int) arr_13 [(short)3] [(short)3]);
            }
        }
        for (int i_8 = 1; i_8 < 12; i_8 += 2) /* same iter space */
        {
            var_27 ^= ((/* implicit */short) arr_30 [(short)4] [(signed char)0] [(short)4]);
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) arr_27 [i_8] [0ULL] [6U]))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned long long int) arr_17 [i_4] [i_8]);
                        arr_38 [i_8] [i_9] [i_10] = ((/* implicit */unsigned long long int) arr_10 [i_8]);
                    }
                } 
            } 
        }
        for (int i_11 = 1; i_11 < 12; i_11 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned short i_12 = 4; i_12 < 12; i_12 += 4) /* same iter space */
            {
                var_30 = ((/* implicit */_Bool) arr_39 [i_4] [i_11]);
                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (~(arr_37 [i_12] [(signed char)12]))))));
            }
            for (unsigned short i_13 = 4; i_13 < 12; i_13 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_14 = 1; i_14 < 9; i_14 += 4) 
                {
                    var_32 *= ((/* implicit */short) arr_36 [i_13] [i_13 - 4]);
                    var_33 = arr_48 [i_4];
                    var_34 = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_0 [i_11]))))));
                    arr_51 [i_4] [i_13] [i_4] |= ((/* implicit */_Bool) (~((-(arr_39 [i_11] [i_13])))));
                }
                arr_52 [i_11 - 1] [i_11] [i_11] [3ULL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_4] [i_4]))));
            }
            for (unsigned char i_15 = 0; i_15 < 13; i_15 += 2) /* same iter space */
            {
                var_35 = ((/* implicit */long long int) arr_47 [i_4] [i_11 - 1] [i_11]);
                var_36 = ((/* implicit */unsigned char) arr_44 [i_15] [i_11] [i_4]);
            }
            for (unsigned char i_16 = 0; i_16 < 13; i_16 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_17 = 0; i_17 < 13; i_17 += 1) 
                {
                    arr_60 [i_4] [i_4] [i_11 - 1] [i_11] [i_17] = ((/* implicit */signed char) arr_18 [i_11] [i_11] [i_11]);
                    arr_61 [i_11] [i_11] = ((/* implicit */unsigned long long int) arr_55 [i_17] [(signed char)1] [(short)0] [i_4]);
                    var_37 = arr_56 [i_17];
                }
                for (unsigned int i_18 = 0; i_18 < 13; i_18 += 3) 
                {
                    arr_65 [i_11] [i_11 - 1] [i_11] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_11] [i_11]))));
                    var_38 = ((/* implicit */unsigned short) (-((~(arr_58 [i_4] [i_4] [i_4])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 4) 
                    {
                        var_39 = ((/* implicit */signed char) (~(((/* implicit */int) arr_25 [i_4] [i_4] [i_4]))));
                        var_40 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)45)))))));
                        arr_68 [i_4] [i_18] [i_16] [i_18] [i_4] [i_11] = ((/* implicit */_Bool) arr_49 [i_16] [i_11 + 1] [(signed char)7] [i_18]);
                        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_19] [i_18] [i_19]))))))))));
                    }
                    for (unsigned short i_20 = 1; i_20 < 11; i_20 += 1) 
                    {
                        arr_71 [i_4] [i_11] [i_18] [i_20 + 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_55 [i_11] [(short)11] [i_18] [i_11]))));
                        arr_72 [i_4] [i_4] [i_11] = ((/* implicit */unsigned short) arr_35 [i_4] [(short)8] [i_11]);
                        arr_73 [i_4] [i_11 + 1] [i_16] [i_18] [i_11] = (!(((/* implicit */_Bool) arr_25 [i_4] [i_11] [(_Bool)1])));
                        var_42 |= arr_34 [i_4] [(short)10] [i_16] [i_16];
                        arr_74 [i_4] [i_11] [i_16] [i_4] = (-(arr_48 [i_16]));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_21 = 0; i_21 < 13; i_21 += 1) 
                    {
                        arr_77 [(_Bool)1] [i_11] [i_18] [i_18] [i_16] [i_16] [i_21] = ((/* implicit */unsigned char) arr_0 [i_11]);
                        var_43 += ((/* implicit */unsigned char) arr_69 [i_4] [i_11] [i_11] [i_11] [i_11 + 1] [i_16]);
                        var_44 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_32 [i_11] [i_11] [(short)7] [(signed char)8]))));
                    }
                    for (unsigned short i_22 = 0; i_22 < 13; i_22 += 1) 
                    {
                        var_45 = ((/* implicit */unsigned long long int) (+(arr_29 [i_22])));
                        arr_81 [3U] [i_11] [i_11] [i_18] [i_22] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_22]))));
                    }
                }
                var_46 = ((/* implicit */_Bool) arr_10 [i_11]);
                var_47 = ((/* implicit */signed char) max((var_47), (arr_10 [i_16])));
            }
            arr_82 [i_4] [i_11] = ((/* implicit */_Bool) arr_28 [i_4] [i_11] [i_11 + 1]);
        }
        for (unsigned long long int i_23 = 3; i_23 < 10; i_23 += 4) 
        {
            arr_85 [i_4] [i_23 - 2] = ((/* implicit */long long int) arr_78 [6ULL] [6ULL] [i_23 - 1] [i_23] [12]);
            arr_86 [i_4] [i_4] [i_4] = ((/* implicit */short) (-((~(((/* implicit */int) arr_46 [i_4] [i_23] [i_23 - 2]))))));
        }
        var_48 = arr_53 [i_4] [i_4] [6] [i_4];
    }
    /* vectorizable */
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
    {
        arr_90 [i_24] = ((/* implicit */int) arr_9 [i_24] [(_Bool)1]);
        var_49 = ((/* implicit */short) arr_89 [i_24] [i_24]);
        arr_91 [i_24] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-14340))));
        var_50 = ((/* implicit */short) arr_10 [(signed char)12]);
    }
    var_51 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
    var_52 = (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0))))));
    var_53 = ((/* implicit */signed char) (~((~(((/* implicit */int) var_12))))));
}
