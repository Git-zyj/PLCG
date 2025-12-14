/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162121
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)124)) >= (((/* implicit */int) ((((/* implicit */int) (unsigned short)45594)) >= (((/* implicit */int) (short)16383)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((short) arr_1 [(unsigned char)22] [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                arr_8 [(unsigned char)2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */int) var_7)) ^ (((/* implicit */int) (short)-16371)))) + (2147483647))) << (((((((/* implicit */int) (signed char)59)) >> (((/* implicit */int) (_Bool)0)))) - (59)))));
                /* LoopNest 2 */
                for (short i_3 = 1; i_3 < 23; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        {
                            arr_14 [i_2] [i_1] [(signed char)19] = ((/* implicit */short) ((((/* implicit */int) max((((((/* implicit */_Bool) arr_3 [i_3] [i_3])) && ((_Bool)1))), ((!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))) ^ (((/* implicit */int) max((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)0)))), (((_Bool) (short)32754)))))));
                            arr_15 [i_0] [i_0] [i_1] [(_Bool)1] [i_3] [i_4] [i_4] = ((/* implicit */int) var_8);
                        }
                    } 
                } 
            }
            for (int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                /* LoopSeq 4 */
                for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    arr_22 [i_0] [i_0] [i_5] [i_6] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_1] [i_5]))));
                    arr_23 [i_0] [i_1] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)12)), ((short)16383)))) * (((/* implicit */int) min((var_0), (((/* implicit */signed char) (_Bool)1)))))));
                    arr_24 [i_6] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_1);
                }
                for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    arr_29 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) (-(((((/* implicit */int) arr_18 [i_0] [i_0] [(unsigned char)7])) * (((/* implicit */int) arr_18 [i_0] [i_1 - 2] [i_5]))))));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        arr_32 [i_8] [i_8] [i_5] = min((((/* implicit */int) var_3)), ((-(((/* implicit */int) var_7)))));
                        arr_33 [i_8] [i_8] [(short)17] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) min(((short)-32755), (((/* implicit */short) var_5)))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))) : (max((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) var_2)))))));
                        arr_34 [i_8] [i_8] [i_8] [i_7] [i_8] [i_5] [i_7] = ((/* implicit */short) max((((/* implicit */int) (short)-24152)), ((~(((/* implicit */int) var_3))))));
                        arr_35 [i_8] [i_8] [i_8] [i_8] [i_1 - 1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((_Bool) arr_28 [i_0] [i_0] [(short)8] [i_7] [i_8] [i_5])))))));
                        arr_36 [i_5] [i_0] [i_1] [i_0] [i_5] [i_7] [(signed char)18] &= ((/* implicit */unsigned char) ((signed char) var_5));
                    }
                    arr_37 [(unsigned short)13] [i_1] [(_Bool)1] [i_5] [(unsigned short)13] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */signed char) (!((_Bool)1)))), (var_3))))));
                    arr_38 [i_7] [i_5] [i_1] [i_0] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_7])) ? (((/* implicit */int) (short)-24145)) : (((/* implicit */int) var_1)))) ^ (((((((/* implicit */int) (unsigned char)85)) ^ (((/* implicit */int) (short)32754)))) << (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_25 [(signed char)6] [i_1 - 1] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_16 [i_5]))))))));
                    arr_39 [i_0] [(short)23] = ((/* implicit */short) max((((((((/* implicit */int) var_6)) ^ (((/* implicit */int) (short)18089)))) == (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (arr_6 [i_0] [i_0] [(unsigned char)0])))))), ((((-(((/* implicit */int) var_0)))) == (((/* implicit */int) ((signed char) (short)-19707)))))));
                }
                for (int i_9 = 1; i_9 < 22; i_9 += 1) 
                {
                    arr_43 [i_0] [i_1] [i_5] [i_9] [i_0] = ((((/* implicit */int) arr_31 [i_9] [(signed char)13] [i_9 + 2] [i_9 + 1] [i_9])) >= (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) (short)-11557)) ? (((/* implicit */int) (short)-19707)) : (((/* implicit */int) var_9)))))));
                    arr_44 [i_1] = ((/* implicit */unsigned short) ((int) (~((~(((/* implicit */int) arr_40 [i_0] [i_0] [i_1] [i_1] [i_0])))))));
                }
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    arr_47 [i_0] [i_1 + 2] [i_5] [i_10] [i_10] = ((/* implicit */_Bool) ((signed char) (signed char)-48));
                    arr_48 [i_0] [22] [i_5] [i_10] [(signed char)11] [i_0] = ((/* implicit */_Bool) var_2);
                }
                arr_49 [i_0] |= ((/* implicit */_Bool) var_2);
            }
            for (unsigned short i_11 = 2; i_11 < 21; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (short i_12 = 2; i_12 < 21; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        {
                            arr_59 [i_11] = ((/* implicit */int) (unsigned short)65529);
                            arr_60 [i_0] [i_1] [i_11] [i_11] [i_13] |= ((/* implicit */signed char) (!((((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_1] [i_13])))) != ((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_26 [i_0] [i_12] [i_0]))))))));
                        }
                    } 
                } 
                arr_61 [i_0] [i_0] [i_1 - 2] [i_11] = ((/* implicit */signed char) var_7);
            }
            arr_62 [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((arr_51 [i_0] [i_1] [i_0] [i_0]) % (arr_3 [i_0] [i_1])))))) ? (((/* implicit */int) min((((/* implicit */short) arr_9 [(_Bool)1] [i_1 - 1] [i_1] [(_Bool)1])), ((short)-16383)))) : (((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_0)))) & (((/* implicit */int) var_8))))));
            arr_63 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_45 [i_0] [i_1] [i_1 - 2] [(unsigned short)12]), (arr_45 [i_0] [(short)11] [i_1 - 1] [i_0])))) || (((/* implicit */_Bool) arr_45 [i_0] [i_0] [i_1 - 2] [i_1]))));
        }
    }
    for (short i_14 = 0; i_14 < 11; i_14 += 1) 
    {
        arr_68 [i_14] = ((/* implicit */unsigned short) var_0);
        arr_69 [i_14] = ((unsigned char) (_Bool)1);
        arr_70 [i_14] = (((_Bool)1) ? (((/* implicit */int) var_2)) : (((((((/* implicit */int) arr_28 [i_14] [i_14] [(unsigned char)14] [i_14] [i_14] [i_14])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))));
    }
    var_11 |= ((/* implicit */signed char) ((max((((/* implicit */int) (signed char)-43)), (((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_1)) + (61))))))) & (((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0)))) << (((/* implicit */int) (_Bool)1))))));
}
