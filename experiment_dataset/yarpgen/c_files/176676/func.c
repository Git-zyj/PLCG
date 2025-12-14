/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176676
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)204))) % (var_10))))))) * (((/* implicit */int) (signed char)(-127 - 1))))))));
        var_19 -= (signed char)(-127 - 1);
    }
    var_20 = ((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) var_15)) & (((/* implicit */int) var_5))))));
    var_21 = min((var_10), (((/* implicit */long long int) min((((((/* implicit */int) var_9)) | (((/* implicit */int) var_12)))), ((~(((/* implicit */int) var_12))))))));
    /* LoopSeq 1 */
    for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
    {
        var_22 = ((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) var_1))))), (927023921779373063LL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 2; i_2 < 21; i_2 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-84)) && (((/* implicit */_Bool) arr_4 [i_2 + 1])))))));
            arr_8 [(signed char)9] [i_2] [9] = ((/* implicit */long long int) ((unsigned char) arr_6 [i_2]));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 15; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_10 [i_3 + 1]) : (((/* implicit */long long int) (-(arr_5 [i_3] [i_4])))))))));
            var_25 &= ((/* implicit */long long int) (~(((((/* implicit */_Bool) 144115188075855871LL)) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) (unsigned short)64452))))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                var_26 = var_16;
                var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_4])) * (((/* implicit */int) arr_6 [i_4]))));
            }
            arr_17 [(unsigned short)2] [i_4] |= ((/* implicit */unsigned char) arr_11 [i_3 - 1] [i_3] [i_3 - 1]);
        }
        for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_7 = 2; i_7 < 15; i_7 += 3) 
            {
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)255))))) % ((-(arr_11 [i_7] [i_6] [i_3]))))))));
                var_29 = ((/* implicit */long long int) var_5);
                var_30 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_12))))));
            }
            for (int i_8 = 2; i_8 < 14; i_8 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    var_31 -= ((/* implicit */unsigned char) (+(arr_25 [i_3 - 1])));
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (+(arr_14 [i_9]))))));
                    var_33 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)127))));
                    var_34 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-127)) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_3])))))));
                    /* LoopSeq 4 */
                    for (long long int i_10 = 1; i_10 < 14; i_10 += 1) /* same iter space */
                    {
                        arr_29 [i_3 - 1] [i_6] [i_9] [(signed char)8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_8] [i_9] [14LL])) / (((/* implicit */int) arr_15 [i_9] [(unsigned char)0] [i_10 - 1]))));
                        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (~(arr_13 [i_8 - 1] [i_10 + 1] [12LL]))))));
                        arr_30 [i_3] [i_3] [i_3] [(unsigned short)10] [i_3] = ((/* implicit */signed char) (-(-927023921779373064LL)));
                    }
                    for (long long int i_11 = 1; i_11 < 14; i_11 += 1) /* same iter space */
                    {
                        var_36 = ((((/* implicit */_Bool) arr_5 [i_6] [i_11 + 1])) ? (((/* implicit */int) arr_0 [i_3] [i_8 + 2])) : (((/* implicit */int) arr_6 [i_11])));
                        arr_34 [4LL] [i_9] [i_9] [i_8] [i_9] [i_3] [i_3] |= ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_9 [i_8 - 2])) : (2147483647));
                        var_37 ^= ((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (var_3) : (((/* implicit */long long int) arr_1 [i_3 + 1])));
                        var_38 = ((/* implicit */long long int) ((unsigned char) arr_31 [i_3 - 1] [i_11 + 2]));
                        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_11 - 1] [i_11 + 2] [i_11 + 1] [i_11 + 2] [i_11 + 1])) ? (((/* implicit */int) arr_28 [i_11 + 1] [i_11 + 1] [i_11 + 2] [i_11 + 2] [i_11 + 2])) : (((/* implicit */int) (unsigned char)255)))))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) -144115188075855871LL))));
                        var_41 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_3 - 1])) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) var_1)))) : (((/* implicit */int) (signed char)124))));
                        var_42 = ((((arr_25 [(unsigned char)12]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))))) / (arr_10 [i_3 + 1]));
                    }
                    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        var_43 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) arr_37 [i_3 - 1] [i_3] [i_3 - 1] [i_3 + 1] [i_3]))));
                        var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_9] [i_9] [1] [i_3])) ? (arr_22 [i_3] [i_3 + 1] [i_3 + 1]) : (arr_22 [i_3 - 1] [i_6] [i_6]))))));
                        arr_40 [i_3 - 1] [1] [i_9] [(unsigned char)7] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)895)) && (((/* implicit */_Bool) (signed char)124))));
                        arr_41 [(signed char)2] [i_3] [i_6] [i_8] [i_9] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_3 + 1] [(signed char)12] [i_8 + 2])) ? (arr_13 [i_3 - 1] [(unsigned char)10] [i_8 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)895)))));
                        arr_42 [i_13] [i_9] [(signed char)6] [i_8 - 1] [(signed char)10] [i_3 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_3 - 1] [i_3 - 1] [i_13] [i_13] [i_13]))) : (var_7)));
                    }
                }
                var_45 += ((/* implicit */unsigned char) ((arr_36 [i_8] [i_3 - 1] [i_8 - 1] [i_8 + 1] [i_3 - 1]) % (((/* implicit */long long int) (~(1379251576))))));
                arr_43 [(unsigned char)4] [i_6] [i_6] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3 + 1])) && (((/* implicit */_Bool) arr_9 [i_3 + 1]))));
            }
            for (int i_14 = 2; i_14 < 14; i_14 += 2) /* same iter space */
            {
                var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) ((signed char) (signed char)94)))));
                arr_46 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_14] [i_14 + 1])) | (((/* implicit */int) arr_16 [i_14] [i_14 + 1]))));
            }
            arr_47 [i_3] [i_6] = ((/* implicit */unsigned short) ((long long int) 863130425));
            /* LoopSeq 1 */
            for (int i_15 = 0; i_15 < 16; i_15 += 2) 
            {
                var_47 = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [(signed char)17] [i_3 - 1]))));
                var_48 = ((/* implicit */unsigned short) ((int) arr_10 [i_3 + 1]));
                var_49 += (+(((/* implicit */int) arr_44 [i_3])));
            }
            var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_39 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
        }
        for (long long int i_16 = 2; i_16 < 13; i_16 += 2) 
        {
            arr_53 [i_3] [(unsigned char)4] [i_3 + 1] &= ((/* implicit */long long int) ((signed char) var_16));
            var_51 -= ((/* implicit */long long int) arr_15 [i_16] [i_16 + 2] [(unsigned short)14]);
            var_52 += ((/* implicit */int) ((long long int) (signed char)16));
            /* LoopSeq 2 */
            for (signed char i_17 = 0; i_17 < 16; i_17 += 4) 
            {
                var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) ((arr_50 [i_3 - 1] [i_16 + 1] [i_17] [i_16]) <= (((/* implicit */int) arr_6 [i_17])))))));
                /* LoopSeq 1 */
                for (int i_18 = 0; i_18 < 16; i_18 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_19 = 0; i_19 < 16; i_19 += 3) 
                    {
                        var_54 = ((/* implicit */signed char) min((var_54), (((/* implicit */signed char) var_16))));
                        var_55 += (-(((/* implicit */int) var_16)));
                        arr_61 [i_3] [i_16] [i_17] [i_17] [i_18] [i_18] [i_16] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_9 [i_18])) ? (arr_39 [i_17] [i_17] [i_17] [i_17] [i_17]) : (((/* implicit */int) (signed char)92))))));
                    }
                    var_56 += ((/* implicit */signed char) ((unsigned char) var_8));
                    /* LoopSeq 2 */
                    for (long long int i_20 = 4; i_20 < 15; i_20 += 4) 
                    {
                        arr_65 [(unsigned char)8] [i_16 - 1] [i_17] [i_18] [i_18] [13LL] = ((arr_31 [i_3] [(signed char)8]) << (((((/* implicit */int) (unsigned short)37898)) - (37898))));
                        var_57 = ((/* implicit */int) max((var_57), (((/* implicit */int) (unsigned short)1084))));
                        var_58 = arr_45 [(unsigned char)10] [(unsigned char)10];
                    }
                    for (int i_21 = 0; i_21 < 16; i_21 += 4) 
                    {
                        arr_68 [i_3] [i_16] [i_3] [i_17] [(unsigned short)12] [i_3] = ((/* implicit */unsigned short) arr_15 [i_17] [i_17] [i_18]);
                        var_59 = ((/* implicit */long long int) max((var_59), (((/* implicit */long long int) arr_39 [i_3 + 1] [i_16 + 1] [(unsigned short)7] [i_16] [i_16 + 1]))));
                        arr_69 [i_21] [i_16 + 1] [i_17] [i_16 + 1] [(signed char)7] = (-(((/* implicit */int) (unsigned short)57843)));
                        var_60 = ((/* implicit */signed char) var_17);
                    }
                    arr_70 [i_3] [i_3] [i_17] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_60 [i_16 + 1] [9LL] [i_3 + 1] [i_3] [i_3 + 1])) ? (((/* implicit */int) arr_60 [i_16 + 1] [(unsigned short)12] [i_3 + 1] [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) arr_60 [i_16 + 1] [(signed char)9] [i_3 + 1] [12LL] [i_3 + 1]))));
                }
                var_61 |= ((((/* implicit */_Bool) arr_45 [i_16] [i_3 - 1])) ? (((/* implicit */int) (signed char)-17)) : (arr_50 [i_17] [(unsigned short)3] [4] [i_3]));
            }
            for (unsigned short i_22 = 0; i_22 < 16; i_22 += 1) 
            {
                var_62 = ((/* implicit */signed char) (unsigned short)1083);
                var_63 |= ((/* implicit */unsigned short) ((signed char) var_4));
                var_64 += ((/* implicit */signed char) ((int) arr_6 [i_16]));
            }
        }
        arr_74 [2LL] [2LL] = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_3 - 1])) / (((/* implicit */int) arr_19 [i_3 - 1]))));
        var_65 = ((/* implicit */signed char) max((var_65), (((/* implicit */signed char) (-(((/* implicit */int) var_1)))))));
    }
}
