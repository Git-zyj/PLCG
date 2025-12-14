/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185147
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
    var_19 = ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            arr_4 [(_Bool)1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) != (((/* implicit */int) var_18)))), (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) (unsigned short)63673)))))))));
            arr_5 [i_0] = max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [(_Bool)1]))))), (max((var_14), (((/* implicit */unsigned char) var_10)))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            var_20 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 1; i_3 < 24; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    {
                        var_21 = ((/* implicit */signed char) ((unsigned short) arr_8 [i_0 - 1] [i_3 - 1] [i_3]));
                        var_22 = ((/* implicit */unsigned int) arr_3 [i_3 + 1] [i_3 + 1] [i_3]);
                        var_23 = ((/* implicit */unsigned char) ((unsigned short) ((signed char) var_11)));
                        var_24 *= ((/* implicit */unsigned short) (_Bool)1);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_5] [(unsigned short)12] [i_0 - 1] [(unsigned short)12] [i_0 - 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_7 [21U] [21U])))))));
                arr_16 [i_0] [i_0 - 2] = ((/* implicit */signed char) arr_7 [i_5] [i_5]);
                arr_17 [i_0 - 2] [i_0 - 2] [i_2] [i_5] = ((/* implicit */signed char) var_6);
                /* LoopSeq 1 */
                for (signed char i_6 = 1; i_6 < 24; i_6 += 3) 
                {
                    var_26 = ((/* implicit */unsigned int) var_2);
                    arr_20 [i_6] [i_2] [i_6] [(short)4] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)108))));
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_13)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)199)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_14 [i_0])))))));
                    arr_21 [i_0 - 2] [(signed char)3] [(signed char)5] [i_6] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_18 [i_0] [(unsigned char)8] [(unsigned short)1] [i_5] [(signed char)1] [(_Bool)1])) | (((/* implicit */int) var_2)))));
                    var_28 = ((/* implicit */unsigned char) ((arr_13 [i_6] [i_6] [i_5] [i_0 - 2] [i_6]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_0 - 1])))));
                }
                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_0 + 1] [i_5])))))));
            }
            for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_8 = 2; i_8 < 24; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        var_30 &= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_2] [i_7] [i_9])))))));
                        var_31 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        arr_33 [(unsigned short)7] [i_0] [i_7] [i_7] [i_8] [i_10] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_12 [i_0 - 2] [i_0 - 1] [i_0] [i_7] [i_0 + 1]))));
                        arr_34 [i_7] [i_8] [i_7] [i_7] [i_2] [(unsigned short)10] = ((/* implicit */unsigned short) ((signed char) var_9));
                        arr_35 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_7] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (unsigned short)65024))))));
                        var_32 &= ((/* implicit */unsigned short) arr_8 [i_0 - 2] [i_2] [i_8]);
                    }
                    var_33 = ((/* implicit */unsigned int) var_3);
                    arr_36 [i_0] [i_7] [i_8] = ((/* implicit */unsigned int) var_14);
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) arr_1 [i_0] [i_2]))));
                }
                for (signed char i_11 = 1; i_11 < 24; i_11 += 3) 
                {
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : ((~(((/* implicit */int) var_2))))));
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) arr_23 [i_11] [i_7] [i_2]))));
                }
                var_37 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_37 [i_0] [i_0] [i_2])) * (((/* implicit */int) arr_22 [i_7])))) + (((/* implicit */int) arr_7 [i_2 + 1] [i_0]))));
                arr_39 [i_7] [i_2] [(signed char)9] [i_7] = ((/* implicit */signed char) var_7);
                arr_40 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_2] [i_0])) ? (((/* implicit */int) arr_18 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0])))))));
            }
            arr_41 [i_0 - 2] &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_24 [i_0])) >= (((/* implicit */int) arr_11 [i_0] [24U] [i_0]))))) * ((+(((/* implicit */int) var_2))))));
        }
        for (unsigned char i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            var_38 -= ((/* implicit */signed char) max((max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_16))))), (var_11))), (var_3)));
            arr_45 [4U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_12])) + (((/* implicit */int) arr_32 [i_0 + 1] [i_0 - 1] [i_0] [i_0]))))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((/* implicit */int) ((unsigned char) var_13)))));
        }
        var_39 += ((/* implicit */unsigned char) var_17);
    }
    var_40 = ((/* implicit */short) var_12);
    var_41 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (signed char)-13))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))), (((/* implicit */int) max((min((var_4), (((/* implicit */unsigned short) var_16)))), (var_9))))));
}
