/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112818
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-339)) ? (((/* implicit */int) (unsigned short)30430)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-99))) : (arr_1 [7])))))) ? (((((/* implicit */_Bool) (-(3ULL)))) ? (((((/* implicit */_Bool) (short)11710)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (15914539390948860663ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 2147483647ULL)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) (-(arr_1 [i_0])));
                    var_20 -= ((4) <= (522372650));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_3 = 3; i_3 < 20; i_3 += 4) 
        {
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (((-(max((2456731133U), (((/* implicit */unsigned int) (signed char)66)))))) ^ (min((4294967291U), (((/* implicit */unsigned int) 471964912)))))))));
            var_22 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(min((876126900U), (((/* implicit */unsigned int) (_Bool)1))))))) >= (((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1))))))));
            /* LoopNest 2 */
            for (signed char i_4 = 1; i_4 < 21; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_4 - 1] [i_4 - 1] [i_4 + 1]))))) ? (var_8) : (((/* implicit */int) ((_Bool) var_2)))));
                        arr_18 [i_0] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */int) var_14)), (((int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (var_6))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    for (signed char i_8 = 2; i_8 < 22; i_8 += 3) 
                    {
                        {
                            arr_27 [i_0] [i_7] [i_0] [i_7] [i_3] = ((/* implicit */unsigned long long int) (~(2093295843)));
                            arr_28 [i_0] [i_3] [i_6] [i_7] [i_3] [i_7] [i_6] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) var_14)))), (((/* implicit */int) (!(((/* implicit */_Bool) -7365834064623827859LL)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) var_0);
                        arr_34 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 17048070251950709823ULL)) ? (2147483647) : (((/* implicit */int) (_Bool)1))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) max((var_11), (arr_19 [i_0] [i_0] [i_0] [i_0])))) ^ (((/* implicit */int) arr_19 [i_0] [i_3 - 1] [i_9] [i_10]))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 12; i_11 += 3) 
    {
        arr_37 [i_11] = ((/* implicit */long long int) ((((/* implicit */int) var_10)) == (((/* implicit */int) arr_21 [i_11] [i_11] [i_11]))));
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_16))));
        arr_38 [i_11] = ((/* implicit */unsigned long long int) ((int) -5595157195862871010LL));
    }
    for (long long int i_12 = 0; i_12 < 18; i_12 += 3) 
    {
        var_27 = ((((/* implicit */_Bool) max((var_13), (((/* implicit */int) arr_13 [i_12] [i_12] [i_12]))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (arr_26 [(unsigned short)13] [(unsigned short)13] [i_12] [i_12] [(unsigned short)13] [i_12])))) : (((unsigned int) -471964912)));
        var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_41 [i_12]), (arr_41 [i_12])))) ? ((-(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) ((short) var_4))) ? (((((/* implicit */int) arr_32 [16] [i_12] [i_12] [i_12] [i_12])) * (((/* implicit */int) (unsigned char)14)))) : (((/* implicit */int) ((signed char) var_7)))))));
        var_29 = arr_8 [i_12] [i_12];
    }
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) (short)16702))));
    var_31 = ((/* implicit */short) (-(((unsigned long long int) var_16))));
    /* LoopSeq 1 */
    for (long long int i_13 = 2; i_13 < 18; i_13 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (long long int i_15 = 0; i_15 < 21; i_15 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        for (int i_17 = 1; i_17 < 20; i_17 += 3) 
                        {
                            {
                                var_32 = ((((/* implicit */_Bool) ((unsigned short) ((unsigned int) arr_7 [i_14])))) ? (((unsigned int) arr_16 [i_13 - 2] [i_17 - 1] [i_17 + 1] [i_17 - 1])) : (((/* implicit */unsigned int) ((var_11) ? (((/* implicit */int) arr_22 [i_13] [i_13 + 1] [i_13] [i_15])) : ((-(((/* implicit */int) (unsigned char)19))))))));
                                var_33 = ((/* implicit */unsigned char) max((max((((/* implicit */int) ((unsigned short) 398523810U))), (((((/* implicit */_Bool) 2147483647U)) ? (((/* implicit */int) arr_43 [i_14] [i_14])) : (((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)242))))) ? ((-(var_7))) : (((/* implicit */int) arr_17 [i_13 + 2] [22] [i_15]))))));
                            }
                        } 
                    } 
                    arr_53 [i_13] = ((/* implicit */_Bool) ((long long int) var_12));
                    /* LoopSeq 3 */
                    for (signed char i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        var_34 = ((/* implicit */short) ((unsigned short) var_8));
                        var_35 += ((/* implicit */unsigned short) min((((/* implicit */short) arr_33 [i_13] [i_13 - 1] [i_13] [i_13 - 1])), (max((((/* implicit */short) (unsigned char)168)), (min(((short)7391), (((/* implicit */short) (_Bool)1))))))));
                    }
                    for (unsigned char i_19 = 2; i_19 < 20; i_19 += 1) /* same iter space */
                    {
                        arr_61 [i_19] [i_14] [i_15] [i_15] [i_19 + 1] [i_19] = ((/* implicit */short) (-(((/* implicit */int) arr_46 [i_13 + 2] [i_13 - 1] [i_19 - 1]))));
                        var_36 ^= ((/* implicit */unsigned long long int) (-(max((((((/* implicit */_Bool) arr_44 [i_14])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_2))))));
                    }
                    for (unsigned char i_20 = 2; i_20 < 20; i_20 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)0)), (((int) (short)4))));
                        arr_64 [i_14] [(signed char)3] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535))))), (((max((arr_25 [i_15]), (((/* implicit */unsigned long long int) arr_16 [i_13] [i_13] [i_13] [(unsigned char)19])))) >> (((((/* implicit */int) max(((short)32759), (((/* implicit */short) var_5))))) - (32729)))))));
                        var_38 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_8)) : (17675388749493266839ULL))), (((/* implicit */unsigned long long int) var_14))));
                    }
                }
            } 
        } 
        var_39 = ((/* implicit */unsigned long long int) var_9);
        var_40 = ((/* implicit */_Bool) 471964911);
    }
    var_41 = ((/* implicit */_Bool) var_9);
}
