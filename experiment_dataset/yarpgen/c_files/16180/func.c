/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16180
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
    var_20 -= ((/* implicit */short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) max((var_19), (var_0)))) : (((/* implicit */int) max((var_5), (var_7)))))) <= (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_2)))))));
    var_21 = (short)0;
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_22 = arr_3 [i_0] [i_1];
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) max(((short)-30705), (var_0)))) | (((/* implicit */int) max((arr_8 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]), (var_11))))))) && (((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_3 + 1])) && (((/* implicit */_Bool) (short)-21493))))));
                        var_24 = ((/* implicit */short) max((var_24), (max((var_10), (arr_5 [(short)10] [i_1] [i_1])))));
                        var_25 = ((short) max(((+(((/* implicit */int) var_4)))), (((/* implicit */int) max(((short)7), ((short)24542))))));
                        /* LoopSeq 4 */
                        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_3] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) (short)22086)) < (((/* implicit */int) max((arr_8 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]), (var_17))))))), (max((((/* implicit */int) arr_9 [i_3] [i_3 + 2] [(short)7] [i_2 + 1] [i_3])), (((((/* implicit */int) arr_10 [(short)9])) | (((/* implicit */int) (short)-13259))))))));
                            var_26 = (short)-22819;
                            var_27 = var_19;
                            var_28 = arr_12 [i_0] [i_0 + 3] [i_0] [(short)11] [i_0 + 3];
                        }
                        /* vectorizable */
                        for (short i_5 = 1; i_5 < 15; i_5 += 4) 
                        {
                            var_29 = ((/* implicit */short) (-((~(((/* implicit */int) var_2))))));
                            arr_17 [i_3] [i_1] [i_2 - 1] [(short)8] [(short)8] [i_5 + 1] [i_2] = var_6;
                            var_30 = (short)7;
                        }
                        for (short i_6 = 2; i_6 < 15; i_6 += 4) 
                        {
                            arr_20 [i_3] = ((/* implicit */short) (-(((/* implicit */int) max((max((var_11), (arr_19 [i_3] [(short)6] [i_2] [i_1] [i_3]))), (arr_7 [i_3] [i_0] [i_0]))))));
                            var_31 += ((/* implicit */short) max((((((/* implicit */_Bool) arr_15 [i_1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [(short)8] [i_3])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_15 [i_1] [i_2 + 1] [i_3] [i_6 - 1] [i_6] [i_6])))), (((/* implicit */int) max(((short)30724), ((short)14449))))));
                        }
                        for (short i_7 = 4; i_7 < 16; i_7 += 1) 
                        {
                            var_32 -= max((max((max(((short)20), (arr_9 [i_0 + 1] [i_1] [i_2] [i_3] [i_0]))), (arr_12 [i_0 + 4] [i_1] [i_0 + 4] [i_3 + 2] [i_3 + 2]))), (var_5));
                            var_33 = ((/* implicit */short) (+(((/* implicit */int) arr_18 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]))));
                            arr_23 [i_0] [i_3] = arr_9 [i_1] [i_3] [i_2 - 1] [(short)11] [i_3];
                        }
                    }
                    for (short i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        var_34 = ((/* implicit */short) max((var_34), (arr_25 [i_0 - 2] [i_2 + 1])));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            var_35 -= ((/* implicit */short) (!(((((/* implicit */int) arr_24 [i_0 + 2] [i_1] [(short)6] [i_1])) == (((/* implicit */int) arr_5 [i_1] [i_8] [i_9]))))));
                            var_36 = (short)0;
                        }
                    }
                    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((((((/* implicit */_Bool) (short)7896)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_2] [i_0 + 1] [i_0])))) - (((/* implicit */int) max((arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] [i_2]), (var_18)))))) | (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (short)6144))))))))));
                }
                var_38 = ((/* implicit */short) max((((/* implicit */int) var_7)), (max((((/* implicit */int) arr_29 [i_0 + 3])), (((((/* implicit */int) var_5)) * (((/* implicit */int) (short)30625))))))));
                arr_31 [i_0] = ((short) ((short) arr_28 [i_0 + 2] [i_1] [(short)14] [i_1] [i_1] [i_1] [(short)11]));
            }
        } 
    } 
}
