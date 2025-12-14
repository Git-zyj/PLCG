/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162088
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 2] [i_2] [i_1 + 2])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_16))) ^ (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_7)) : (arr_6 [i_0]))))))));
                        var_19 = (+(((/* implicit */int) ((arr_2 [i_1] [i_1 + 2] [i_2]) < (arr_2 [i_2] [i_1 + 1] [i_2])))));
                    }
                    arr_10 [i_0] [(signed char)8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */long long int) 1016128341)) : (-6259872648089886328LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_4 [i_0]))))) ? (((((/* implicit */int) var_5)) & (arr_3 [i_0]))) : (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) (signed char)51))));
                    arr_11 [i_0] [i_1 + 1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_2 [i_2] [i_1 + 2] [i_2]) | (((/* implicit */unsigned int) arr_8 [i_1] [i_1 + 2] [i_2] [0LL])))))));
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */short) min((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) % (((/* implicit */int) (unsigned short)1)))), (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1] [i_1] [i_1])) ? (((972344617) + (((/* implicit */int) var_15)))) : (arr_3 [5U])))));
                }
                for (short i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                {
                    arr_15 [i_0] [i_4] [i_0] = ((/* implicit */unsigned short) 428216637);
                    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 - 1]))));
                                arr_22 [i_7] [i_0] [i_5] [i_6] [i_7] [i_6] = ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_1 + 2] [i_1 + 2] [(signed char)8] [i_1 + 2]))));
                    var_22 = (short)-26087;
                    var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!((_Bool)1))))));
                }
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        {
                            arr_30 [i_8] = ((/* implicit */signed char) (+(max(((-(arr_19 [i_9] [i_8] [i_1] [i_0]))), (((/* implicit */int) ((arr_8 [i_1] [i_8] [i_1] [i_0]) < (arr_3 [i_1]))))))));
                            arr_31 [i_0] [i_8] [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_7 [(unsigned short)6] [i_1 + 2] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned short) (signed char)51))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_9] [i_1 + 1] [i_9] [i_0])) ? ((~(((/* implicit */int) arr_17 [i_0] [i_1] [i_8] [i_9])))) : (((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) (signed char)-37)))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) arr_14 [i_1] [i_0] [i_0] [i_0])) ? (arr_24 [i_0] [i_0] [i_1]) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_1 - 1])) ? (((/* implicit */long long int) arr_19 [i_1 + 1] [i_1 + 2] [i_1] [i_0])) : (arr_29 [i_1 + 1] [i_1 + 2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (arr_28 [i_0] [i_0] [i_1 - 1]) : (arr_1 [i_1 + 2]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
    {
        arr_34 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) 6272672581648435018LL)) ? (((((/* implicit */int) var_11)) - (((/* implicit */int) arr_33 [i_10] [i_10])))) : (((((/* implicit */int) arr_33 [i_10] [i_10])) - (((/* implicit */int) (short)11478))))));
        arr_35 [(_Bool)1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_32 [i_10])) : (((/* implicit */int) arr_32 [i_10]))))));
        arr_36 [i_10] = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) arr_33 [i_10] [i_10])) : (((/* implicit */int) arr_32 [i_10])))) - (((/* implicit */int) arr_33 [i_10] [i_10]))));
        /* LoopSeq 1 */
        for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            arr_41 [i_11] [i_10] = ((/* implicit */short) (~(((/* implicit */int) var_10))));
            arr_42 [i_11] = ((((/* implicit */_Bool) 2096896U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65525)));
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 24; i_12 += 3) 
            {
                for (int i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    {
                        arr_48 [i_13] [i_13] [i_11] = ((/* implicit */unsigned short) (((!(arr_46 [i_12] [i_12] [i_12]))) || (((/* implicit */_Bool) var_1))));
                        arr_49 [i_10] [i_11] [i_11] [i_11] [(signed char)7] [i_13] = ((/* implicit */int) (+(((((/* implicit */_Bool) var_15)) ? (arr_44 [i_13] [i_12] [i_11] [i_10]) : (((/* implicit */long long int) arr_39 [i_13]))))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_11] [i_12] [i_11])) ? ((((_Bool)1) ? (((/* implicit */long long int) arr_47 [9] [i_11] [i_12] [i_12] [i_12] [i_13])) : (arr_44 [i_12] [i_11] [i_12] [i_12]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_10])) | (((/* implicit */int) var_10)))))));
                    }
                } 
            } 
        }
    }
    for (signed char i_14 = 0; i_14 < 24; i_14 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) 1964504080U);
        var_27 = ((/* implicit */long long int) arr_51 [i_14]);
    }
    for (signed char i_15 = 0; i_15 < 24; i_15 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) 
        {
            for (signed char i_17 = 0; i_17 < 24; i_17 += 2) 
            {
                {
                    var_28 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (unsigned short)63424)))), ((~(((((/* implicit */_Bool) (short)-4386)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))))))));
                    /* LoopSeq 1 */
                    for (long long int i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        arr_66 [i_15] [i_15] [i_17] [i_18] = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) var_7)), ((~(arr_52 [i_18])))))));
                        arr_67 [i_15] [i_16] [i_17] [i_18] = ((/* implicit */unsigned int) ((((arr_47 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]) >= (((/* implicit */int) (unsigned short)16384)))) ? (max((((/* implicit */int) (unsigned short)36910)), (((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (signed char)122)))))) : (((/* implicit */int) arr_37 [i_15] [i_15]))));
                        var_29 = ((/* implicit */signed char) 1443632681);
                    }
                    arr_68 [i_17] [i_17] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6739443413755274840LL)) ? (((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) (short)22292))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)11776)))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) : (var_13)));
                }
            } 
        } 
        var_30 = ((/* implicit */int) ((((-269973817) == (((/* implicit */int) arr_63 [i_15] [i_15])))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_53 [i_15]))))), (arr_32 [i_15]))))) : (min((((((/* implicit */_Bool) arr_38 [12LL] [12LL] [i_15])) ? (((/* implicit */long long int) 4294967280U)) : (arr_44 [i_15] [i_15] [i_15] [i_15]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (3035242160U))))))));
        arr_69 [(unsigned short)5] [i_15] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_63 [i_15] [i_15])) ? (((/* implicit */int) arr_63 [i_15] [i_15])) : (((/* implicit */int) var_17)))), ((~(((/* implicit */int) arr_63 [i_15] [i_15]))))));
        arr_70 [i_15] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) arr_62 [i_15] [i_15] [i_15] [i_15] [i_15])) < (arr_43 [i_15] [i_15] [(short)14])))), ((-(((/* implicit */int) min(((short)-22285), (var_3))))))));
    }
}
