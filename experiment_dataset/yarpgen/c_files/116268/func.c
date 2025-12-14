/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116268
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_12 [i_4] [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) ((short) arr_10 [i_1] [(short)16] [i_2] [i_1] [(short)16] [(short)16])))))) ? ((~(((/* implicit */int) (short)8192)))) : (((((/* implicit */int) arr_0 [(short)6] [i_2])) ^ (((/* implicit */int) var_1))))));
                                var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)32752)) ? (((/* implicit */int) (short)19431)) : (((/* implicit */int) ((short) var_8))))) > (((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0 + 1]))));
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_8 [i_1] [i_3] [i_4]))) && (((((/* implicit */int) arr_3 [i_0] [i_0 - 1])) != (((((/* implicit */int) (short)8192)) - (((/* implicit */int) arr_3 [i_0] [i_1]))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [(short)17] [i_1] = ((short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) >= (((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0]), (var_1))))));
                arr_14 [(short)5] [(short)18] = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) max((arr_8 [(short)12] [i_1] [i_1]), (var_5)))))));
                arr_15 [(short)4] [(short)4] = ((/* implicit */short) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)8192)) : (((/* implicit */int) var_13))))))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_0 - 1] [i_1]))))) || (((/* implicit */_Bool) max((var_7), (arr_12 [i_1] [i_1] [i_1] [(short)10] [(short)3]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) (-(((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (short i_5 = 1; i_5 < 13; i_5 += 4) 
    {
        var_20 = ((short) (~(((((/* implicit */_Bool) (short)28830)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-21493))))));
        var_21 = ((/* implicit */short) max((var_21), (((short) ((short) var_2)))));
        var_22 = ((/* implicit */short) ((((((/* implicit */int) (short)-256)) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) (short)30749)) == (((/* implicit */int) (short)22793)))))));
        arr_18 [i_5] [i_5 + 3] = ((short) min((var_12), (arr_2 [i_5 + 3])));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        arr_21 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_6] [(short)7])) ? ((-(((/* implicit */int) arr_6 [i_6] [i_6] [i_6] [i_6])))) : (((((/* implicit */int) var_2)) - (((/* implicit */int) (short)21878))))));
        /* LoopNest 3 */
        for (short i_7 = 1; i_7 < 13; i_7 += 4) 
        {
            for (short i_8 = 3; i_8 < 12; i_8 += 4) 
            {
                for (short i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    {
                        arr_28 [i_8 - 3] [i_8 + 2] [i_8 - 1] [i_8 - 1] &= ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))) - (((/* implicit */int) arr_19 [i_7 + 2]))));
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            arr_31 [(short)2] [i_7 + 2] [i_7 + 2] [i_9] [(short)7] [i_10] [i_8] = ((short) (short)19431);
                            arr_32 [i_10] [i_9] [i_8 + 1] [i_6] = ((short) ((((/* implicit */_Bool) arr_23 [i_6] [i_8])) ? (((/* implicit */int) arr_2 [i_7])) : (((/* implicit */int) arr_17 [i_7 + 2] [i_7 + 2]))));
                        }
                    }
                } 
            } 
        } 
    }
    var_23 *= ((/* implicit */short) (-(((/* implicit */int) var_14))));
}
