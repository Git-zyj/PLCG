/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163458
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
    var_10 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((var_2), (((/* implicit */unsigned long long int) -1)))) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9)))))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_8))))) * (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_0)))))))));
    var_11 = ((/* implicit */signed char) (short)-22369);
    var_12 = ((/* implicit */signed char) var_7);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) arr_0 [i_0 - 1])))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((signed char) ((unsigned int) ((arr_2 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)6] [(unsigned char)6])))))));
    }
    /* LoopSeq 3 */
    for (long long int i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((-1765020995), (((/* implicit */int) (signed char)53))))))) ? (((/* implicit */int) ((unsigned char) arr_6 [i_1 + 2]))) : (((/* implicit */int) min(((_Bool)1), ((!(((/* implicit */_Bool) var_4)))))))));
        var_13 = ((/* implicit */long long int) arr_0 [i_1]);
        arr_8 [i_1] = ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */short) ((unsigned char) arr_1 [i_1] [(unsigned short)5]))), (arr_0 [i_1]))))));
        arr_9 [i_1] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((arr_6 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))))));
    }
    for (unsigned char i_2 = 2; i_2 < 13; i_2 += 2) 
    {
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)5)))))));
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((long long int) ((((/* implicit */_Bool) (signed char)-12)) || (((/* implicit */_Bool) -1324573812))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((arr_6 [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157)))))) != (((/* implicit */int) arr_11 [i_2])))))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                arr_19 [i_2 - 1] [i_4] [i_4] = ((/* implicit */_Bool) arr_0 [i_2]);
                var_15 = ((var_7) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)109))))) : ((~(((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (573005026741108602LL))))));
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 13; i_5 += 2) 
                {
                    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_14 [i_3] [i_3])), ((-(((/* implicit */int) var_0)))))))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        var_17 = min((arr_10 [i_4] [i_4]), (((arr_10 [i_3] [i_3]) / (arr_10 [i_4] [i_2]))));
                        arr_27 [(signed char)10] [i_4] [i_5] = ((/* implicit */unsigned char) ((signed char) arr_11 [4ULL]));
                        arr_28 [i_2] [i_3] [i_4] [i_4] [i_6] = ((/* implicit */unsigned int) var_3);
                    }
                    for (unsigned int i_7 = 2; i_7 < 12; i_7 += 3) 
                    {
                        var_18 ^= ((/* implicit */unsigned short) (+(((unsigned int) max((((/* implicit */unsigned int) -687130908)), (3825141389U))))));
                        var_19 = ((/* implicit */long long int) var_7);
                        arr_32 [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) > (min((((((/* implicit */int) var_9)) | (arr_10 [i_4] [i_5]))), (((/* implicit */int) arr_16 [i_2 + 2] [i_5 - 1] [i_5 + 1] [i_7 + 3]))))));
                        var_20 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_7]))));
                    }
                    arr_33 [i_2] [i_4] [(signed char)4] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_16 [i_3] [i_3] [i_3] [i_3])))) | (1890616687U))));
                }
            }
            arr_34 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? ((~(arr_2 [i_2]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_2 - 2] [i_2] [(unsigned short)8])) ? (((/* implicit */int) var_7)) : (arr_20 [i_2 - 2] [i_2] [(_Bool)1]))))));
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_38 [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((arr_5 [i_2 + 2]) != (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            arr_39 [i_8] = ((/* implicit */_Bool) var_1);
            /* LoopSeq 2 */
            for (unsigned char i_9 = 2; i_9 < 13; i_9 += 2) /* same iter space */
            {
                arr_43 [i_8] [(unsigned char)3] [i_9] [i_9 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (var_1))) : (((/* implicit */unsigned long long int) arr_2 [i_9 + 1]))));
                arr_44 [i_8] = ((/* implicit */unsigned int) arr_16 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]);
            }
            for (unsigned char i_10 = 2; i_10 < 13; i_10 += 2) /* same iter space */
            {
                /* LoopSeq 4 */
                for (short i_11 = 2; i_11 < 14; i_11 += 1) /* same iter space */
                {
                    var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (signed char)26))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)28221)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_45 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_10] [0] [i_10] [i_11] [i_10]))) : (arr_18 [i_2] [i_8])))));
                    arr_52 [i_2] [i_8] [i_2 - 2] [i_2 - 1] [(signed char)6] [i_2] = ((/* implicit */long long int) ((arr_2 [i_8]) >= (arr_18 [i_2] [i_8])));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_45 [i_10]))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((140737421246464ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? ((+(arr_20 [i_2] [i_8] [i_11]))) : (((/* implicit */int) arr_40 [i_10 + 1] [i_8] [i_10]))));
                    arr_53 [i_2] [i_8] [i_2] [i_2] [(_Bool)1] = ((_Bool) arr_0 [i_2 + 2]);
                }
                for (short i_12 = 2; i_12 < 14; i_12 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)3))))) || (arr_1 [i_10 - 2] [i_10])));
                    arr_56 [i_8] [i_8] [i_10] [i_12] = ((/* implicit */long long int) var_0);
                }
                for (long long int i_13 = 1; i_13 < 15; i_13 += 2) 
                {
                    arr_59 [(signed char)4] [i_2] [i_8] [i_10 - 2] [i_10] [i_13] = ((/* implicit */signed char) var_7);
                    arr_60 [i_2] [i_8] [i_8] [i_10] [i_13 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_13]))))) > (arr_12 [i_2])));
                    arr_61 [i_2] [i_2] [i_2] [i_2] [i_8] = ((/* implicit */_Bool) arr_20 [i_13 - 1] [i_8] [i_8]);
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_13] [i_10] [i_2] [i_10] [i_2])) << (((((arr_35 [i_2] [i_10] [i_2]) & (((/* implicit */int) arr_16 [i_2] [i_8] [i_8] [i_8])))) - (118))))))));
                    var_26 *= ((/* implicit */_Bool) var_9);
                }
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    var_27 -= ((/* implicit */int) var_8);
                    arr_64 [i_8] [i_8] [i_10] [i_14] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_63 [i_2 + 1] [i_8] [i_2 + 1] [i_8] [i_10 + 2])) ? (arr_63 [i_2 - 1] [i_2 - 1] [i_10] [i_8] [i_10 + 3]) : (arr_63 [i_2 - 1] [10U] [i_10 + 3] [i_8] [i_10 + 2])));
                    var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_58 [i_2 + 2] [i_8] [i_8] [i_2] [(short)3]))));
                    var_29 = ((/* implicit */signed char) min((var_29), (var_5)));
                    /* LoopSeq 4 */
                    for (long long int i_15 = 0; i_15 < 16; i_15 += 4) /* same iter space */
                    {
                        arr_67 [i_2] [i_2] [i_2] [i_2] [i_2 + 2] [i_8] = ((/* implicit */signed char) ((unsigned char) arr_23 [i_14 - 1] [i_14] [i_8]));
                        arr_68 [i_8] [i_8] [i_10] [i_8] [i_15] [i_8] [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) arr_55 [i_10] [i_10] [i_10 + 2] [i_10 + 1] [i_8]))));
                    }
                    for (long long int i_16 = 0; i_16 < 16; i_16 += 4) /* same iter space */
                    {
                        arr_71 [i_8] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)112)) ^ (((/* implicit */int) (unsigned short)17769))));
                        var_30 = ((/* implicit */unsigned long long int) arr_11 [i_2 - 1]);
                    }
                    for (signed char i_17 = 2; i_17 < 15; i_17 += 2) /* same iter space */
                    {
                        arr_74 [i_8] [i_8] [i_10] [i_14] [i_17] [i_8] [(signed char)2] = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
                        arr_75 [i_17] [i_14] [i_8] [i_8] [(_Bool)0] = ((/* implicit */unsigned long long int) (_Bool)0);
                        var_31 = ((((/* implicit */int) arr_11 [i_17 - 1])) > (((/* implicit */int) arr_50 [15U])));
                    }
                    for (signed char i_18 = 2; i_18 < 15; i_18 += 2) /* same iter space */
                    {
                        arr_79 [i_8] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (((arr_15 [5LL]) + (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                        arr_80 [i_8] = ((/* implicit */unsigned char) (-(arr_17 [i_2] [i_18 - 1] [i_10] [i_8])));
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) var_4))));
                    }
                }
                arr_81 [i_10] [i_8] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)83)) && (((/* implicit */_Bool) arr_6 [i_2 + 2]))));
            }
        }
        for (unsigned short i_19 = 4; i_19 < 12; i_19 += 1) 
        {
            arr_86 [i_2 + 1] = ((/* implicit */_Bool) arr_76 [i_2] [i_2] [i_2 - 1] [i_2] [0]);
            arr_87 [i_2] = ((unsigned char) var_9);
            var_33 = ((/* implicit */unsigned short) var_9);
            var_34 |= ((((((/* implicit */_Bool) arr_29 [i_2 + 1] [(_Bool)1] [i_19] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))) * (((((/* implicit */_Bool) arr_50 [i_2 + 2])) ? (((/* implicit */int) arr_50 [i_2 - 1])) : (((/* implicit */int) var_7)))));
        }
        arr_88 [i_2] = ((/* implicit */signed char) min(((~(arr_42 [i_2 + 2] [i_2 + 2]))), (((/* implicit */int) var_4))));
        var_35 -= ((/* implicit */unsigned char) (_Bool)0);
    }
    for (long long int i_20 = 2; i_20 < 12; i_20 += 1) 
    {
        arr_91 [i_20] = ((/* implicit */unsigned char) var_3);
        arr_92 [(short)4] = ((/* implicit */unsigned int) ((min((((((/* implicit */int) var_8)) >> (((((/* implicit */int) (unsigned char)242)) - (225))))), (((/* implicit */int) min(((unsigned char)139), (((/* implicit */unsigned char) arr_45 [(unsigned char)8]))))))) ^ (((((/* implicit */int) ((arr_62 [i_20] [i_20] [i_20] [i_20] [2LL] [(unsigned char)0]) > (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))));
        arr_93 [i_20 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)209)) ? ((~(((/* implicit */int) max((var_4), (var_3)))))) : ((~((~(((/* implicit */int) arr_45 [(short)10]))))))));
    }
}
