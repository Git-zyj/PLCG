/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132886
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
    var_18 = ((/* implicit */signed char) 0U);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) - (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
                    var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_9)))) ? (((((/* implicit */_Bool) min((-1972335423), (((/* implicit */int) (short)(-32767 - 1)))))) ? (3451741628U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19466)))));
                    var_20 = (signed char)-76;
                    var_21 = ((((_Bool) arr_6 [i_1])) ? (11U) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)77)) ^ (((/* implicit */int) arr_8 [i_1 + 2] [i_1] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6])) ? (1287741819) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) -1287741824)) ? (((/* implicit */int) (unsigned char)59)) : (1287741831))) : (((((/* implicit */_Bool) var_15)) ? (534889720) : (-1287741817)))))) ? (((((/* implicit */_Bool) (-(arr_17 [i_3] [i_3] [(unsigned char)9] [i_6] [i_6])))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)92)) != (((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */int) ((short) (_Bool)1))))) : ((-(((((/* implicit */_Bool) -1287741849)) ? (((/* implicit */int) var_8)) : (var_17)))))));
                        var_23 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_18 [(_Bool)1] [i_4 + 2] [i_4 - 1] [7])) ? (((((/* implicit */int) arr_11 [i_3])) / (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */int) (short)32738)) : (1946162578)))))));
                        arr_20 [i_3] [i_3] [i_5] [i_3] = ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)24546)), (1287741833)))) ? (((int) arr_13 [i_3])) : (((/* implicit */int) (signed char)78)));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_7 = 2; i_7 < 22; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (int i_9 = 2; i_9 < 22; i_9 += 3) 
                {
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_8] [i_8] [i_9 - 1] [i_8])) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) arr_28 [i_3] [i_3] [i_9 - 1] [i_3]))))) ? ((+(((/* implicit */int) arr_28 [i_7 + 1] [i_7 + 1] [i_9] [i_9])))) : (((int) max((var_13), (((/* implicit */unsigned short) var_8)))))));
                        var_25 ^= ((/* implicit */signed char) (!(((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967294U))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_3] [i_3])) ? (2048184200) : (((/* implicit */int) var_13)))))))));
                        var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_24 [8] [i_3] [i_3])) && (var_1))))));
                        arr_29 [4] [i_7] [i_7] [i_3] = ((((arr_17 [i_3] [i_3] [i_3] [i_3] [i_9]) | (((/* implicit */int) arr_16 [i_7] [i_7 - 2] [i_3] [(unsigned char)6])))) / (arr_25 [i_3] [4]));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_10 = 1; i_10 < 23; i_10 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_11 = 2; i_11 < 24; i_11 += 1) 
        {
            var_27 ^= ((/* implicit */signed char) ((var_7) % (((/* implicit */int) arr_34 [i_11 - 2] [i_10 + 1]))));
            arr_35 [i_10] = ((/* implicit */short) ((3503786260U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-33)))));
            arr_36 [i_10] [i_11] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 93596315)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_10 + 1] [i_10] [i_10 + 1]))))) : (((/* implicit */int) arr_34 [5] [i_10]))));
        }
        for (signed char i_12 = 1; i_12 < 23; i_12 += 2) 
        {
            var_28 = ((((/* implicit */int) arr_38 [i_10 + 2] [i_10])) + ((-(((/* implicit */int) (signed char)-116)))));
            /* LoopNest 2 */
            for (signed char i_13 = 1; i_13 < 24; i_13 += 3) 
            {
                for (signed char i_14 = 0; i_14 < 25; i_14 += 1) 
                {
                    {
                        var_29 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-56)) % (((/* implicit */int) arr_39 [i_10] [i_10] [(unsigned short)14] [i_14]))))) ? (var_3) : (((/* implicit */int) arr_37 [i_10]))));
                        var_30 |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_43 [i_10] [(short)10] [i_10] [i_10])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)205))))) : (((/* implicit */int) (short)1024))));
                    }
                } 
            } 
        }
        var_31 = ((/* implicit */int) max((var_31), ((~(((/* implicit */int) var_15))))));
    }
    /* vectorizable */
    for (unsigned int i_15 = 2; i_15 < 12; i_15 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_16 = 0; i_16 < 15; i_16 += 4) 
        {
            for (signed char i_17 = 2; i_17 < 13; i_17 += 2) 
            {
                for (signed char i_18 = 1; i_18 < 12; i_18 += 4) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) arr_26 [i_15] [i_15 + 1] [i_15] [i_16]);
                        var_33 = ((/* implicit */signed char) (unsigned char)0);
                    }
                } 
            } 
        } 
        arr_56 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_15])) ? (((/* implicit */int) arr_6 [i_15])) : (((/* implicit */int) arr_23 [i_15 + 2] [i_15] [i_15] [(unsigned short)14]))));
    }
}
