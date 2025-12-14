/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153589
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
    var_16 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [0LL] [i_1] [i_0])) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) ((unsigned short) arr_2 [0ULL] [i_1] [i_0]))))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1] [20ULL] = ((/* implicit */unsigned long long int) (short)32760);
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_5 [i_0] [i_1])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_2] [i_1]))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32760)))))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 1; i_4 < 17; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-64))))) >= (((((/* implicit */int) arr_3 [i_1] [i_1] [i_3])) & (((/* implicit */int) arr_0 [i_0]))))));
                        arr_13 [i_0] [(unsigned short)20] [i_0] [i_0] |= ((/* implicit */long long int) ((unsigned long long int) arr_2 [i_3] [i_3] [i_0]));
                    }
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_5 = 3; i_5 < 19; i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            {
                                arr_24 [i_5] [(signed char)8] [i_1] [i_5 - 2] [i_5] [(signed char)14] [i_5 - 2] = ((/* implicit */int) ((long long int) arr_15 [i_1]));
                                arr_25 [(short)15] [i_1] [i_5] [19] [i_7] [i_1] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 3702723184611461505ULL)) ? (((/* implicit */int) (unsigned short)0)) : (-1183530376)));
                                arr_26 [i_1] [19LL] [19LL] [(unsigned short)8] = ((/* implicit */signed char) (-(arr_12 [i_5 - 3] [i_1] [i_5 - 3] [i_5 + 1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) arr_12 [i_5 + 1] [i_0] [i_5] [i_5 - 3])) ? (arr_27 [i_5 + 2] [i_5 - 3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9))));
                                var_21 = ((/* implicit */_Bool) 9223372036854775807LL);
                                var_22 = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_1] [i_9] [i_5 + 1]))));
                                arr_35 [i_1] [i_1] [i_5] [i_1] [i_8] [i_9] [i_9] = (unsigned short)65535;
                            }
                        } 
                    } 
                }
                for (short i_10 = 3; i_10 < 19; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_11 = 2; i_11 < 18; i_11 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) 
                        {
                            arr_45 [i_0] [i_1] [i_1] [i_10] [i_10] [i_11] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)18802)) ? (((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned short)18788))))))) : ((~(arr_23 [i_10 - 3] [16LL] [i_11 - 2] [16LL] [i_11 - 2] [i_1])))));
                            arr_46 [i_0] [(short)2] [i_0] [i_1] [i_0] [14] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)15)) && (((/* implicit */_Bool) arr_36 [(signed char)6] [i_1] [i_1])))))) & (max(((~(-1330877529))), (max((((/* implicit */int) (unsigned char)58)), (arr_11 [i_0] [i_1] [i_10] [14])))))));
                        }
                    }
                    var_24 = ((/* implicit */long long int) max(((-(((((/* implicit */_Bool) arr_34 [i_1] [(unsigned short)6] [0LL] [i_1] [(_Bool)0] [i_10])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)64747)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50408)))))));
                    arr_47 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) var_11))))), (((unsigned long long int) (-9223372036854775807LL - 1LL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)191))))) && (((/* implicit */_Bool) var_11)))))));
                }
                for (short i_13 = 3; i_13 < 19; i_13 += 1) /* same iter space */
                {
                    arr_50 [1ULL] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_0] [i_0]))) : (-4LL))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)24)) && (((/* implicit */_Bool) var_6))))), (525133545072532718LL)))));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) 9223372036854775792LL))));
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 19; i_14 += 3) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 21; i_15 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) ((long long int) -9223372036854775802LL));
                                arr_55 [8LL] [12] [i_1] [(signed char)13] [i_15] [i_14] [15LL] = max((min((562949953421311ULL), (((/* implicit */unsigned long long int) arr_11 [i_13] [i_1] [i_13] [i_14 - 3])))), (((/* implicit */unsigned long long int) max((arr_11 [i_13] [i_1] [0LL] [i_14 - 3]), (((/* implicit */int) var_6))))));
                                arr_56 [(signed char)6] [i_1] [(unsigned char)8] = ((/* implicit */unsigned short) max((min((max((10195025209455563333ULL), (arr_12 [i_0] [i_1] [12LL] [i_14 - 2]))), (((/* implicit */unsigned long long int) (-(1330877531)))))), (((/* implicit */unsigned long long int) max(((~(-395680003527381422LL))), (((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)-118)), (arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] [20LL])))))))));
                                arr_57 [i_0] [i_1] [i_1] [12LL] [i_15] = ((/* implicit */short) (!(((/* implicit */_Bool) 13192787278553984042ULL))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned char)155)))) & (((/* implicit */int) var_10))));
                    arr_58 [i_0] [i_1] [i_1] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [(short)20] [i_0] [i_1] [i_1] [i_13 - 1] [i_1] [i_13 - 1])) ? (((/* implicit */int) arr_21 [0] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_4))))) / (arr_30 [i_1] [i_1] [i_1] [i_1])))) ? ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-26))) : (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) (~(1023))))));
                }
                /* vectorizable */
                for (short i_16 = 3; i_16 < 19; i_16 += 1) /* same iter space */
                {
                    arr_62 [i_0] [i_1] [i_0] |= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)123))));
                    var_28 = ((int) arr_49 [i_1] [i_16 + 1] [i_16 - 1] [19]);
                    arr_63 [(_Bool)1] [i_1] [i_16] = ((/* implicit */short) 1040187392);
                    arr_64 [i_0] [i_1] [i_0] [i_16] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(3522025899528519807ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -82948018)) && (((/* implicit */_Bool) arr_27 [14] [i_1] [i_0])))))) : (((((/* implicit */_Bool) var_3)) ? (14924718174181031808ULL) : (((/* implicit */unsigned long long int) 2147483647))))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) (((-((~(((/* implicit */int) var_0)))))) + ((-2147483647 - 1))));
}
