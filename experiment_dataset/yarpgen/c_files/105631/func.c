/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105631
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_2 [i_0]), (arr_2 [i_0]))))));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) 1866332170847462756LL))));
        arr_3 [i_0] = ((/* implicit */long long int) var_10);
    }
    for (unsigned char i_1 = 3; i_1 < 13; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) 262112);
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_6 [(_Bool)1]);
            arr_10 [i_1] [i_2] = ((/* implicit */long long int) min((((/* implicit */int) (!(min((arr_6 [i_1]), (arr_6 [i_2])))))), (min(((~(((/* implicit */int) (unsigned short)35726)))), ((~(((/* implicit */int) arr_5 [i_2]))))))));
            arr_11 [(unsigned char)0] = ((/* implicit */int) arr_4 [i_1] [i_1 + 1]);
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                var_17 ^= ((/* implicit */_Bool) var_13);
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) ((arr_6 [i_1 - 2]) ? (((/* implicit */int) min((arr_6 [i_1 + 1]), (arr_6 [i_1 - 2])))) : (((((/* implicit */int) arr_6 [i_1 - 1])) & (((/* implicit */int) arr_6 [i_1 - 1]))))));
                            arr_20 [i_5] [i_4] [i_3] [(signed char)12] [i_2] [i_2] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */int) arr_13 [i_2])) * (((/* implicit */int) arr_13 [i_1])))))))));
                            var_19 -= ((/* implicit */unsigned int) 718093627931980545LL);
                        }
                    } 
                } 
                var_20 -= (unsigned char)61;
                arr_21 [i_1 + 1] [i_2] [i_3] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned short) min((8362679017382765467LL), (718093627931980545LL)))));
            }
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        {
                            arr_31 [i_1] [i_2] [i_6] [i_7] [6ULL] = ((/* implicit */int) ((-718093627931980546LL) != (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1] [i_1] [i_1 - 2] [i_7])))));
                            arr_32 [i_7] [i_2] [i_6] [i_7] [i_6] [i_7] = ((((/* implicit */_Bool) -718093627931980546LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1 + 1]))) : (((long long int) arr_4 [(unsigned char)0] [i_6])));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_6])) / (((/* implicit */int) (unsigned short)36232)))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_17 [i_1] [i_2] [i_6] [i_9] [i_9] [i_2]))));
                    var_23 = ((/* implicit */unsigned char) ((_Bool) arr_24 [i_1 + 1] [i_1 + 1] [i_1]));
                    /* LoopSeq 3 */
                    for (int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) (~(arr_18 [i_1] [i_2] [i_6] [i_9] [i_10] [13])))) ? (((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (unsigned short)6297)))) : (((/* implicit */int) arr_5 [i_1 - 1]))))));
                        var_25 -= ((/* implicit */unsigned int) ((unsigned long long int) (+(-718093627931980553LL))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        arr_41 [i_1] [i_2] [i_6] [i_9] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_34 [(unsigned char)5] [9] [i_6] [i_9] [i_9] [i_11])))) == (((((/* implicit */_Bool) -718093627931980546LL)) ? (2147221504LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18)))))));
                        var_26 -= ((unsigned short) arr_25 [i_1] [i_2] [i_6] [i_1 - 1]);
                        arr_42 [i_1] [i_1 - 3] [4LL] [i_1] [i_1 - 2] [i_1] [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 3] [i_1] [i_1 + 1])) * (((/* implicit */int) arr_36 [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 3] [i_1 - 3] [i_1 + 1]))));
                        arr_43 [i_9] [i_1] [i_6] [10ULL] [i_11] [i_9] = ((((/* implicit */int) arr_25 [i_1] [i_2] [i_1 - 3] [i_9])) >> (((((/* implicit */int) arr_25 [i_1 - 3] [i_1 - 3] [i_1 - 2] [i_9])) - (147))));
                    }
                    for (long long int i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        arr_46 [7LL] [i_2] [i_9] [i_9] [i_12] [i_12] = ((((/* implicit */_Bool) 718093627931980545LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1 - 3] [i_1 - 3] [i_1 + 1] [i_1 + 1]))) : (arr_24 [i_1] [(_Bool)1] [i_9]));
                        arr_47 [i_9] [i_2] [i_6] [i_9] = ((/* implicit */unsigned long long int) -718093627931980515LL);
                        arr_48 [i_9] [i_2] [i_9] [i_6] [i_12] [i_9] [(unsigned char)7] = ((/* implicit */long long int) ((unsigned long long int) 1470502140428699420LL));
                    }
                }
                for (unsigned char i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
                {
                    arr_53 [(unsigned char)12] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)82))) < (arr_15 [13LL] [i_2] [i_6]))) ? (((574208952489738240ULL) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775797LL))) + (70LL))))) : (((/* implicit */unsigned long long int) -1380308849))));
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (arr_18 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1])))) ? (arr_16 [i_6]) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)196))) + (arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                    arr_54 [i_1] [i_2] [i_6] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((long long int) 1470502140428699417LL)) : (arr_15 [i_1 - 2] [i_6] [i_13])));
                }
                arr_55 [i_1 + 1] [(unsigned char)10] [i_6] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_1 - 2] [10LL])) : (((/* implicit */int) arr_39 [i_1] [i_1] [i_1] [i_1] [i_2] [i_2] [i_6]))))));
            }
        }
        for (long long int i_14 = 0; i_14 < 14; i_14 += 1) 
        {
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned short)59258), (((/* implicit */unsigned short) (signed char)73))))) ? (min((5943358402139458545LL), (((/* implicit */long long int) (unsigned short)3584)))) : ((~(9223372036854775807LL)))));
            arr_60 [i_14] = ((/* implicit */long long int) (unsigned short)59244);
            arr_61 [i_14] [i_14] [(signed char)0] = ((/* implicit */unsigned char) ((((((718093627931980565LL) % (var_3))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) < (arr_45 [i_1] [i_1] [i_14] [(unsigned char)13] [i_14]))))))) > (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_35 [i_1] [i_1 - 2] [i_1 - 2] [11ULL] [i_1 + 1])), (min((arr_5 [(unsigned char)0]), (arr_22 [(unsigned short)8] [i_14] [i_14] [i_14])))))))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_29 = ((int) ((unsigned char) arr_30 [i_15] [i_15] [i_1 + 1] [i_1] [i_1]));
            arr_66 [i_15] = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_7)), (arr_59 [i_1 - 3])))));
        }
        arr_67 [i_1] = var_12;
    }
    var_30 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (((((/* implicit */_Bool) 5619066329259234539LL)) ? (((/* implicit */unsigned long long int) 5943358402139458545LL)) : (4049837711098404482ULL)))));
    var_31 = min(((unsigned char)226), (((unsigned char) min((var_13), (var_5)))));
    var_32 = ((/* implicit */int) var_4);
}
