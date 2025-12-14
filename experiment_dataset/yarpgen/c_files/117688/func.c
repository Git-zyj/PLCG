/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117688
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_4 [(short)3] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1]);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_10 [i_1] = (signed char)-54;
        var_19 = ((/* implicit */unsigned int) arr_8 [i_1]);
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((int) ((((/* implicit */int) (signed char)-35)) < (((/* implicit */int) (_Bool)1))))))));
    }
    for (signed char i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
    {
        arr_15 [i_2] = ((/* implicit */unsigned short) (-(max((((/* implicit */int) var_5)), ((~(((/* implicit */int) (signed char)-35))))))));
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    {
                        var_21 = ((/* implicit */int) max((var_21), (max((((((/* implicit */_Bool) min((((/* implicit */short) arr_8 [i_3])), (var_15)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_18 [i_2] [i_3] [(signed char)10])))), (((/* implicit */int) min((((/* implicit */signed char) arr_12 [i_2])), ((signed char)45))))))));
                        arr_24 [i_2] [i_3] [i_5] = ((/* implicit */int) var_6);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */int) ((short) arr_13 [i_2]));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
    {
        var_23 |= ((/* implicit */unsigned int) arr_18 [i_6] [i_6] [i_6]);
        arr_27 [16] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_25 [i_6])) * (((/* implicit */int) var_14))))));
        arr_28 [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [i_6] [i_6]))) / (var_4))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        var_24 = ((/* implicit */signed char) ((arr_7 [i_7] [i_7]) ? (((/* implicit */int) arr_7 [0U] [i_7])) : (((/* implicit */int) arr_7 [i_7] [i_7]))));
        arr_32 [i_7] [10U] = ((/* implicit */unsigned int) ((unsigned char) arr_6 [i_7] [i_7]));
        arr_33 [i_7] = ((/* implicit */signed char) ((arr_29 [i_7] [i_7]) ? (((/* implicit */int) var_14)) : ((-(arr_30 [i_7])))));
        /* LoopSeq 2 */
        for (unsigned int i_8 = 1; i_8 < 15; i_8 += 2) 
        {
            arr_36 [i_8] [i_8] = ((/* implicit */unsigned short) (signed char)44);
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) arr_6 [i_8 + 3] [(_Bool)1]))));
            arr_37 [i_8] [i_8] = ((/* implicit */short) var_17);
        }
        for (unsigned int i_9 = 1; i_9 < 16; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (int i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    {
                        var_26 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_42 [i_9 + 1] [i_9 + 1] [i_10])) | (((/* implicit */int) arr_42 [i_7] [(_Bool)1] [i_10]))));
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 18; i_12 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned short) (signed char)-65);
                            arr_48 [i_11] [i_11] [i_12] = ((/* implicit */short) ((((/* implicit */int) arr_46 [i_12] [i_11] [i_11] [i_9])) * (((/* implicit */int) arr_46 [i_7] [i_11] [i_11] [i_12]))));
                        }
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_29 [i_9 - 1] [i_9 - 1])))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 0; i_13 < 18; i_13 += 4) 
                        {
                            var_29 = ((/* implicit */signed char) var_10);
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_42 [(unsigned char)17] [i_10] [i_7])) : (((/* implicit */int) arr_47 [i_10] [i_11] [i_9]))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_14 = 2; i_14 < 16; i_14 += 4) 
            {
                for (signed char i_15 = 0; i_15 < 18; i_15 += 1) 
                {
                    {
                        arr_56 [i_7] [i_7] [i_15] = ((/* implicit */signed char) var_12);
                        arr_57 [i_7] [i_9 + 2] [i_14] [i_15] [i_15] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_9 - 1] [i_14 - 2])) ^ (((/* implicit */int) var_6))));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) var_14)))));
            arr_58 [(signed char)14] [(short)4] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_9 + 2] [i_9 + 2]))));
        }
        arr_59 [i_7] = ((/* implicit */unsigned int) ((signed char) (signed char)79));
    }
    var_32 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (min((379356974U), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-51))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
}
