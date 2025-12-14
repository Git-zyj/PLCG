/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149452
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
    var_17 = ((/* implicit */unsigned int) ((((((((/* implicit */int) (signed char)127)) - (((/* implicit */int) (_Bool)1)))) - (((var_4) ? (((/* implicit */int) var_0)) : (2147483647))))) / (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))) < (((/* implicit */int) var_10)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) ((_Bool) ((var_14) ? (((/* implicit */int) var_8)) : (-3))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (arr_0 [i_0] [(signed char)0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [(unsigned char)3] [(unsigned char)3]))))))));
    }
    for (unsigned char i_1 = 3; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_1 + 1])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            arr_6 [(unsigned char)0] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1 - 3])) ? (arr_4 [i_1 - 3]) : (arr_4 [i_1 - 3])));
            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) << (((((/* implicit */int) var_3)) + (46)))));
            var_23 += ((/* implicit */unsigned short) var_1);
            arr_7 [i_2] = ((/* implicit */signed char) ((unsigned char) (unsigned short)0));
        }
        for (short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)18241)) : (((/* implicit */int) (unsigned short)18250))));
            arr_12 [i_3] [(unsigned short)3] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_3 [i_1 - 3])), (var_1))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_4 [i_1]) - (((/* implicit */int) var_0))))))))));
            var_25 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_16)) : (arr_4 [i_1 - 3])))));
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                arr_15 [i_4] [i_4] = ((/* implicit */_Bool) ((max((0), (((/* implicit */int) max((var_0), ((unsigned short)65519)))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_4] [i_1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4])))))) ? (((((/* implicit */int) var_14)) | (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) var_12)))) - (65529)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) + (((/* implicit */int) ((arr_4 [i_1]) >= (((/* implicit */int) (unsigned short)18248)))))));
                    var_27 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (unsigned short)25560)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) 2147483636)) || (((/* implicit */_Bool) var_2))))) - (1)))));
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_14 [i_1] [i_4] [i_1 - 2]))));
                }
                var_29 = ((/* implicit */short) max((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)18241)));
            }
            for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                var_30 = ((/* implicit */unsigned short) var_16);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_7 = 2; i_7 < 22; i_7 += 1) 
                {
                    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)0)) > (((/* implicit */int) (_Bool)1)))))) : (10U))))));
                    var_32 = ((/* implicit */signed char) ((unsigned char) (~(var_1))));
                    arr_24 [i_1 + 1] [i_1 + 1] [i_6] [i_6] = ((/* implicit */_Bool) var_13);
                    arr_25 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_3]))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_20 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_7 - 1]))));
                    var_33 = ((/* implicit */unsigned short) var_12);
                }
                arr_26 [i_6] [i_1] [i_1] [i_6] = ((_Bool) max((arr_21 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_3]), (arr_21 [i_1 + 1] [i_1 - 3] [(short)0] [i_1 - 3])));
            }
            arr_27 [i_1] [i_3] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)18224)) ? (((((/* implicit */_Bool) (~(var_5)))) ? (((var_7) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_16)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)47304)) : (((/* implicit */int) var_15)))))) : (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_11)))))));
        }
        /* LoopSeq 3 */
        for (short i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 21; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_38 [i_1] [i_11] = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_20 [i_11] [i_11] [i_11] [i_10])) < (((/* implicit */int) var_7))))));
                            arr_39 [i_11] [i_11] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) (signed char)-121)))));
                        }
                    } 
                } 
                arr_40 [(signed char)14] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) / ((+(-2147483647)))));
                arr_41 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (58128146U))) == (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)0))))));
            }
            arr_42 [i_1] = ((/* implicit */short) max(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1))));
            arr_43 [i_8] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_10 [i_1 - 3]))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) -2147483636)) : (10U))))));
            arr_44 [i_8] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (unsigned char)0)))));
            arr_45 [i_1 - 1] &= ((/* implicit */unsigned int) var_11);
        }
        for (short i_12 = 3; i_12 < 22; i_12 += 4) 
        {
            arr_49 [(short)5] [i_12 - 2] [i_12] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max(((unsigned short)18243), (((/* implicit */unsigned short) var_4))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)65514)))) : (((/* implicit */int) var_12)))), (((/* implicit */int) var_11))));
            arr_50 [i_12 + 1] [i_12] [i_1 - 3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_12] [i_12])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) ((unsigned short) (_Bool)1))))), ((((~(((/* implicit */int) var_9)))) >> (((((/* implicit */int) var_10)) - (63654)))))));
        }
        /* vectorizable */
        for (signed char i_13 = 1; i_13 < 21; i_13 += 2) 
        {
            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) var_3))));
            arr_54 [i_13 + 2] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))));
        }
    }
    for (unsigned char i_14 = 3; i_14 < 22; i_14 += 1) /* same iter space */
    {
        arr_57 [(_Bool)1] [i_14 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_14] [i_14] [i_14] [i_14 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((arr_28 [(unsigned char)16] [i_14 - 1]) && (((/* implicit */_Bool) max((arr_52 [i_14 + 1] [i_14 + 1]), (((/* implicit */unsigned short) (unsigned char)0))))))))));
        arr_58 [i_14] &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) var_6)))));
    }
    var_35 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (signed char i_16 = 1; i_16 < 14; i_16 += 4) 
        {
            {
                arr_63 [i_16] = ((/* implicit */int) (signed char)-104);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_17 = 0; i_17 < 17; i_17 += 4) 
                {
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_15])) ? (((/* implicit */int) ((signed char) arr_21 [i_15] [(_Bool)1] [i_15] [i_15]))) : (((/* implicit */int) (!((_Bool)1)))))))));
                    arr_68 [i_15] [i_15] [i_17] = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-8461))))) ? (((/* implicit */int) ((signed char) var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))));
                    var_37 = ((arr_31 [i_16] [i_16 - 1] [i_16 - 1] [i_15]) ? (((/* implicit */int) arr_62 [i_16 + 2] [i_16 + 2])) : (((/* implicit */int) ((((/* implicit */int) var_13)) > (arr_22 [i_15] [i_16] [i_17] [i_17])))));
                }
            }
        } 
    } 
}
