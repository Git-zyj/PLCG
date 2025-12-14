/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163786
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (short i_4 = 1; i_4 < 11; i_4 += 2) /* same iter space */
                            {
                                var_16 -= ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_4 [i_3] [i_3] [i_2])) : (((/* implicit */int) var_13))))))));
                                var_17 ^= ((/* implicit */signed char) (!(arr_10 [4] [i_1] [i_2 + 2] [i_3] [i_4])));
                            }
                            /* vectorizable */
                            for (short i_5 = 1; i_5 < 11; i_5 += 2) /* same iter space */
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_15))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_11 [i_0] [i_2 - 1] [i_0] [i_0] [i_0])))));
                                var_19 |= ((/* implicit */unsigned short) (+(((/* implicit */int) var_15))));
                                arr_16 [i_0] [i_0] [i_2 - 1] [i_3] [i_3] [i_5] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [i_0] [11] [i_0] [i_2] [i_3] [11]))))) ? (((((/* implicit */_Bool) arr_1 [(signed char)12])) ? (arr_7 [i_0] [i_1] [i_2 + 2] [i_3] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [9U] [9U] [(_Bool)1] [(_Bool)1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_2 [i_1] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                                var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5] [i_1] [i_5] [4] [(_Bool)1]))) : (arr_7 [(unsigned char)11] [i_1] [i_2] [i_3] [i_3])))) ? (((((/* implicit */_Bool) var_9)) ? (arr_2 [i_5] [i_5 + 2] [i_5 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_5])))))));
                            }
                            for (short i_6 = 1; i_6 < 11; i_6 += 2) /* same iter space */
                            {
                                var_21 = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2 - 1] [i_3]);
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(var_13))))));
                            }
                            arr_19 [i_0] [i_2 + 2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_7 = 4; i_7 < 13; i_7 += 2) 
                {
                    for (short i_8 = 2; i_8 < 13; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_27 [13U] [i_7 + 1] [i_8 - 2] [i_9]))))));
                                var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_0]))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        for (unsigned short i_12 = 3; i_12 < 10; i_12 += 2) 
                        {
                            {
                                arr_35 [i_0] [i_10] [(short)11] [i_0] [3] = ((/* implicit */short) (~(arr_2 [i_0] [i_0] [(_Bool)1])));
                                var_25 = ((/* implicit */long long int) var_10);
                                var_26 = ((/* implicit */unsigned short) ((_Bool) (!(min((arr_14 [i_0] [i_0] [2] [i_11] [i_0]), (var_0))))));
                                var_27 ^= ((/* implicit */unsigned char) ((long long int) var_6));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_39 [(_Bool)1] [i_1] [i_10] [i_10] = ((/* implicit */_Bool) var_12);
                        var_28 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) var_13)));
                        arr_40 [i_0] [(short)11] [i_0] [i_10] = max((((/* implicit */long long int) ((var_15) ? ((+(((/* implicit */int) arr_4 [i_0] [i_10] [i_13])))) : (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [(unsigned short)0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((arr_22 [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [i_10] [i_1] [i_1] [i_1] [i_10] [i_1]))))) : (min((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_13])), (arr_0 [i_13]))))));
                    }
                    for (unsigned long long int i_14 = 1; i_14 < 11; i_14 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned int) (~((-(((((/* implicit */_Bool) arr_27 [i_0] [1LL] [i_10] [i_14])) ? (arr_30 [(_Bool)1] [i_10] [i_1]) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))));
                        var_30 = ((/* implicit */unsigned int) (~((+(((((/* implicit */_Bool) arr_36 [i_14 - 1] [i_14 + 2] [i_10] [i_10] [(unsigned char)5] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1))))))));
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_1] [i_14] [i_10] [i_1] [i_0]))))) ? ((+(((/* implicit */int) var_4)))) : ((+(((/* implicit */int) arr_10 [(_Bool)1] [i_1] [i_10] [(_Bool)1] [i_14]))))))) : (max(((~(arr_6 [i_0] [i_1] [(unsigned short)8] [(unsigned char)7]))), (((/* implicit */long long int) arr_22 [i_0] [i_1] [i_10]))))));
                    }
                    arr_45 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17040)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)48495))))) ? (((((/* implicit */_Bool) (short)-24177)) ? (((/* implicit */int) (unsigned short)17035)) : (((/* implicit */int) (unsigned short)48491)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_1] [(signed char)3] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 2; i_15 < 13; i_15 += 1) 
                    {
                        for (short i_16 = 0; i_16 < 14; i_16 += 2) 
                        {
                            {
                                arr_54 [i_10] = ((/* implicit */unsigned char) ((var_13) ? (((/* implicit */int) arr_43 [i_0] [i_0] [i_10] [i_10])) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                                var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)48491)) ? (((/* implicit */int) (short)-19126)) : (((/* implicit */int) (unsigned short)48468)))))))));
                                var_33 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_34 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned short) var_4))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))) : ((-(((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) (~(var_14)))) ? (max((((/* implicit */unsigned long long int) var_10)), (var_3))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))))));
}
