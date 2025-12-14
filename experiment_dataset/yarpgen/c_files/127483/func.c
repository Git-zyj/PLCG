/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127483
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
    var_18 = ((/* implicit */short) (~(((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_2])))) / (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0])))) >= (((/* implicit */int) arr_13 [i_0] [i_1 + 2] [i_2]))));
                                var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_0]))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_3 - 2])) ? (((/* implicit */int) arr_2 [i_1 - 2] [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) > (((/* implicit */int) arr_2 [i_2] [i_0])))))));
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-69))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_4])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            arr_19 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)69)) <= (((/* implicit */int) (signed char)(-127 - 1)))));
            arr_20 [i_0] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0]))))) : (((/* implicit */int) arr_6 [i_0] [i_0]))));
        }
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                var_23 = ((/* implicit */short) max((var_23), (arr_3 [i_0] [i_7] [i_0])));
                /* LoopNest 2 */
                for (short i_8 = 3; i_8 < 17; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        {
                            var_24 -= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_30 [i_0] [(signed char)12] [i_0] [i_8] [i_8] [i_7]))));
                            var_25 &= ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_4 [i_7] [i_8] [i_8])) % (((/* implicit */int) arr_6 [i_6] [i_7]))))));
                            arr_34 [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [i_7] [i_8 + 2])) ? (((/* implicit */int) arr_13 [i_0] [i_8] [i_8 - 1])) : (((/* implicit */int) arr_13 [i_0] [6U] [i_8 - 3]))));
                            var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_4 [i_0] [i_6] [i_9]))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_7] [i_7] [i_7]))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_7]))))))))));
                arr_35 [i_0] [i_6] [i_0] [i_6] = ((/* implicit */unsigned int) arr_8 [i_0] [i_6] [i_0]);
            }
            for (unsigned int i_10 = 3; i_10 < 19; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    for (unsigned short i_12 = 1; i_12 < 20; i_12 += 2) 
                    {
                        {
                            arr_46 [i_0] [i_6] [i_10] [i_0] [i_10] [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_25 [(unsigned short)11] [(unsigned short)11] [i_10] [i_0])) & (((/* implicit */int) arr_41 [i_0] [i_0])))) / (((/* implicit */int) ((signed char) arr_21 [i_0] [i_10] [i_12 - 1])))));
                            arr_47 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-32730)) ? (((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) (short)-32)))) : (((/* implicit */int) arr_44 [i_0] [i_10 + 2] [i_10 - 2] [i_10 - 3]))));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((arr_15 [i_11] [i_0] [i_0] [i_0] [i_6]) % (arr_15 [i_11] [i_11] [i_11] [i_11] [i_12 - 1]))))));
                            arr_48 [i_0] [i_6] [i_10] [i_11] [i_0] = ((/* implicit */signed char) ((unsigned int) ((signed char) arr_32 [i_0] [i_10] [i_11] [i_12])));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((arr_42 [i_6] [i_11] [i_12 - 1] [i_12 + 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_11] [i_10 - 1] [i_12 + 1] [i_12 + 1]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    for (unsigned int i_14 = 0; i_14 < 21; i_14 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) arr_25 [i_0] [11U] [11U] [i_0])) / (((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_13])))));
                            arr_55 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_29 [i_0] [i_6] [i_0] [i_0]))));
                        }
                    } 
                } 
            }
            arr_56 [i_0] [i_0] = ((unsigned int) arr_41 [i_0] [i_6]);
            var_31 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_24 [i_0] [i_0] [8U])) < (((/* implicit */int) arr_52 [i_0] [18U] [18U] [i_0] [i_6])))))) % (arr_42 [i_0] [(unsigned short)18] [i_0] [i_6])));
            var_32 = ((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_6]);
            var_33 = ((/* implicit */unsigned int) ((arr_53 [i_0] [i_0] [i_6] [i_0] [i_6]) >= (arr_53 [(short)10] [i_6] [i_6] [i_0] [i_6])));
        }
        for (short i_15 = 0; i_15 < 21; i_15 += 3) 
        {
            arr_59 [i_0] [i_15] = ((((/* implicit */_Bool) arr_30 [i_0] [11U] [11U] [i_15] [(unsigned short)5] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_40 [i_0] [i_0] [i_0] [i_0]));
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 21; i_16 += 3) 
            {
                for (signed char i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    {
                        var_34 = ((/* implicit */signed char) arr_54 [i_0] [i_0] [i_16] [i_16] [i_17]);
                        var_35 |= ((/* implicit */signed char) ((((/* implicit */int) arr_31 [i_17])) ^ (((/* implicit */int) arr_31 [i_17]))));
                    }
                } 
            } 
        }
        var_36 = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_61 [i_0]))))));
    }
}
