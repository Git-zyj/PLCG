/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141360
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
    var_19 = ((/* implicit */unsigned long long int) 1869186833);
    var_20 = ((/* implicit */int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) < (((/* implicit */int) ((unsigned short) var_7))))) ? (var_15) : ((-(var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                var_21 = arr_4 [i_1] [i_0];
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 8; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_2 - 1] [i_1 + 1]))));
                                arr_16 [i_0] [i_0] [i_1] [i_1] [i_2 - 1] [8ULL] [i_4] = ((/* implicit */unsigned char) arr_0 [i_0]);
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((arr_11 [i_0] [i_4] [i_4] [i_0]) ? (arr_1 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) ((((/* implicit */int) var_18)) << ((((-(((/* implicit */int) var_4)))) - (53)))));
                    var_24 = ((/* implicit */_Bool) ((int) (unsigned char)54));
                }
                for (int i_5 = 2; i_5 < 9; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        for (signed char i_7 = 1; i_7 < 7; i_7 += 1) 
                        {
                            {
                                arr_23 [i_5] [i_0] [i_5] = ((/* implicit */signed char) (~(((unsigned long long int) (~(var_13))))));
                                arr_24 [i_0] [i_5] [i_5] [i_5] [i_6] [i_7] = ((/* implicit */_Bool) var_1);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_20 [i_5 + 1] [(unsigned char)0] [i_1 + 1])) ? (arr_20 [i_5 + 1] [i_1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5 - 2] [i_5 - 2] [i_5] [i_5 + 1] [i_5] [i_1 + 1]))))), (((((/* implicit */_Bool) (unsigned char)172)) ? (16704650165640192666ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    arr_25 [i_5] = var_9;
                }
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    var_26 = ((/* implicit */_Bool) var_3);
                    var_27 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((((/* implicit */int) (signed char)127)) - (111)))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)17881))))) : (((((/* implicit */_Bool) arr_27 [i_8] [i_1 + 1] [i_1 + 1] [i_8])) ? (arr_21 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)172)) % (arr_12 [i_0] [(short)1] [i_0] [i_0])))), (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967293U))))))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)1))))))) ? ((-(((((/* implicit */_Bool) arr_14 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_0])) : (((/* implicit */int) var_1)))))) : (max((((/* implicit */int) (unsigned short)2)), (((((/* implicit */_Bool) arr_14 [i_8] [i_1 + 1] [i_8] [i_8] [i_0])) ? (((/* implicit */int) (unsigned short)1)) : (var_6)))))));
                }
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((unsigned short) arr_7 [i_1 + 1] [i_1 + 1])))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
    {
        arr_30 [i_9] = ((/* implicit */int) var_4);
        var_30 *= ((/* implicit */unsigned long long int) ((unsigned char) ((((int) var_16)) - (((/* implicit */int) (short)-13140)))));
        var_31 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4141579789531963403LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)65527))));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
    {
        var_32 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) + (((((/* implicit */int) var_18)) | (((/* implicit */int) (signed char)-111))))));
        arr_35 [i_10] [i_10] = ((/* implicit */int) ((var_13) ^ (((/* implicit */unsigned long long int) arr_34 [i_10]))));
        var_33 = ((/* implicit */int) var_0);
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 16; i_12 += 3) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_34 |= ((((/* implicit */_Bool) arr_42 [i_13] [15ULL])) ? (((/* implicit */int) arr_47 [i_12] [6LL] [i_13])) : (((((/* implicit */int) var_18)) | (arr_34 [i_13]))));
                        arr_49 [i_11] [i_12] [i_13] [i_13] [i_12] = ((/* implicit */long long int) arr_34 [i_11]);
                    }
                    arr_50 [i_12] [i_12] = ((/* implicit */signed char) ((arr_41 [i_12] [i_13]) ^ (((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_29 [i_11])) - (82)))))));
                    var_35 = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) ((((/* implicit */int) arr_33 [i_11] [i_13])) == (((/* implicit */int) arr_40 [i_11] [i_12] [i_12])))))));
                }
            } 
        } 
        var_36 = ((/* implicit */unsigned long long int) ((arr_36 [i_11]) % (((/* implicit */int) arr_42 [i_11] [i_11]))));
    }
}
