/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138421
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
    var_20 = ((/* implicit */signed char) 2139095040U);
    var_21 = ((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */int) var_6)) <= (((/* implicit */int) var_16)))) ? (var_17) : (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) var_15))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */int) arr_4 [4U] [4U] [(unsigned short)4])) / (((/* implicit */int) arr_3 [i_1] [i_2])))), ((-(((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 3])))))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 3; i_3 < 9; i_3 += 2) /* same iter space */
                    {
                        arr_10 [i_1] = ((/* implicit */unsigned char) (unsigned short)31550);
                        arr_11 [10] [i_1] [i_2] [10U] |= ((/* implicit */unsigned int) (((+((+(6613540988456156605ULL))))) <= (((max((((/* implicit */unsigned long long int) 2155872255U)), (5599834439471868657ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0] [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [(short)7] [(unsigned char)3] [i_0])))))))))));
                        arr_12 [i_0] [i_1] [(short)0] [i_1] = ((/* implicit */unsigned char) ((unsigned int) arr_9 [i_3 - 1] [i_3] [(unsigned short)6] [i_1]));
                    }
                    for (int i_4 = 3; i_4 < 9; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            arr_18 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max(((short)23202), (max((((/* implicit */short) arr_5 [i_2] [(unsigned short)10] [i_2])), ((short)22023)))))), (arr_0 [(short)3])));
                            arr_19 [i_0] [i_1] [i_0] [i_1] [i_5] = ((/* implicit */int) ((((((/* implicit */int) (unsigned short)31)) + (((/* implicit */int) (short)4668)))) <= ((~(((/* implicit */int) (signed char)127))))));
                        }
                        arr_20 [i_1] [i_4] [i_4 - 2] = ((/* implicit */int) ((((((/* implicit */int) arr_5 [(unsigned short)8] [i_1] [i_2 - 1])) >> (((((/* implicit */int) arr_5 [i_1] [(unsigned short)3] [i_2 - 2])) - (81))))) == (((((/* implicit */int) arr_5 [(signed char)6] [i_1] [i_2 - 1])) >> (((((/* implicit */int) arr_5 [(short)7] [i_2] [i_2 + 3])) - (98)))))));
                    }
                }
            } 
        } 
        arr_21 [(short)4] = (-(4242634003U));
        arr_22 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [6ULL] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)22009))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0])) * (((/* implicit */int) (short)-4668))))), (((((/* implicit */_Bool) arr_14 [(unsigned short)1] [i_0] [10U] [4ULL] [i_0] [(unsigned short)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [(unsigned short)9] [i_0] [i_0] [i_0] [i_0]))) : (var_19)))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_7 = 1; i_7 < 10; i_7 += 4) 
        {
            for (short i_8 = 1; i_8 < 10; i_8 += 3) 
            {
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))));
                            var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_38 [i_6] [i_7 + 1] [(unsigned short)7] [10ULL] [(signed char)7] [i_10] [i_10]) <= (2139095028U))))));
                        }
                        for (unsigned char i_11 = 4; i_11 < 9; i_11 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (~(((unsigned int) (unsigned char)132)))))));
                            arr_42 [i_6] [(signed char)6] [9U] [i_6] [5U] [i_7] = ((/* implicit */unsigned int) (-(arr_36 [(short)1] [(short)10] [(short)10] [i_8] [(short)2] [i_9] [(signed char)4])));
                        }
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((((/* implicit */_Bool) arr_5 [i_7] [i_7 - 1] [i_8 + 1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(unsigned short)6] [i_7] [(unsigned short)1] [(short)7])))))));
                        var_27 ^= ((/* implicit */short) (-(((/* implicit */int) (short)-21998))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            arr_46 [(unsigned short)6] [6U] = ((/* implicit */unsigned long long int) arr_38 [i_6] [6ULL] [i_12] [(short)0] [i_6] [(short)4] [i_12]);
            var_28 -= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) arr_23 [(unsigned short)5])) ^ (((/* implicit */int) arr_39 [i_6] [i_6] [i_6] [(unsigned short)10] [(unsigned short)7])))));
            var_29 = ((/* implicit */signed char) max((var_29), (((signed char) arr_39 [i_12] [i_12] [i_6] [i_6] [i_6]))));
        }
        for (short i_13 = 1; i_13 < 10; i_13 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                for (short i_15 = 2; i_15 < 9; i_15 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) arr_13 [i_15] [i_15] [i_15] [i_15 - 2]);
                        arr_56 [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_54 [i_14] [i_15 + 2] [i_14] [i_13 + 1]))));
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_15 + 2] [i_15 + 2] [i_13 - 1])) ? (((/* implicit */int) ((signed char) arr_14 [i_6] [i_13] [i_13] [i_14] [i_14] [i_15]))) : (((/* implicit */int) arr_55 [i_13 - 1] [i_13 - 1] [2U] [i_15] [i_15 - 1])))))));
                    }
                } 
            } 
            var_32 *= ((/* implicit */int) (!(((((/* implicit */int) (unsigned char)130)) >= (var_17)))));
        }
        for (short i_16 = 1; i_16 < 10; i_16 += 2) /* same iter space */
        {
            arr_61 [i_6] [i_16 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)240)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
            arr_62 [i_6] [9U] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-533)) ? (((/* implicit */int) ((arr_38 [i_6] [2U] [i_16] [i_16] [i_16] [i_16] [7]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_6] [i_16 + 1])))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)21640)) : (((/* implicit */int) var_5))))));
            arr_63 [i_6] [i_6] [(unsigned short)4] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) arr_49 [i_16] [i_16 + 1] [i_16 + 1]))));
        }
        var_33 = ((((/* implicit */int) arr_17 [i_6])) * (((/* implicit */int) arr_17 [i_6])));
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 18; i_17 += 2) 
    {
        for (unsigned char i_18 = 3; i_18 < 16; i_18 += 1) 
        {
            {
                var_34 = ((/* implicit */unsigned char) (~(((int) 528055564U))));
                var_35 = ((/* implicit */unsigned char) (unsigned short)51473);
                /* LoopNest 2 */
                for (unsigned char i_19 = 2; i_19 < 17; i_19 += 1) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_69 [i_18] [12ULL] [(short)1]), ((unsigned short)49728))))))), (arr_68 [i_17] [i_18])));
                            var_37 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_18)), (min((arr_69 [i_18 - 3] [i_18 - 1] [i_18 - 1]), (arr_69 [i_18 - 3] [10] [i_18 - 1])))));
                        }
                    } 
                } 
                var_38 -= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-5831))))) ? (min((((/* implicit */unsigned int) -418245519)), (var_19))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_18 - 2]))))), (((/* implicit */unsigned int) ((int) arr_70 [i_18 - 1] [i_18 - 1] [(short)1] [i_17])))));
                arr_74 [(unsigned char)9] = ((/* implicit */unsigned char) ((min((((/* implicit */int) arr_70 [i_18 - 3] [i_18 + 1] [i_18 - 1] [16U])), (arr_73 [i_17] [i_18 + 1] [i_18] [i_18]))) == (((((/* implicit */int) ((unsigned char) (short)-11))) | (((/* implicit */int) max((arr_67 [i_17] [i_17] [i_17]), (arr_65 [i_18]))))))));
            }
        } 
    } 
}
