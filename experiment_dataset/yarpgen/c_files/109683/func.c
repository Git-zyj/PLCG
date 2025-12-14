/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109683
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
    var_11 = var_8;
    var_12 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0])))));
        var_14 = (~(((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [i_0])))) & (min((((/* implicit */unsigned int) (short)-31445)), (0U))))));
        var_15 = ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (644028474))) : (((/* implicit */int) arr_0 [i_0]))))) ? (var_10) : (((/* implicit */int) ((short) var_2))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)39805)) : (((/* implicit */int) (signed char)-125))))) ? (((/* implicit */int) (unsigned short)39810)) : (((/* implicit */int) arr_1 [i_0])))));
    }
    /* vectorizable */
    for (short i_1 = 4; i_1 < 18; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) ((arr_4 [i_1 + 1]) <= (arr_4 [i_1 - 4])));
        var_18 = ((/* implicit */unsigned int) (short)8);
        arr_6 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-96)) ? (517911115U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))));
        /* LoopSeq 2 */
        for (signed char i_2 = 2; i_2 < 17; i_2 += 4) 
        {
            arr_9 [5U] [i_1] [i_1] = ((_Bool) arr_3 [i_1 - 1]);
            var_19 = ((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? ((~(arr_4 [i_1 + 1]))) : (((/* implicit */int) arr_1 [i_1 - 4])));
        }
        for (signed char i_3 = 3; i_3 < 17; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((signed char) arr_13 [i_3 - 3] [i_3 - 1] [(short)13] [i_3]))));
                        var_21 = ((/* implicit */unsigned int) -644028474);
                        var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (arr_4 [(unsigned short)15]) : (var_1))) != (((/* implicit */int) (short)31445))));
                    }
                } 
            } 
            var_23 *= ((unsigned short) ((((/* implicit */_Bool) 25165824)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_9)));
            var_24 = ((/* implicit */unsigned short) var_6);
        }
        /* LoopNest 3 */
        for (short i_6 = 4; i_6 < 16; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                for (signed char i_8 = 2; i_8 < 17; i_8 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
                        {
                            var_25 = ((-644028474) < (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) arr_21 [i_9] [i_8] [i_6 + 1] [(signed char)2]))))));
                            var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31445)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_12 [i_8] [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-16256)) || (((/* implicit */_Bool) arr_19 [i_1] [i_1])))))) : (406110030U));
                            arr_30 [i_9] [i_1] [i_7] [i_1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_14 [i_1] [i_6] [i_7] [i_8])) & (((/* implicit */int) arr_26 [i_9] [i_8] [i_8] [i_7] [i_6] [i_1]))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
                        {
                            arr_35 [i_1] [i_6 + 3] [i_8] [i_1] = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) var_9)))));
                            var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) -6765131878012073650LL)) ? (((/* implicit */int) arr_7 [i_10])) : ((+(((/* implicit */int) arr_8 [i_10]))))));
                            arr_36 [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) 
                        {
                            arr_39 [14] [i_6] [(short)5] [i_1] [(short)17] [i_8 + 2] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_11] [i_8 - 2])) ? (arr_11 [i_8] [i_8 - 2]) : (((/* implicit */int) arr_25 [i_1] [i_11] [i_8 - 2] [i_1]))));
                            var_28 = ((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_18 [i_1 - 3])));
                        }
                        for (short i_12 = 0; i_12 < 19; i_12 += 3) 
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */int) (short)11889)) ^ (((/* implicit */int) var_6))));
                            var_30 = ((/* implicit */unsigned short) arr_31 [i_1] [i_7] [(signed char)9]);
                            arr_43 [i_6] [i_1] [i_8] = ((/* implicit */unsigned short) var_6);
                        }
                        var_31 = ((/* implicit */signed char) (+((~(((/* implicit */int) (_Bool)0))))));
                    }
                } 
            } 
        } 
    }
    var_32 = var_7;
}
