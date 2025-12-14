/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172412
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        arr_13 [(_Bool)1] [(_Bool)1] [i_0] [(_Bool)1] = arr_4 [i_0];
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (short)-12600);
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [i_4 + 1])) ? (((arr_5 [i_0 - 1]) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) arr_11 [i_0] [i_3] [i_2])))))));
                        }
                        for (short i_5 = 3; i_5 < 18; i_5 += 4) 
                        {
                            arr_21 [i_0] [i_3] [i_2] [i_0 + 3] [i_0 + 3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_5] [i_1 - 1] [i_1 - 1] [i_3] [i_1 - 1] [i_5]))))) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_2 + 1] [(short)10] [i_0] [i_3])) : (((/* implicit */int) arr_16 [i_0] [i_1 - 1] [(short)4])))) : (((((/* implicit */_Bool) 1056659997U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_14 [i_0]))))));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12627)) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                        }
                        arr_22 [i_0] [(_Bool)1] [i_1 - 1] [(_Bool)1] [i_2 - 1] [i_0] = arr_16 [9U] [9U] [i_3];
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_20 = var_5;
                            var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_23 [i_0] [i_0] [i_2 + 1] [i_2 + 1])) - (((/* implicit */int) arr_23 [i_2 + 1] [i_2] [i_2 + 1] [i_2]))))));
                            var_22 += ((/* implicit */short) ((((/* implicit */int) ((short) arr_3 [10U]))) | (((/* implicit */int) ((_Bool) min((var_6), (((/* implicit */unsigned int) arr_16 [(_Bool)1] [i_1 - 1] [i_2 - 1]))))))));
                            var_23 = ((short) (_Bool)1);
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_24 ^= ((/* implicit */unsigned int) ((short) var_11));
                            arr_32 [i_1] [i_1] [i_2] [i_0] [i_8] [i_2] [i_2 - 1] = ((/* implicit */_Bool) max(((short)-512), ((short)-1)));
                            var_25 = ((/* implicit */_Bool) ((short) ((unsigned int) (~(((/* implicit */int) arr_14 [i_0]))))));
                        }
                        for (short i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            arr_37 [i_0 + 2] [i_1] [i_0] = min((((/* implicit */short) arr_2 [i_0 + 2])), ((short)20320));
                            arr_38 [i_0] [i_0] [i_1] [i_2 - 1] [i_6] [7U] [i_9] = ((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_1 - 1] [(short)4])) : (((/* implicit */int) var_13)))))));
                            arr_39 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */short) (-((~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))))))));
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (!(arr_24 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                            arr_40 [i_0] [i_1 - 1] [i_0] [(short)1] = ((/* implicit */short) (+(var_6)));
                        }
                        arr_41 [i_0] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_12))))) || (((/* implicit */_Bool) min((arr_6 [i_1]), (((/* implicit */unsigned int) (_Bool)1)))))))));
                        var_27 -= var_8;
                    }
                    for (short i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */short) min((((((/* implicit */_Bool) 4294967283U)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_26 [i_0] [i_10])) : (((/* implicit */int) (short)-21986)))))), (((((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) (_Bool)1))))) / (((/* implicit */int) (_Bool)1))))));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) / (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20797)) ? (((arr_23 [5U] [i_1] [i_2] [i_10]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4))) : (((((/* implicit */_Bool) arr_30 [(_Bool)1] [i_0] [3U] [(_Bool)1] [3U])) ? (arr_0 [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2]))))))))));
                    }
                    var_30 = ((/* implicit */short) arr_24 [i_0 + 4] [i_1 - 1] [i_1 - 1] [i_2 + 1]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
    {
        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
        {
            for (short i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 12; i_15 += 4) 
                        {
                            {
                                arr_59 [i_12] [i_14 - 1] [i_15] = ((/* implicit */short) min((((((/* implicit */_Bool) (+(3763295773U)))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) arr_1 [i_15])))), (((/* implicit */int) var_0))));
                                var_31 = (!(((/* implicit */_Bool) (short)-28409)));
                            }
                        } 
                    } 
                    var_32 -= (!(((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (short)12600)) : (((/* implicit */int) var_0))))));
                }
            } 
        } 
    } 
    var_33 = min((((/* implicit */short) var_1)), (var_14));
}
