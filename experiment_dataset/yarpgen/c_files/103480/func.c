/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103480
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_6 [i_0] [i_1 - 3])) * (((/* implicit */int) var_2)))) % (((/* implicit */int) ((signed char) max(((signed char)(-127 - 1)), ((signed char)-9))))))))));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] |= ((/* implicit */_Bool) (unsigned short)0);
                                var_13 = ((/* implicit */short) ((((unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        {
                            arr_17 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1041454247)) || (((/* implicit */_Bool) (unsigned char)243))));
                            arr_18 [i_0] [i_1 - 2] [i_0] [i_0] [i_6] [i_0] = min((arr_16 [i_6] [i_5] [i_5] [i_6] [i_5] [i_6]), (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) max((var_7), ((unsigned char)248)))) : (((/* implicit */int) ((12036773029509018475ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))))));
                            var_14 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)-31), (((/* implicit */signed char) (_Bool)0))))) ? (((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)65)))) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) max((arr_5 [i_1 - 1] [i_6] [i_6] [i_1]), (arr_5 [i_1 - 2] [i_6] [i_6] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_6])) > (((/* implicit */int) arr_1 [i_6])))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_7 = 4; i_7 < 14; i_7 += 4) 
                            {
                                var_15 = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0]))));
                                var_16 = ((/* implicit */signed char) -684522826);
                                arr_21 [i_0] [(signed char)5] [(unsigned char)12] [i_0] [i_7] [i_7] [i_0] = ((/* implicit */short) ((signed char) (signed char)61));
                            }
                            for (unsigned char i_8 = 1; i_8 < 16; i_8 += 3) 
                            {
                                arr_26 [(unsigned short)14] [i_0] [i_6] [(short)14] [(short)14] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (_Bool)1));
                                arr_27 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) 1730319732)), (4294967290U))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_9 = 0; i_9 < 13; i_9 += 3) 
    {
        var_17 = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_9 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) && (((/* implicit */_Bool) (unsigned short)63775))))));
        arr_30 [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) ? (((-684522814) % (arr_4 [i_9]))) : (((/* implicit */int) min((arr_8 [i_9] [i_9] [i_9] [i_9] [(unsigned char)11]), (((/* implicit */short) var_6))))))))));
    }
    /* vectorizable */
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        arr_33 [i_10] = ((/* implicit */unsigned int) ((1296381794U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_10 - 1])))));
        arr_34 [i_10] [i_10] = ((/* implicit */signed char) ((int) arr_12 [(signed char)16] [i_10] [i_10 - 1] [(signed char)16]));
        arr_35 [i_10] [(unsigned short)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) (unsigned char)20))));
        arr_36 [(unsigned char)6] = (+((~(4416713107975230972ULL))));
        /* LoopSeq 1 */
        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            arr_39 [i_11] [i_11] = ((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_11] [i_11] [i_11] [(unsigned short)13] [i_10]))));
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (((!((_Bool)1))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (_Bool)1))))))))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_10 - 1])) | (((/* implicit */int) arr_23 [i_10 - 1]))));
        }
    }
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)128)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) var_4)))) : ((+(((/* implicit */int) var_7)))))))));
}
