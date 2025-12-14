/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171658
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */signed char) max((((/* implicit */int) arr_2 [i_0] [20ULL])), ((+(((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 1]))))));
                    arr_9 [i_0] [i_0] [6ULL] [i_2] = (!(((/* implicit */_Bool) max(((-(((/* implicit */int) arr_4 [i_1] [i_1])))), ((+(((/* implicit */int) arr_5 [i_0] [i_1]))))))));
                    var_18 += ((/* implicit */_Bool) max((arr_6 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_3 [i_0] [i_0])))), (((/* implicit */int) (!(arr_3 [(unsigned short)9] [i_1])))))))));
                    var_19 = ((/* implicit */unsigned char) (-((+(arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                    var_20 = ((/* implicit */unsigned int) min((var_20), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_1] [i_1])), (arr_0 [i_2 + 1]))))))), (max((arr_7 [i_2 - 1] [i_2] [i_2 - 1]), (((/* implicit */unsigned int) ((-5737636360824023292LL) < (((/* implicit */long long int) -1410894090)))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned char) ((((min(((~(((/* implicit */int) arr_10 [(unsigned short)19])))), (((/* implicit */int) arr_11 [i_3])))) + (2147483647))) << (((((/* implicit */int) arr_11 [i_3])) - (15157)))));
        var_21 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) max((((/* implicit */short) arr_10 [i_3])), (arr_11 [i_3]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_22 += ((/* implicit */signed char) (-(arr_21 [i_7] [(short)1])));
                        var_23 = ((/* implicit */short) (~(((/* implicit */int) arr_20 [i_4] [i_5] [i_5] [i_7]))));
                        arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_18 [i_4] [i_4]);
                        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_7]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_8 = 1; i_8 < 9; i_8 += 1) 
        {
            for (unsigned short i_9 = 1; i_9 < 11; i_9 += 4) 
            {
                {
                    arr_29 [i_4] [i_8] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_8 + 2]))));
                    arr_30 [(_Bool)1] [i_4] [i_9] [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_4] [i_8] [i_9 - 1]))));
                    var_25 = ((/* implicit */short) (~((-(((/* implicit */int) arr_27 [i_4] [10] [i_9]))))));
                    arr_31 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((arr_18 [i_8 + 1] [i_9 - 1]) / (arr_18 [i_8 + 2] [i_9 + 1])));
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
                    {
                        arr_34 [i_4] [i_8 + 1] [i_9 - 1] [i_9 + 1] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_9 - 1] [i_8 + 1] [i_8 + 1]))));
                        arr_35 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_4 [i_10] [i_8])) == (arr_18 [i_4] [i_4]))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
                    {
                        arr_39 [i_4] [i_4] = ((/* implicit */unsigned int) arr_20 [i_4] [i_8] [i_9 + 1] [i_8]);
                        arr_40 [i_4] [i_8 - 1] [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_14 [i_4]))));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_12 = 1; i_12 < 9; i_12 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                for (unsigned char i_14 = 1; i_14 < 10; i_14 += 2) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) (~(((/* implicit */int) arr_23 [i_12 + 3] [i_14] [i_14 - 1] [i_14]))));
                            var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_17 [i_15] [i_15] [i_15])))) || (((/* implicit */_Bool) arr_20 [i_14 + 1] [i_14 - 1] [i_14 - 1] [i_14 + 1]))));
                        }
                    } 
                } 
            } 
            var_28 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [(unsigned short)4])) % (((/* implicit */int) arr_2 [i_12 + 3] [i_12 + 3]))));
        }
        for (unsigned short i_16 = 1; i_16 < 10; i_16 += 3) 
        {
            arr_55 [i_16] [i_4] = (+(arr_18 [i_16 + 1] [i_16 + 2]));
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned char)0)))))))));
        }
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_17 = 1; i_17 < 12; i_17 += 2) 
    {
        var_30 = ((/* implicit */unsigned char) arr_10 [i_17 + 1]);
        var_31 = min((((/* implicit */unsigned short) arr_11 [i_17 - 1])), (min((arr_5 [i_17 - 1] [i_17 - 1]), (arr_5 [i_17 + 1] [i_17 + 1]))));
        var_32 = ((/* implicit */short) min(((-((-(((/* implicit */int) arr_11 [i_17])))))), ((-((-(((/* implicit */int) arr_57 [i_17]))))))));
        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) arr_6 [i_17 - 1] [i_17 - 1] [(_Bool)1]))));
    }
    for (short i_18 = 0; i_18 < 25; i_18 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (signed char i_20 = 0; i_20 < 25; i_20 += 3) 
            {
                {
                    var_34 = ((/* implicit */unsigned long long int) max((max((max((arr_60 [i_19] [i_19]), (arr_63 [i_18] [i_18] [i_19] [i_20]))), (arr_58 [i_18]))), (((/* implicit */unsigned short) arr_62 [i_18] [i_19] [i_20]))));
                    arr_64 [i_18] [(unsigned char)4] [i_18] [i_18] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_59 [i_18])), (arr_61 [i_18] [i_18])));
                    var_35 = ((/* implicit */short) min((max((arr_61 [i_18] [i_19]), (arr_61 [i_18] [i_20]))), (((/* implicit */unsigned long long int) arr_63 [i_18] [i_19] [i_20] [i_19]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_21 = 0; i_21 < 25; i_21 += 3) 
        {
            for (unsigned long long int i_22 = 1; i_22 < 24; i_22 += 3) 
            {
                {
                    arr_70 [i_18] [i_21] [i_18] [i_18] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)242)), (5737636360824023285LL)))), (0ULL))) - (16782971766228545567ULL)));
                    arr_71 [i_18] [i_18] [(_Bool)1] = ((((/* implicit */int) (((-(((/* implicit */int) arr_59 [i_22])))) <= ((-(((/* implicit */int) (unsigned short)18169))))))) % ((~(((/* implicit */int) ((arr_69 [i_22] [i_21] [i_18] [i_18]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_18] [i_21] [i_22] [22])))))))));
                }
            } 
        } 
        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) max((min((max((arr_69 [i_18] [i_18] [i_18] [i_18]), (((/* implicit */unsigned long long int) arr_63 [i_18] [i_18] [i_18] [i_18])))), (((/* implicit */unsigned long long int) arr_68 [i_18] [i_18] [i_18] [i_18])))), (min((arr_69 [i_18] [i_18] [i_18] [i_18]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_63 [i_18] [i_18] [i_18] [i_18]))))))))))));
        var_37 = ((/* implicit */signed char) max(((-(min((arr_67 [i_18] [i_18] [i_18] [i_18]), (((/* implicit */int) arr_68 [i_18] [i_18] [i_18] [i_18])))))), (((/* implicit */int) max((arr_59 [i_18]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_59 [i_18]))))))))));
    }
    /* LoopSeq 1 */
    for (signed char i_23 = 0; i_23 < 21; i_23 += 4) 
    {
        var_38 = ((/* implicit */_Bool) min((max((arr_69 [i_23] [i_23] [i_23] [i_23]), (((/* implicit */unsigned long long int) arr_65 [i_23])))), (((arr_69 [i_23] [i_23] [i_23] [i_23]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_23] [i_23])))))));
        arr_74 [i_23] [i_23] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_63 [i_23] [i_23] [i_23] [i_23]))))));
        var_39 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_23])), (arr_60 [i_23] [i_23])))), (min((max((arr_67 [i_23] [i_23] [i_23] [i_23]), (((/* implicit */int) arr_58 [i_23])))), (((/* implicit */int) min((arr_63 [i_23] [i_23] [i_23] [i_23]), (arr_5 [i_23] [i_23]))))))));
        var_40 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((((/* implicit */int) min((arr_63 [i_23] [i_23] [i_23] [i_23]), (arr_63 [i_23] [i_23] [i_23] [i_23])))) == (((/* implicit */int) arr_63 [i_23] [i_23] [i_23] [i_23]))))), (arr_60 [i_23] [i_23])));
    }
}
