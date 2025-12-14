/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151835
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_11))))))) / (((((((/* implicit */long long int) ((/* implicit */int) var_4))) + (var_2))) << (((var_6) - (7513271769918974306ULL)))))));
    var_21 = ((/* implicit */long long int) max((var_1), (((((/* implicit */int) var_19)) >= (((/* implicit */int) ((((/* implicit */int) var_16)) != (((/* implicit */int) var_11)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 8; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */int) var_15)) << (((((/* implicit */int) (unsigned char)126)) - (115)))))))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((signed char) arr_2 [i_1] [7ULL])))));
                        arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)62)) ? (1238451655764710302ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63))) : (3071427549U))))));
                    }
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((_Bool) ((_Bool) 1223539773U)))), (arr_1 [i_1])));
                        var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) (-(var_12)))))));
                        var_25 = ((/* implicit */unsigned int) var_3);
                        arr_14 [i_0] [i_1] [i_2 + 3] [i_4] [i_1] [i_4] = ((/* implicit */signed char) ((((((arr_5 [i_0 - 1] [i_1] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5827))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) - (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((int) (signed char)-78))) - (((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 1] [i_1] [i_0 + 1] [i_0 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_12 [i_0 - 2] [i_0 - 1] [i_1] [(short)4] [i_0 - 1] [i_4]))))))));
                    }
                    for (unsigned char i_5 = 4; i_5 < 10; i_5 += 2) 
                    {
                        var_26 |= ((((/* implicit */long long int) ((/* implicit */int) var_19))) * (((long long int) ((((/* implicit */int) (signed char)43)) & (arr_15 [i_0 - 2] [i_1] [i_5 - 1])))));
                        arr_17 [i_0] [i_1] [i_1] [0LL] = ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2 + 2]);
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_5] [i_5 + 1] [i_5] [i_5 - 1] [i_5 + 1] [(unsigned char)6])) ? (((/* implicit */int) arr_8 [i_5] [i_5 + 1] [i_5 + 1] [i_5 - 2])) : ((+(((/* implicit */int) var_0))))));
                        arr_18 [i_5] [i_1] [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((long long int) var_12));
                    }
                }
            } 
        } 
        var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 6671459061444838830LL)) ? (((/* implicit */int) var_9)) : (1030209212)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))))) : (arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]))) % (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0 - 2] [i_0 + 1])))))));
        var_29 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)62)), (3970481679U)))) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0])) : (arr_13 [i_0 - 2] [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0])))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 1; i_7 < 9; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    {
                        arr_27 [i_0] [i_0] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [(signed char)10] [i_6] [i_7] [i_8] [(signed char)10])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_13 [i_0] [i_0] [i_0] [i_6] [i_7] [i_8])))) || ((((_Bool)0) || ((_Bool)1)))))));
                        var_30 = ((/* implicit */long long int) arr_0 [i_6]);
                    }
                } 
            } 
        } 
        arr_28 [i_0 - 2] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_1 [6ULL])) ? (((/* implicit */long long int) var_18)) : (arr_1 [i_0 - 2])))));
    }
    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3258683303U)) ? (-236347983) : (((/* implicit */int) (short)-4034))));
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_32 [i_10])) + (2147483647))) >> (((((/* implicit */int) var_11)) - (45295)))))) ? (((/* implicit */int) ((_Bool) var_7))) : (((/* implicit */int) arr_32 [i_9]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-14)) ? (6671459061444838830LL) : (0LL)))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (4077367266U))) : (((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7054))) : (arr_31 [i_10])))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                var_33 = ((/* implicit */_Bool) arr_30 [i_10]);
                var_34 |= ((/* implicit */signed char) arr_35 [i_11] [i_10] [i_10] [(_Bool)1]);
            }
            for (short i_12 = 1; i_12 < 17; i_12 += 1) 
            {
                var_35 = (-(((/* implicit */int) max((arr_34 [i_9] [i_12 + 2] [i_12 - 1] [i_12 + 2]), (((unsigned short) arr_34 [i_12] [(unsigned char)3] [i_10] [i_9]))))));
                /* LoopNest 2 */
                for (unsigned short i_13 = 2; i_13 < 18; i_13 += 3) 
                {
                    for (unsigned char i_14 = 3; i_14 < 17; i_14 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned long long int) ((((_Bool) arr_40 [i_12 + 2] [i_13 + 1] [i_14 + 3])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))));
                            arr_43 [i_9] [i_14] = ((/* implicit */short) ((((/* implicit */int) ((signed char) ((arr_38 [17] [i_14] [i_14]) ? (2603806217U) : (2603806220U))))) >= (var_18)));
                        }
                    } 
                } 
            }
            arr_44 [i_10] = ((/* implicit */short) var_14);
        }
        /* vectorizable */
        for (long long int i_15 = 0; i_15 < 20; i_15 += 1) 
        {
            arr_48 [i_15] = (+(arr_40 [i_15] [i_15] [i_15]));
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((2387961013U) | (1907006271U)))) ? (((/* implicit */int) var_19)) : (((((/* implicit */_Bool) arr_32 [i_15])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_9))))));
            /* LoopNest 3 */
            for (unsigned char i_16 = 2; i_16 < 17; i_16 += 1) 
            {
                for (unsigned char i_17 = 0; i_17 < 20; i_17 += 3) 
                {
                    for (int i_18 = 0; i_18 < 20; i_18 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4077367246U)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (6671459061444838830LL)))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)88))))) : (0)));
                            var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_51 [i_17] [i_15] [i_16 + 3])) ? (arr_51 [i_9] [i_16] [i_16 + 3]) : (((/* implicit */unsigned int) arr_52 [i_9] [i_17] [i_16 + 3]))));
                        }
                    } 
                } 
            } 
            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_52 [i_9] [i_15] [i_15])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1691161079U))))) : (((/* implicit */int) arr_38 [i_9] [i_9] [i_9]))));
        }
        /* LoopNest 2 */
        for (unsigned int i_19 = 1; i_19 < 17; i_19 += 1) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                {
                    var_41 = ((/* implicit */long long int) max((2387961041U), (1265407289U)));
                    arr_63 [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned short) var_11))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) < (2362560084U))))))) ? (((((var_12) % (((/* implicit */long long int) arr_41 [i_9] [i_9] [i_9] [i_9] [i_9] [i_20])))) - (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3071427549U)) ? (((/* implicit */int) (!(var_1)))) : (((/* implicit */int) arr_60 [i_9] [i_19 + 3] [i_20] [i_9])))))));
                }
            } 
        } 
        var_42 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) var_17))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) arr_36 [i_9] [i_9] [(signed char)2] [(unsigned short)1])) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_61 [i_9] [i_9] [i_9])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)0))))));
    }
}
