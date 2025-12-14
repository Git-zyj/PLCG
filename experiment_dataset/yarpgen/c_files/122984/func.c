/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122984
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
    var_18 *= ((/* implicit */_Bool) var_16);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) ((unsigned int) ((unsigned int) (short)15516)));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))) ? (((((/* implicit */_Bool) ((signed char) var_10))) ? (var_13) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [(short)8] [(unsigned char)0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [(unsigned short)10]) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27123)))))) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)38405))))))))))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max(((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)38412)) : (((/* implicit */int) (unsigned short)38412)))))), (((/* implicit */int) ((unsigned char) (unsigned short)27124))))))));
    }
    var_22 ^= ((/* implicit */unsigned char) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 18; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (unsigned short)38413))));
                arr_10 [i_1] [i_2] [(unsigned char)18] [(unsigned char)18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_1] [i_1] [i_1] [(unsigned char)16]))) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1 + 1]))));
            }
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                arr_15 [i_1] [i_2] [i_4] [i_4] = ((((long long int) (signed char)-70)) <= (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1] [4] [i_2])) ^ (((/* implicit */int) arr_7 [i_4] [(short)12] [i_2] [(_Bool)1]))))));
                var_24 = ((/* implicit */unsigned int) ((short) arr_0 [i_2]));
                /* LoopSeq 3 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((arr_17 [i_1] [i_2] [i_4] [i_5 + 1] [i_5]) + (((/* implicit */unsigned long long int) 0LL))))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (!(var_17)))) : ((-(((/* implicit */int) (unsigned short)38412))))));
                }
                for (unsigned int i_6 = 1; i_6 < 17; i_6 += 1) 
                {
                    arr_21 [i_1] [(unsigned char)8] [(_Bool)1] [i_6] [i_1] [i_6] = (_Bool)1;
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) | (((/* implicit */int) (unsigned short)38412))))) ? (((((/* implicit */_Bool) arr_17 [i_1 - 1] [(signed char)3] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)38413)) : (((/* implicit */int) (unsigned short)30522)))) : (((/* implicit */int) arr_6 [i_1 - 2] [i_6 + 3] [i_6 + 3])))))));
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((arr_14 [i_6] [i_6] [i_6] [i_6 + 3]) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-104))))))))));
                    arr_22 [i_6] [i_4] [i_2] [(unsigned char)7] [(unsigned char)7] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_6 + 1])) : (((/* implicit */int) (unsigned short)27138))))) ? (((unsigned long long int) (unsigned short)38398)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)2)) * (((/* implicit */int) var_14)))))));
                    var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_6 + 3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38415))) : (var_3)));
                }
                for (long long int i_7 = 3; i_7 < 20; i_7 += 3) 
                {
                    arr_26 [i_1] [20LL] [i_1] [i_1] [i_7] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
                    /* LoopSeq 4 */
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        var_30 = ((/* implicit */long long int) arr_8 [i_4]);
                        var_31 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (signed char)69)))) / (((/* implicit */int) (unsigned short)36692))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_4] [i_7] [i_2] [i_7 - 3] [i_1 + 3] = ((/* implicit */signed char) (short)-24459);
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_1 - 2] [i_2] [(signed char)16] [i_7] [i_1] [i_7 - 1])) ? (((/* implicit */int) arr_28 [i_7 + 1] [i_7] [i_9] [i_9] [(_Bool)1] [(_Bool)1] [8LL])) : (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_25 [2LL] [13LL] [i_2] [2LL])))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_1] [i_2] [i_4] [i_7] [i_10] |= ((/* implicit */unsigned long long int) (short)23597);
                        arr_39 [10] [(unsigned char)1] [i_4] [i_7 - 1] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) arr_20 [i_1 + 2] [i_2] [i_2] [(_Bool)1] [i_10] [(_Bool)1])))) ? (((((/* implicit */_Bool) 1658523413)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_2]))) : (18446744073709551601ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2)))));
                        var_33 = ((/* implicit */signed char) var_13);
                    }
                    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 1) /* same iter space */
                    {
                        arr_43 [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [(_Bool)1] [(_Bool)1])) || (((/* implicit */_Bool) (signed char)-3))));
                        var_34 *= ((/* implicit */unsigned int) arr_7 [1] [i_2] [i_2] [i_2]);
                    }
                    arr_44 [i_7] [i_7 - 1] [(signed char)15] [i_7] [(_Bool)1] = ((/* implicit */long long int) arr_42 [i_1] [i_1 + 2] [i_1]);
                }
                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                var_36 -= ((/* implicit */signed char) arr_35 [i_4] [i_2] [i_1]);
            }
            for (long long int i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    arr_49 [i_1 + 2] [2LL] [3ULL] [3ULL] = ((/* implicit */unsigned char) ((var_3) >> (((((/* implicit */int) var_0)) + (61)))));
                    arr_50 [i_1] [i_2] [i_2] [i_12] [i_13] = ((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_2]))));
                    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_13] [i_2] [9LL] [(unsigned char)2] [i_12])) ? (arr_14 [4ULL] [i_2] [i_12] [i_13]) : (((/* implicit */unsigned long long int) -2649946960948711519LL))))) && (((/* implicit */_Bool) ((signed char) (short)30047)))));
                    var_38 &= ((/* implicit */_Bool) (~(((/* implicit */int) (short)-24459))));
                    var_39 *= ((/* implicit */signed char) (-(arr_20 [i_1 + 1] [i_1] [i_1] [(unsigned short)6] [i_1 - 1] [i_1 - 2])));
                }
                arr_51 [11U] [i_1] = ((/* implicit */_Bool) (-(((arr_24 [(_Bool)1] [i_2] [i_12] [i_12]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)85)))))));
                arr_52 [i_1 - 2] [i_12] [i_12] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-24459)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (unsigned char)57))));
            }
            arr_53 [i_1] = ((/* implicit */short) ((signed char) (unsigned char)198));
            var_40 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))));
            arr_54 [(unsigned char)7] [i_2] [3ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_40 [i_1] [i_1 - 1] [i_1 + 3] [i_1 + 3] [i_1 - 2] [i_1] [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) var_0)))))));
            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) arr_17 [5LL] [(signed char)5] [i_2] [i_2] [i_2]))));
        }
        for (unsigned long long int i_14 = 4; i_14 < 19; i_14 += 2) 
        {
            var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_1 + 1] [i_1 - 2] [i_14])))))));
            var_43 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_14] [(short)0] [(short)0] [i_14])) ? (((((/* implicit */_Bool) (short)-24459)) ? (1555726837) : (((/* implicit */int) (short)-30058)))) : (((/* implicit */int) var_12))));
            var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_1 + 1] [i_1 - 1] [i_14 + 1] [i_14 - 3] [i_14 + 2] [i_14] [i_14 + 2])) ? (arr_30 [i_1 - 1] [i_1 + 3] [i_1] [i_1] [i_14 - 3] [i_14] [i_14 - 4]) : (arr_30 [i_1 + 3] [i_1 - 1] [i_14] [i_14] [i_14 + 2] [i_14] [i_14 + 2]))))));
            var_45 = ((/* implicit */unsigned long long int) ((((_Bool) arr_56 [i_1] [i_1])) ? (((unsigned int) var_11)) : ((-(11596452U)))));
        }
        for (unsigned int i_15 = 0; i_15 < 21; i_15 += 3) 
        {
            arr_63 [i_1] [i_15] [i_15] = ((/* implicit */signed char) (+(((/* implicit */int) arr_5 [i_1 + 1]))));
            arr_64 [20U] [i_15] &= ((((/* implicit */int) (short)24467)) ^ (((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1])));
            var_46 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)30062))))) ? ((+(((/* implicit */int) (unsigned char)69)))) : (((((/* implicit */_Bool) arr_48 [(unsigned char)16] [(_Bool)1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_1]))))));
            arr_65 [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) (short)(-32767 - 1)))));
        }
        arr_66 [i_1] = ((/* implicit */long long int) (~((-(var_9)))));
    }
    for (unsigned int i_16 = 0; i_16 < 10; i_16 += 3) /* same iter space */
    {
        arr_69 [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (signed char)-64))));
        arr_70 [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21170))) : (var_6)));
    }
    for (unsigned int i_17 = 0; i_17 < 10; i_17 += 3) /* same iter space */
    {
        arr_73 [0LL] = ((/* implicit */unsigned short) ((max((min((var_8), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) min((arr_13 [i_17] [i_17] [i_17]), (((/* implicit */unsigned short) var_1))))))) > (((((/* implicit */_Bool) ((-1LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)24)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)15)) ? (11596452U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21187)))))) : ((((_Bool)0) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))))));
        var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)253))))) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)23609)) && (((/* implicit */_Bool) (~(var_2)))))))) : ((~(((((/* implicit */_Bool) var_11)) ? (arr_72 [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))))));
        var_48 = (+(((/* implicit */int) min((max((((/* implicit */short) (_Bool)1)), (var_15))), (((/* implicit */short) arr_9 [i_17] [(_Bool)1] [i_17]))))));
    }
    var_49 *= ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) (short)-23585)))));
}
