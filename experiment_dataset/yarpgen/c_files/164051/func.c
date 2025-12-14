/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164051
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((int) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_9))))));
        var_17 &= ((/* implicit */unsigned long long int) ((_Bool) ((((arr_0 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_18 -= ((/* implicit */int) ((unsigned long long int) (short)32767));
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_16) % (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 - 1] [i_2] [i_2 - 1])))))) ? ((+(((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_5 [i_1] [i_2] [i_1])))))) : (((((/* implicit */_Bool) min((arr_6 [i_1]), (((/* implicit */unsigned char) var_15))))) ? (((/* implicit */int) arr_6 [i_2 - 1])) : (((/* implicit */int) arr_4 [8LL])))))))));
            arr_7 [i_1] [i_2] [i_2] = ((/* implicit */short) arr_6 [i_1]);
            arr_8 [i_1] [i_2] = ((/* implicit */signed char) arr_0 [i_2]);
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                arr_11 [12] [i_3] &= ((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) var_6))));
                var_20 ^= ((/* implicit */short) max((((/* implicit */int) ((arr_10 [i_2 + 1] [i_2 - 1] [i_2 - 1]) <= (arr_10 [i_2 - 2] [i_2 + 2] [i_2 - 1])))), (((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 + 1] [i_2 - 2])) ? (((/* implicit */int) arr_9 [i_2 + 2] [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
            }
        }
        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) ((arr_10 [i_1] [i_1] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) == (max((((/* implicit */int) arr_4 [i_1])), (var_1))))))));
        var_22 ^= ((/* implicit */unsigned long long int) var_7);
        arr_12 [i_1] [i_1] = ((/* implicit */int) ((unsigned long long int) ((_Bool) arr_5 [i_1] [i_1] [i_1])));
    }
    for (short i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] [i_4] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_4] [i_4] [i_4])) <= (var_12))))) + (min((arr_0 [i_4]), (((/* implicit */unsigned long long int) var_13))))))));
        arr_16 [i_4] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)108)) > (((/* implicit */int) (unsigned char)251))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4]))) / (arr_0 [i_4])))));
        var_23 = ((unsigned short) arr_13 [i_4]);
    }
    /* LoopSeq 1 */
    for (signed char i_5 = 1; i_5 < 21; i_5 += 3) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (arr_20 [i_5] [i_5]) : (arr_18 [i_5] [i_5])));
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned char) arr_19 [i_5]);
        var_25 ^= ((/* implicit */unsigned long long int) var_2);
    }
    /* LoopSeq 4 */
    for (int i_6 = 1; i_6 < 15; i_6 += 3) 
    {
        arr_26 [i_6] = ((/* implicit */int) ((unsigned long long int) var_15));
        var_26 &= ((/* implicit */int) arr_1 [i_6] [i_6]);
    }
    for (unsigned short i_7 = 4; i_7 < 13; i_7 += 3) 
    {
        arr_29 [i_7] = ((/* implicit */unsigned char) var_2);
        arr_30 [i_7] [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!((_Bool)1))))));
        /* LoopSeq 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 274877906432ULL))));
            arr_35 [i_7] [i_8] [i_8] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [(signed char)6])) == (((/* implicit */int) arr_6 [i_8])))))) > (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_2)))))) + (((((-5343118111503197828LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-98)) + (122))) - (24))))))));
            arr_36 [i_8] [i_7] = ((max((((/* implicit */unsigned long long int) max((var_16), (((/* implicit */long long int) arr_28 [i_7]))))), (arr_10 [i_7] [i_7] [i_7]))) != (arr_33 [i_7] [i_8] [i_8]));
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_28 = ((/* implicit */_Bool) min((var_28), ((!(((((arr_3 [(short)14]) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_7]))))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)121))))))))));
            arr_40 [i_9] [i_9] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) ((((unsigned long long int) var_5)) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_7] [i_9] [i_9])) || (((/* implicit */_Bool) arr_10 [i_9] [i_7] [i_7]))))))))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_7])) || (((/* implicit */_Bool) arr_28 [i_9 - 1])))))));
            arr_41 [i_9] = ((/* implicit */signed char) (+(arr_24 [i_7] [i_9])));
        }
        for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [(short)4])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) (+(14547650)))) ? (max((arr_3 [(short)6]), (((/* implicit */long long int) arr_24 [i_10] [i_10])))) : (((/* implicit */long long int) var_1)))))))));
            /* LoopSeq 1 */
            for (signed char i_11 = 3; i_11 < 12; i_11 += 3) 
            {
                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(unsigned short)2])) || (((/* implicit */_Bool) arr_4 [(unsigned short)6]))))) < (((/* implicit */int) ((unsigned short) arr_4 [12]))))))));
                arr_47 [i_10] [i_10] [i_10] [i_11] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_25 [i_7 - 3] [i_7 - 3])) < (((/* implicit */int) arr_25 [i_7 - 3] [i_7 - 3])))))));
                var_31 = ((/* implicit */signed char) ((int) ((((/* implicit */int) ((unsigned char) var_13))) << (((((/* implicit */int) max((((/* implicit */signed char) var_2)), (var_7)))) - (50))))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 2; i_12 < 12; i_12 += 4) 
            {
                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((arr_37 [i_12] [i_10] [i_12]) << (((((/* implicit */int) arr_9 [i_7] [i_10] [i_12])) - (40852)))))), (min((arr_17 [i_10]), (((/* implicit */long long int) var_11)))))) <= (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_34 [i_7] [i_10] [i_12])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15)))) | (((/* implicit */int) arr_34 [i_7] [i_10] [i_12])))))));
                var_34 = ((/* implicit */int) var_6);
                var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_33 [i_12] [i_10] [i_7])) ? (((/* implicit */long long int) arr_13 [i_7])) : (arr_17 [i_7])))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_50 [i_12])) : (((/* implicit */int) ((((/* implicit */int) arr_50 [i_10])) <= (arr_19 [i_7])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_44 [i_12] [i_10] [i_7])) : (((/* implicit */int) arr_34 [i_7] [i_10] [i_12]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_12])) || (((/* implicit */_Bool) var_16))))))))))));
            }
            arr_51 [i_7] [i_7] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_7 + 1] [i_10]))) > (arr_3 [i_10]))) ? (((unsigned long long int) ((int) var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (arr_46 [i_10] [i_10] [i_7])))) ? (((/* implicit */int) max(((signed char)118), ((signed char)-44)))) : (((/* implicit */int) ((arr_46 [i_7] [i_7] [i_7]) <= (arr_27 [i_7] [i_10])))))))));
        }
        var_36 |= ((/* implicit */unsigned char) (+((+(arr_3 [8U])))));
        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_7 + 2] [i_7] [i_7 - 2] [i_7 - 1])) ^ (((((/* implicit */_Bool) arr_0 [i_7 + 2])) ? (((/* implicit */int) arr_48 [i_7 + 2] [i_7 + 1] [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) arr_48 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 + 1])))))))));
    }
    for (short i_13 = 1; i_13 < 13; i_13 += 3) 
    {
        var_38 = ((/* implicit */unsigned long long int) (+(var_13)));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 3; i_15 < 14; i_15 += 3) 
            {
                arr_61 [i_13] [i_13] [2] |= ((/* implicit */unsigned long long int) var_7);
                var_39 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)-123)))) >= (((/* implicit */int) ((arr_23 [i_15]) <= (((/* implicit */unsigned long long int) arr_19 [i_13])))))));
            }
            /* LoopSeq 1 */
            for (int i_16 = 1; i_16 < 15; i_16 += 1) 
            {
                arr_65 [i_16] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                arr_66 [i_13] [i_13] [i_16] [i_16] = ((/* implicit */unsigned short) arr_24 [i_13] [i_14]);
                arr_67 [i_16] [i_14] [i_16] = ((/* implicit */int) ((unsigned char) arr_60 [i_13] [i_16 - 1] [i_16]));
            }
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
        {
            var_40 = ((((/* implicit */int) ((((/* implicit */int) arr_22 [i_13 + 4] [i_13 + 3])) <= (arr_58 [i_13] [i_17] [i_13 - 1])))) & ((~(((/* implicit */int) var_3)))));
            var_41 = ((signed char) ((max((var_14), (var_2))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_17])) ? (((/* implicit */int) arr_22 [i_13] [i_17])) : (((/* implicit */int) arr_22 [i_17] [i_13]))))) : (((((/* implicit */unsigned long long int) arr_64 [i_13] [i_17] [i_17])) / (arr_0 [i_13])))));
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
        {
            var_42 = min((arr_72 [i_13] [i_13]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_68 [i_18] [i_18] [i_13])))))))));
            arr_73 [i_13] = arr_25 [i_13] [i_13];
            var_43 = ((/* implicit */unsigned short) ((max((((((/* implicit */int) arr_62 [i_18] [i_18] [i_13])) - (arr_19 [i_18]))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_13] [i_18])) : (((/* implicit */int) var_2)))))) - ((~((+(((/* implicit */int) arr_68 [i_13] [i_18] [i_18]))))))));
        }
        for (long long int i_19 = 2; i_19 < 16; i_19 += 3) 
        {
            arr_78 [i_19] [i_13] [i_13] = (-(max((arr_71 [i_13] [i_13] [i_13 + 4]), (arr_72 [i_13 - 1] [i_19 - 2]))));
            arr_79 [i_13] [i_19] [i_19] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_22 [i_19] [i_13])), (((((/* implicit */_Bool) arr_18 [i_13 + 3] [i_19 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_13] [i_19] [i_19]))) : (arr_55 [i_19])))));
            arr_80 [i_13] [i_19] [i_19] = ((/* implicit */unsigned short) ((arr_18 [i_13] [i_19]) - (((/* implicit */unsigned long long int) ((int) ((_Bool) (signed char)(-127 - 1)))))));
            arr_81 [i_13] |= (+((+(((/* implicit */int) var_11)))));
        }
        arr_82 [i_13] [i_13] |= ((/* implicit */_Bool) var_4);
        arr_83 [i_13] = ((/* implicit */short) var_2);
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 18; i_20 += 1) 
    {
        var_44 = ((/* implicit */unsigned short) (+(((unsigned long long int) var_12))));
        var_45 = ((/* implicit */int) ((_Bool) arr_19 [i_20]));
    }
}
