/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15073
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
    var_14 -= var_5;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) arr_2 [(short)8]))));
                arr_4 [(short)15] [(short)0] [(short)11] = arr_2 [(short)4];
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 1; i_2 < 23; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            var_16 ^= ((/* implicit */short) min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) ((short) arr_8 [i_2 + 1])))));
            var_17 -= ((/* implicit */short) min((((/* implicit */int) arr_5 [(short)14] [i_2 - 1])), (((((/* implicit */_Bool) arr_5 [i_2] [i_2 - 1])) ? (((/* implicit */int) arr_5 [(short)15] [i_2 + 1])) : (((/* implicit */int) arr_5 [i_3] [i_2 - 1]))))));
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */int) arr_6 [(short)16] [i_2 + 1])) - (((((/* implicit */int) arr_8 [i_2 + 1])) | (((((/* implicit */int) var_2)) - (((/* implicit */int) arr_7 [(short)1])))))))))));
            arr_9 [i_3] [(short)3] = ((/* implicit */short) (+(((/* implicit */int) var_8))));
        }
        var_19 += ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
        var_20 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (short)124))));
        var_21 = ((/* implicit */short) ((((/* implicit */int) ((short) arr_6 [i_2 - 1] [i_2 + 1]))) - (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1]))));
    }
    for (short i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_5 = 4; i_5 < 10; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (short i_6 = 1; i_6 < 10; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    {
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-124)) : (((/* implicit */int) arr_13 [i_6 + 1] [(short)0] [i_6]))))))));
                        arr_19 [(short)1] [i_6] [i_5] [i_6] [i_4] = max((max((arr_7 [i_5 - 2]), (arr_3 [i_6 - 1] [i_5 - 1]))), (((short) arr_3 [i_6 + 1] [i_5 - 1])));
                        var_23 = arr_5 [(short)20] [i_4];
                        var_24 = (short)-1;
                    }
                } 
            } 
            arr_20 [(short)5] [(short)2] = ((short) min((max((var_2), (var_6))), (arr_12 [i_5 + 1])));
            arr_21 [(short)0] = var_12;
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    for (short i_10 = 2; i_10 < 10; i_10 += 3) 
                    {
                        {
                            arr_32 [i_4] [(short)2] [i_8] [(short)5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [(short)2])) ? (((((/* implicit */int) arr_30 [i_10 - 2] [i_10] [i_10 - 2] [i_10 - 2] [(short)10])) & (((/* implicit */int) arr_30 [i_10 - 2] [(short)0] [i_10 - 2] [(short)10] [(short)3])))) : (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_12 [(short)2])))) : (((/* implicit */int) arr_25 [(short)3]))))));
                            arr_33 [i_8] = ((/* implicit */short) (+(((/* implicit */int) min((arr_17 [i_10 - 2] [i_8] [i_8] [i_9]), (arr_25 [i_5 - 3]))))));
                        }
                    } 
                } 
            } 
        }
        var_25 *= ((/* implicit */short) min((((/* implicit */int) (short)255)), (max((((((/* implicit */_Bool) arr_14 [(short)4])) ? (((/* implicit */int) arr_7 [(short)16])) : (((/* implicit */int) var_3)))), (((/* implicit */int) min((var_2), (arr_11 [(short)10]))))))));
    }
}
