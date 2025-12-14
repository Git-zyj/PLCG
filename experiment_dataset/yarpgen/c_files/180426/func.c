/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180426
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 4]))) & (((((/* implicit */_Bool) 1059760225U)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */short) ((arr_3 [i_0 + 3]) & (arr_3 [i_0 + 2])));
            var_14 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 3])) : (((/* implicit */int) (unsigned short)1050))));
            arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1] [i_1])) > (((/* implicit */int) ((short) (_Bool)1)))));
        }
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) ((int) ((int) var_11)));
                        arr_17 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_0] [i_2] [i_0])) | (((/* implicit */int) (unsigned short)64486)))) ^ ((~(((/* implicit */int) (unsigned short)31961))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_16 += ((/* implicit */signed char) arr_2 [i_3] [i_3] [i_2]);
                            var_17 = arr_19 [i_2];
                        }
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            arr_23 [i_0] [i_2] [i_3] [i_3] [i_3] [i_0] [i_2] = ((/* implicit */long long int) arr_22 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_0]);
                            arr_24 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_10);
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0] [0ULL] [i_0] [0ULL] [i_0])) ? (arr_18 [i_0] [12U] [i_0] [i_0] [i_0]) : (arr_18 [i_0 + 4] [8U] [i_0 + 4] [i_0 + 4] [i_0])));
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((arr_13 [18U]) || (arr_13 [(unsigned char)18]))))));
        }
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_0 + 2] [i_0 + 2] [i_0 + 2])) * (((/* implicit */int) arr_21 [i_0 - 1] [i_0 - 1] [i_0]))));
                        var_21 = ((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_1))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 2] [i_0 - 1]))) | (((((/* implicit */_Bool) arr_18 [i_0] [i_9] [i_9] [i_10] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_10]))) : (var_9)))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 25; i_11 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (signed char i_14 = 0; i_14 < 25; i_14 += 3) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_48 [i_11] [i_12] [i_13] [i_14] [i_15] = ((/* implicit */short) ((((/* implicit */int) arr_41 [i_14])) | (((/* implicit */int) arr_46 [i_11] [i_11]))));
                            var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_11])) + (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) (short)21818)) : (((/* implicit */int) ((unsigned char) 100083961)))));
                            arr_49 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_11] [i_11] [i_11] [i_11])) == (((/* implicit */int) arr_38 [i_11]))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */signed char) var_3);
            arr_50 [i_12] = ((/* implicit */long long int) arr_46 [i_12] [i_11]);
            /* LoopSeq 1 */
            for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    for (unsigned long long int i_18 = 2; i_18 < 23; i_18 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_58 [i_12] [i_18 - 1] [i_12] [i_18 + 2] [i_18] [i_18 - 1] [i_18 + 2]))));
                            var_26 = ((/* implicit */unsigned int) (unsigned short)64497);
                        }
                    } 
                } 
                arr_61 [i_11] [i_11] [i_11] [i_16] &= ((((/* implicit */_Bool) arr_40 [i_11] [i_11] [i_16])) ? (arr_52 [i_12] [i_16] [i_12] [i_11]) : (arr_52 [i_11] [i_11] [i_11] [i_11]));
            }
        }
        var_27 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_54 [i_11] [i_11] [i_11] [i_11]))))));
    }
    for (unsigned int i_19 = 0; i_19 < 19; i_19 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_20 = 2; i_20 < 18; i_20 += 2) 
        {
            for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
            {
                for (unsigned char i_22 = 0; i_22 < 19; i_22 += 2) 
                {
                    {
                        arr_72 [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_10))))) ^ (((((/* implicit */_Bool) max((((/* implicit */short) arr_20 [i_19] [i_19] [i_19] [i_19] [i_19])), ((short)2048)))) ? (((((/* implicit */_Bool) arr_43 [i_19] [i_19] [i_19] [i_19])) ? (400361950U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_22] [i_21] [i_19] [i_19]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) var_0))))))))));
                        var_28 = (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-12531)) : (((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_44 [i_19] [i_19] [i_19] [i_19])))))));
                    }
                } 
            } 
        } 
        arr_73 [i_19] [i_19] = ((/* implicit */unsigned char) ((signed char) (~(400361950U))));
    }
    var_29 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned char i_23 = 0; i_23 < 17; i_23 += 1) 
    {
        for (signed char i_24 = 0; i_24 < 17; i_24 += 4) 
        {
            for (unsigned short i_25 = 0; i_25 < 17; i_25 += 2) 
            {
                {
                    arr_84 [i_25] [i_23] [i_23] [i_23] = ((/* implicit */_Bool) arr_27 [i_23]);
                    var_30 = ((/* implicit */unsigned char) arr_36 [i_23]);
                }
            } 
        } 
    } 
}
