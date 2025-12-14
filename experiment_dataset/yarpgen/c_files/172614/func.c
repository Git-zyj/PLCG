/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172614
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
    var_16 += ((/* implicit */unsigned long long int) var_9);
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((var_3) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51345))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) == (((/* implicit */long long int) var_15)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (582223180U)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_1 [8]))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_0]) | (arr_0 [i_0])))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [i_0]))) : (min((arr_0 [i_0]), (0)))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)143)) > (arr_0 [i_0])))) / (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_0))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_0);
            var_20 = ((/* implicit */signed char) (_Bool)0);
            arr_7 [i_0] [10LL] [i_0] = ((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0]);
        }
    }
    for (signed char i_2 = 2; i_2 < 16; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 4; i_3 < 14; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 2) 
            {
                {
                    var_21 -= ((/* implicit */int) arr_13 [i_2]);
                    var_22 = ((/* implicit */long long int) var_14);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 4) 
            {
                {
                    arr_22 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                    var_23 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_4)) : (arr_12 [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_11 [i_2] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_18 [i_2] [i_5] [i_6])))))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (_Bool)1)), ((+(((var_8) ? (6624676883136227278LL) : (((/* implicit */long long int) var_15))))))));
    /* LoopSeq 1 */
    for (int i_7 = 1; i_7 < 18; i_7 += 3) 
    {
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_7] [i_7]))))) ? ((~(arr_23 [i_7]))) : ((-(((((/* implicit */_Bool) 9007199221186560LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-92))) : (-2861889167021153668LL)))))));
        arr_25 [i_7] = ((_Bool) ((var_4) >> (((arr_23 [i_7]) + (7710527661420308148LL)))));
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((arr_23 [i_7 + 1]) - (arr_23 [i_7 - 1]))) - (((((/* implicit */long long int) ((/* implicit */int) var_8))) - (arr_23 [i_7 + 1]))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 4; i_9 < 16; i_9 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_9]))))) ? (((((/* implicit */_Bool) arr_26 [i_9])) ? (((/* implicit */int) arr_26 [i_9])) : (((/* implicit */int) arr_26 [i_9])))) : (((/* implicit */int) arr_26 [i_9])))))));
                    arr_30 [i_9 - 3] [i_7] [i_7] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_26 [i_7])) ? (((((/* implicit */_Bool) (unsigned char)137)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)130))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (unsigned char)113))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_10 = 2; i_10 < 16; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 1; i_11 < 16; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 3; i_12 < 17; i_12 += 4) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_28 *= ((/* implicit */short) ((max((((/* implicit */unsigned int) (_Bool)0)), (arr_31 [i_7] [i_7]))) ^ (3673566929U)));
                                var_29 ^= ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_14 = 2; i_14 < 18; i_14 += 1) 
                    {
                        arr_44 [(signed char)12] [8ULL] [i_11 + 3] |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 7260306974544834772LL)), (((((/* implicit */_Bool) (unsigned char)0)) ? (17590038560768ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))));
                        /* LoopSeq 3 */
                        for (long long int i_15 = 2; i_15 < 18; i_15 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) arr_27 [i_10 + 2]))));
                            arr_47 [10ULL] [10ULL] [10ULL] [6ULL] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_32 [i_14 + 1] [i_10] [i_10]) ? (((/* implicit */unsigned long long int) arr_37 [(unsigned char)14] [i_10] [(unsigned char)14])) : ((~(arr_41 [i_7] [i_7 + 1] [i_7] [i_7] [i_7]))))))));
                        }
                        /* vectorizable */
                        for (long long int i_16 = 2; i_16 < 18; i_16 += 1) /* same iter space */
                        {
                            arr_50 [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_29 [i_7] [i_7] [i_7]))));
                            var_31 -= ((/* implicit */_Bool) ((int) ((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_7 + 1] [i_7]))) != (var_3))));
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_7] [i_7] [i_7])) << (((arr_38 [(unsigned short)4] [i_10] [i_11] [(unsigned short)4] [i_16 - 1] [i_16]) - (2691171189U)))))) ? (arr_23 [i_7 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                        }
                        for (signed char i_17 = 0; i_17 < 19; i_17 += 1) 
                        {
                            arr_53 [i_7] [i_7 + 1] [i_7] = (+(((/* implicit */int) (short)32767)));
                            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (-(arr_31 [i_17] [i_10 + 3]))))));
                        }
                        arr_54 [10ULL] [i_11] [i_10 - 2] [10ULL] [10ULL] |= ((/* implicit */_Bool) arr_45 [0ULL]);
                        arr_55 [i_7] [i_7] [3] [i_7] [4LL] = ((((/* implicit */_Bool) ((int) arr_38 [i_7] [i_7] [i_14] [i_14] [i_14] [i_14]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_7] [i_10 + 1] [i_11]))) : ((~(0U))));
                        arr_56 [11] [i_7] [11] = (unsigned char)143;
                    }
                    for (long long int i_18 = 0; i_18 < 19; i_18 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned char) arr_57 [i_10] [i_10] [i_10] [i_10]);
                        var_35 += ((/* implicit */short) (unsigned char)137);
                    }
                }
            } 
        } 
    }
}
