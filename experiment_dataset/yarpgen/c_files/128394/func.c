/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128394
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
    var_15 = ((/* implicit */int) var_11);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-23639)), (arr_2 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0]))))) : (((int) var_6))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_17 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_3] [i_2] [i_1] [i_0] [i_0] [i_0]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_3]))) | (arr_6 [i_3] [i_3] [i_2 - 2] [i_3]))))))));
                        arr_10 [i_1] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 + 1] [i_0])) / (((/* implicit */int) (short)23638))));
                        arr_11 [i_0] [i_0] [i_2 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) (+(max((3758096384U), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (signed char)12)))))))));
                    }
                } 
            } 
            var_18 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [(short)14])) | (((/* implicit */int) arr_8 [i_1] [i_1] [(unsigned short)8] [i_1]))));
        }
        for (int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) (~(((arr_5 [i_4] [i_4] [i_4] [i_0]) ? (((/* implicit */int) (unsigned short)61489)) : (((/* implicit */int) ((_Bool) var_2)))))));
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_5))));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-23639)) > (((/* implicit */int) max((arr_9 [i_0] [i_4] [i_4] [i_0] [i_0] [i_4]), (((/* implicit */unsigned char) (_Bool)1))))))))));
        }
    }
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_7] [i_8] [(unsigned char)4])) ? (((((17592186044416LL) >> (((var_5) - (13608316384370425601ULL))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12)))))))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)17531))))))))));
                        var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-13))));
                        arr_26 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1340316713)) ? (((/* implicit */int) (short)23628)) : (((/* implicit */int) (short)-23639))));
                    }
                    for (int i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        var_24 ^= ((/* implicit */short) (-(-392227569)));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (int i_10 = 4; i_10 < 16; i_10 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4983462522716740266LL)) || (((/* implicit */_Bool) arr_18 [i_10 - 2] [i_6]))));
                            arr_32 [i_7] [i_6] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_10 - 4] [i_10 + 1] [i_10 - 3]))));
                            arr_33 [i_5] [i_6] [i_7] [i_5] [i_10 - 2] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [6] [i_10 - 1] [i_7] [i_10 + 1]))));
                        }
                        for (short i_11 = 1; i_11 < 14; i_11 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_34 [i_11] [i_11 + 2] [i_11 + 1] [i_11] [i_11 + 1])) * (((/* implicit */int) (!(arr_7 [(unsigned short)2] [i_7] [i_7] [(unsigned short)2])))))) >= ((~(((/* implicit */int) arr_28 [i_5] [i_11 + 1] [i_7] [i_9] [i_7]))))));
                            var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 9ULL)) && (((/* implicit */_Bool) var_2)))))));
                            var_28 *= ((/* implicit */unsigned int) min((max((((/* implicit */int) (unsigned short)18314)), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)23638)))))), ((-(((/* implicit */int) arr_34 [i_5] [i_5] [i_11 + 2] [i_6] [i_11]))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 17; i_12 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */long long int) (+(4294967293U)));
                            arr_39 [i_5] [i_7] [i_7] [i_5] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1073741824)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_5] [i_6] [11])) && (var_1)))) : (((/* implicit */int) arr_20 [(unsigned char)6] [i_6] [i_6]))));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((unsigned short) arr_16 [i_5])))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 17; i_13 += 4) /* same iter space */
                        {
                            var_31 -= ((/* implicit */_Bool) (((-(arr_36 [i_5]))) + (((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_13] [i_9] [i_6] [i_5]))) % (arr_36 [i_13])))));
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) min(((unsigned short)21374), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (short)-23650))))))))))));
                            var_33 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_17 [i_5] [i_5])) != (((/* implicit */int) arr_17 [i_5] [i_5]))))), (((((/* implicit */_Bool) (short)-23639)) ? (((/* implicit */int) arr_17 [i_5] [i_5])) : (((/* implicit */int) (_Bool)1))))));
                            var_34 ^= ((/* implicit */long long int) (unsigned char)145);
                        }
                    }
                    var_35 = ((/* implicit */_Bool) min((var_35), ((!(((/* implicit */_Bool) ((arr_40 [i_5]) ? (((/* implicit */int) arr_40 [i_5])) : (((/* implicit */int) arr_40 [i_5])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 1; i_14 < 15; i_14 += 2) 
                    {
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_36 *= ((/* implicit */unsigned char) min((((arr_30 [i_5] [i_6] [i_7] [i_6] [i_15 - 1]) - (((/* implicit */int) (signed char)37)))), (((/* implicit */int) arr_40 [i_5]))));
                                arr_49 [i_5] [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) (short)1775))));
                                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((short) ((signed char) (signed char)-52))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_38 -= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_6 [i_5] [i_5] [i_5] [i_5])))))) != (((((((/* implicit */int) (short)-2091)) + (2147483647))) << (((((((/* implicit */int) (signed char)-83)) + (113))) - (30)))))));
        arr_50 [i_5] |= ((/* implicit */signed char) arr_40 [i_5]);
    }
    /* vectorizable */
    for (unsigned char i_16 = 0; i_16 < 17; i_16 += 2) /* same iter space */
    {
        var_39 -= ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)18320)))) ? (((((/* implicit */_Bool) (signed char)-40)) ? (arr_1 [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_16] [i_16] [i_16] [i_16]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)713)))));
        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((int) (unsigned char)85)))));
        arr_54 [i_16] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)186))));
        var_41 = ((/* implicit */unsigned char) (_Bool)1);
    }
    var_42 = ((/* implicit */_Bool) -325515541);
}
