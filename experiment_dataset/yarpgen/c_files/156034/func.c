/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156034
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
    var_20 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (var_9)))) : (var_6)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] [(unsigned char)11] |= ((/* implicit */unsigned int) (+(18446744073709551615ULL)));
        arr_3 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-125)), (arr_0 [i_1])))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [(signed char)11]), (arr_0 [i_1])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1])))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            for (int i_3 = 4; i_3 < 10; i_3 += 3) 
            {
                {
                    arr_12 [i_2] = ((/* implicit */unsigned long long int) var_1);
                    arr_13 [2ULL] [2ULL] [i_2] [(short)6] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1171599260)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 - 3] [i_2] [i_3] [(unsigned short)8]))) <= (3982137804U)))) : (((/* implicit */int) var_17))));
                }
            } 
        } 
        arr_14 [0U] [i_1] = ((/* implicit */unsigned long long int) (((!(arr_11 [10] [i_1] [(unsigned short)6]))) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned char) (_Bool)1);
        arr_19 [i_4] = ((/* implicit */long long int) arr_15 [(unsigned char)0] [13LL]);
        var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1)), ((+(min((549755813884ULL), (((/* implicit */unsigned long long int) arr_16 [(unsigned short)14] [i_4]))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        arr_23 [i_5] |= max(((unsigned short)65535), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)17))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 3) 
        {
            arr_26 [i_6] = ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)15869)));
            /* LoopNest 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) (_Bool)1);
                        arr_32 [(signed char)2] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)8))));
                        arr_33 [i_5] [i_7 - 1] [i_6] = ((/* implicit */long long int) min((2147483647), (((/* implicit */int) (_Bool)1))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_10))));
                        arr_34 [i_6] [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) arr_30 [i_6 - 1] [i_7 - 1] [i_7 - 1] [i_7])) : (arr_28 [i_6 - 1] [i_7 - 1] [i_6])))) ? (min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) arr_4 [i_8])))) : ((+(((((/* implicit */_Bool) 4477018564322101217ULL)) ? (-1) : (((/* implicit */int) (short)8146))))))));
                    }
                } 
            } 
            arr_35 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) 2147483647)) : (min((((/* implicit */long long int) -1188536746)), (-7009201962012998844LL)))));
            var_24 = ((/* implicit */unsigned char) ((max((0), (((/* implicit */int) arr_15 [i_6 - 1] [(unsigned short)4])))) >= (((int) arr_30 [i_6 - 1] [i_6] [i_6] [6]))));
            /* LoopSeq 3 */
            for (signed char i_9 = 3; i_9 < 10; i_9 += 3) 
            {
                arr_40 [i_5] [i_5] [i_5] [i_6] = ((/* implicit */int) (_Bool)1);
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_27 [i_9 - 3] [i_9] [i_9 - 3] [i_9]))));
                arr_41 [i_5] [(signed char)8] [6] [i_9] |= ((/* implicit */signed char) var_1);
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        {
                            arr_47 [i_6] [i_6] [i_6 + 1] [i_10] [i_9] [(short)0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7)) ? (0ULL) : (((/* implicit */unsigned long long int) var_15))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) arr_4 [i_6]))))) : (var_9)))) ? (min((((/* implicit */unsigned long long int) (signed char)117)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)3]))));
                            var_26 |= ((/* implicit */long long int) arr_4 [i_5]);
                            arr_48 [i_5] [i_6] [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_25 [i_5])), (var_16)));
                            arr_49 [i_5] [i_5] [i_5] [i_11] |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_27 [i_6 + 1] [i_9 - 3] [i_9 + 2] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (0LL)))));
                        }
                    } 
                } 
            }
            for (short i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 3; i_13 < 10; i_13 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        arr_58 [i_5] [i_6] [(unsigned short)10] [i_13] [i_14] [i_6] = ((((/* implicit */int) min((arr_56 [i_6] [i_6 - 1]), (arr_56 [i_6] [i_6 - 1])))) / (min((arr_30 [5] [i_6 - 1] [i_13 + 2] [i_13 + 1]), (arr_30 [i_5] [i_6 + 1] [i_13 - 2] [i_13 - 1]))));
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) arr_56 [(unsigned char)8] [(unsigned char)8])) ? (((/* implicit */int) arr_31 [i_6 + 1] [(signed char)0] [i_6 - 1] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) var_0))))))), (min((((((/* implicit */_Bool) -1188536758)) ? (18446744073709551601ULL) : (arr_22 [i_13 - 1] [i_14]))), (((/* implicit */unsigned long long int) arr_57 [i_5] [i_6 - 1] [i_6] [i_12] [i_12] [i_13] [i_14])))))))));
                        arr_59 [i_6] [i_13] [i_5] [i_6] = ((/* implicit */_Bool) arr_46 [i_14] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_5]);
                        arr_60 [i_5] [i_6 + 1] [(unsigned char)10] [i_13 + 2] [(signed char)6] |= ((/* implicit */long long int) arr_36 [i_5] [i_5]);
                    }
                    arr_61 [i_6] = ((/* implicit */signed char) arr_57 [i_5] [i_5] [i_5] [(signed char)7] [i_5] [i_5] [i_5]);
                    arr_62 [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) 4294967270U))));
                    arr_63 [i_5] [i_5] [i_6] [3LL] = max((((((/* implicit */_Bool) arr_5 [i_13 - 2] [i_13 - 2])) ? (((/* implicit */int) var_18)) : (-1188536746))), (((/* implicit */int) (short)2047)));
                }
                arr_64 [i_5] [i_5] [i_6] [i_12] = (signed char)96;
            }
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                arr_69 [2] |= ((/* implicit */long long int) (+(1073741824ULL)));
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    for (short i_17 = 0; i_17 < 12; i_17 += 3) 
                    {
                        {
                            arr_74 [i_5] [i_6] [i_6] [i_6] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_5])) ? (-2112634257556713532LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_51 [i_6] [i_15] [i_6]))))) ? (((/* implicit */int) var_3)) : (arr_16 [i_6 + 1] [i_15 - 1]))))));
                            arr_75 [2] [i_6] [i_15 - 1] [i_6] [i_6] [i_5] [i_5] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_6] [i_16] [i_5] [i_6])) ? (-4630748147517705988LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))), (min((((/* implicit */unsigned int) (unsigned short)64898)), (4194272U))));
                            arr_76 [i_5] [(unsigned char)10] [0U] [i_16] [0U] |= ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_5] [i_6] [i_6] [2]))) : (arr_67 [i_15 - 1]))) : (((/* implicit */unsigned long long int) -1755228713497718338LL)));
                        }
                    } 
                } 
            }
        }
        arr_77 [i_5] = ((/* implicit */unsigned char) 18ULL);
    }
    var_28 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)17862)), (2024011170)))) ? ((-(((/* implicit */int) var_18)))) : (((((/* implicit */int) var_14)) % (((/* implicit */int) var_4)))))) : ((+(((/* implicit */int) var_4)))));
}
