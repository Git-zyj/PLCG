/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108380
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [5LL] [i_1] [i_2] [i_2] = ((/* implicit */long long int) (unsigned char)1);
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) arr_3 [2ULL] [i_1] [i_2]);
                    var_20 &= ((/* implicit */unsigned char) ((13133220864263856503ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (arr_0 [i_1])))))));
                }
            } 
        } 
        var_21 -= ((/* implicit */_Bool) var_7);
        var_22 = ((/* implicit */unsigned char) arr_7 [i_0]);
        var_23 -= ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) arr_1 [5U])))), (var_5)));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        arr_13 [(unsigned short)19] [i_3] |= ((/* implicit */signed char) var_17);
        var_24 &= arr_10 [i_3] [i_3];
        /* LoopSeq 1 */
        for (unsigned int i_4 = 3; i_4 < 24; i_4 += 3) 
        {
            var_25 *= ((/* implicit */unsigned int) ((short) var_0));
            arr_17 [i_3] [i_4] = ((/* implicit */int) arr_16 [i_3] [i_4] [i_3]);
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) arr_12 [i_3] [i_4]))));
            /* LoopSeq 2 */
            for (unsigned char i_5 = 3; i_5 < 22; i_5 += 3) 
            {
                var_27 = ((/* implicit */unsigned short) arr_20 [(unsigned short)11] [i_4] [i_5]);
                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) arr_19 [8] [i_3] [i_4] [8U]))));
                var_29 = ((/* implicit */unsigned int) var_6);
            }
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                var_30 = ((/* implicit */unsigned int) (+((+(-464303575)))));
                var_31 = ((/* implicit */unsigned short) var_0);
            }
            /* LoopSeq 4 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) var_16))));
                var_33 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)233))) != (((long long int) var_10))));
                var_34 -= ((/* implicit */unsigned char) ((1708049698) | (arr_26 [(_Bool)1] [i_3] [(_Bool)1] [i_4 - 2])));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_35 = ((/* implicit */unsigned short) ((signed char) var_2));
                var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (-(arr_12 [i_4 - 2] [11]))))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                var_37 -= ((((/* implicit */_Bool) arr_11 [i_4 - 2] [i_4 - 3])) ? (arr_11 [i_4 - 2] [i_4 - 1]) : (arr_11 [i_4 - 3] [i_4 - 3]));
                arr_35 [i_4] = ((/* implicit */long long int) arr_12 [i_3] [i_4]);
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    arr_41 [i_11] [i_4] [i_4] [i_3] = ((/* implicit */unsigned short) var_10);
                    /* LoopSeq 3 */
                    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_13))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_8)) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)0)))))))));
                        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) arr_44 [i_3] [12ULL] [i_10] [7U] [(unsigned short)16] [i_12]))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        arr_47 [i_4] [i_4] = ((/* implicit */unsigned int) -464303575);
                        var_40 = ((/* implicit */unsigned int) (~(((unsigned long long int) var_0))));
                        var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((((unsigned long long int) 2324305777U)) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9)))))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        var_42 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_4 - 3] [i_4])) | (((((/* implicit */int) (unsigned char)6)) << (((/* implicit */int) arr_15 [i_3] [i_3] [15U]))))));
                        arr_52 [i_4] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_14] [i_14 + 1] [i_14])) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) arr_39 [i_3] [i_3] [i_4 - 3] [i_14]))));
                        var_43 &= ((/* implicit */int) (unsigned char)245);
                        arr_53 [i_3] [i_4] [i_4] = 15749332792555683867ULL;
                        arr_54 [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_38 [i_10])) >= (((/* implicit */int) arr_15 [i_4] [(unsigned char)18] [i_4]))))) + (((/* implicit */int) arr_16 [13U] [i_4] [4]))));
                    }
                }
                for (unsigned char i_15 = 4; i_15 < 22; i_15 += 3) 
                {
                    arr_57 [i_3] [i_4] [i_10] [i_15] = ((/* implicit */unsigned long long int) 1825877420U);
                    var_44 = ((/* implicit */unsigned short) var_1);
                    arr_58 [i_4] [(signed char)15] [(signed char)15] [2LL] [(signed char)21] = ((/* implicit */short) (_Bool)1);
                    arr_59 [i_15] [i_4] [i_10] [i_10] [(short)19] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_55 [i_3] [i_3] [i_3] [i_3])) == (((/* implicit */int) (unsigned char)14)))));
                }
                for (unsigned char i_16 = 2; i_16 < 23; i_16 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 3; i_17 < 23; i_17 += 2) 
                    {
                        var_45 = ((/* implicit */unsigned short) arr_36 [0LL] [10LL] [i_10] [i_10]);
                        var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) ((long long int) ((int) 12039098382915212245ULL))))));
                        var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) (-((((_Bool)1) ? (((/* implicit */unsigned long long int) var_13)) : (var_1))))))));
                        var_48 = ((/* implicit */unsigned short) (+(-464303575)));
                        var_49 *= ((/* implicit */unsigned long long int) ((arr_11 [i_4 + 1] [i_4 + 1]) <= (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                    }
                    var_50 = ((/* implicit */unsigned short) arr_43 [i_16] [i_4] [i_10] [i_16] [i_10] [i_4] [i_3]);
                    arr_64 [i_3] [i_3] [i_4] [i_3] [i_3] [(unsigned char)1] = ((/* implicit */unsigned long long int) (~(var_13)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 3) 
                    {
                        var_51 = arr_22 [i_4 - 2] [i_16];
                        var_52 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14963756882251534184ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_4] [i_10] [(_Bool)1] [i_18]))) : (4234210066092820316LL)))) * (0ULL)));
                    }
                    arr_67 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */_Bool) arr_45 [21] [i_4] [i_10] [(unsigned char)23] [21]);
                }
                for (unsigned short i_19 = 0; i_19 < 25; i_19 += 3) 
                {
                    var_53 = ((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) <= (18446744073709551612ULL))))));
                    arr_71 [i_3] [i_4] [4ULL] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_12 [i_19] [10ULL]))) ? (((/* implicit */int) ((short) -1926892467))) : (((/* implicit */int) arr_32 [i_4 - 2] [i_4] [i_4]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 2) 
                    {
                        arr_74 [i_3] [i_3] [i_4] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) var_5);
                        arr_75 [i_4] [i_4] [i_10] [19U] [(unsigned char)18] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_15 [i_4 - 3] [i_4 + 1] [i_4 + 1]))));
                        var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) arr_68 [i_3] [21U] [i_4 + 1] [11LL])) : (((18446744073709551612ULL) - (((/* implicit */unsigned long long int) var_13))))));
                    }
                    arr_76 [i_3] [16ULL] [i_3] [i_19] |= ((/* implicit */unsigned int) var_12);
                    arr_77 [i_4] [(short)6] [i_19] = ((/* implicit */unsigned short) (_Bool)1);
                }
                arr_78 [i_4] = ((/* implicit */unsigned int) (_Bool)1);
                arr_79 [20LL] [18] [i_4] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_12 [i_3] [i_4 - 2]) <= (arr_69 [i_3] [i_4] [i_10] [i_3] [i_4]))))) : (arr_12 [i_4 - 2] [i_4])));
            }
        }
        var_55 = ((/* implicit */unsigned long long int) min((var_55), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_34 [i_3] [i_3] [i_3] [i_3])))))));
    }
    for (unsigned long long int i_21 = 3; i_21 < 17; i_21 += 3) 
    {
        var_56 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [i_21] [16ULL] [i_21])))))));
        var_57 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_81 [(short)11] [i_21])) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_2))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_80 [i_21]))) : (min((max((((/* implicit */unsigned long long int) (_Bool)1)), (3ULL))), (((/* implicit */unsigned long long int) arr_20 [i_21 - 3] [i_21 - 1] [i_21 - 1]))))));
        var_58 = ((/* implicit */unsigned char) max((var_58), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))), (max(((((_Bool)1) ? (275368665U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (var_8) : (arr_26 [(_Bool)1] [(unsigned short)3] [i_21] [(_Bool)1])))))))))));
    }
    /* vectorizable */
    for (unsigned char i_22 = 1; i_22 < 17; i_22 += 3) 
    {
        var_59 = ((/* implicit */_Bool) max((var_59), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_22] [(unsigned short)14])) ? (((((/* implicit */_Bool) var_6)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((unsigned long long int) var_17)))))));
        arr_84 [(short)12] = ((/* implicit */unsigned short) arr_21 [7U]);
    }
    var_60 = ((/* implicit */int) (short)-32648);
    var_61 = ((/* implicit */unsigned short) var_17);
}
