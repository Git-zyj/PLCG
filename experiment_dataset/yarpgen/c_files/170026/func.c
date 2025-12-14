/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170026
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
    var_13 += ((/* implicit */short) ((var_7) ? (((/* implicit */int) ((((((/* implicit */int) var_10)) < (((/* implicit */int) var_0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))))))) : (((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_8))))) : (((/* implicit */int) var_4))))));
    var_14 = ((((/* implicit */_Bool) (short)32343)) || (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (short)11)) > (((/* implicit */int) (short)16307)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_15 &= ((/* implicit */_Bool) ((short) (~(((/* implicit */int) arr_0 [(_Bool)1])))));
        var_16 = ((/* implicit */short) min((((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (arr_0 [i_0])))), (((((/* implicit */_Bool) ((short) arr_1 [i_0] [i_0]))) ? ((-(((/* implicit */int) arr_1 [i_0] [i_0])))) : ((~(((/* implicit */int) (_Bool)1))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
        arr_5 [i_1] |= ((/* implicit */short) ((_Bool) ((short) arr_3 [i_1] [i_1])));
        var_18 += ((/* implicit */short) ((((/* implicit */int) ((arr_4 [i_1]) && (arr_4 [i_1])))) < ((+(((arr_4 [i_1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_1] [i_1]))))))));
    }
    var_19 = ((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_4))))), ((short)15883)))), (((var_0) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) var_0))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (min((((_Bool) arr_8 [i_2])), ((!(((/* implicit */_Bool) arr_6 [i_2] [i_3]))))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((_Bool) (-(((/* implicit */int) ((var_6) || (arr_11 [i_4] [i_3] [i_2])))))));
                            arr_17 [i_2] = ((/* implicit */_Bool) (-((-(((/* implicit */int) (short)690))))));
                            /* LoopSeq 3 */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_22 |= ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_18 [(short)9] [i_3] [(_Bool)1]))))));
                                var_23 = ((/* implicit */short) min(((((+(((/* implicit */int) var_2)))) - (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) arr_11 [i_2] [i_4] [i_6]))))));
                                arr_20 [i_2] [i_3] [i_3] [i_5] [i_3] = ((/* implicit */short) max((((/* implicit */int) max((arr_13 [i_4] [i_4] [i_4]), (arr_9 [i_4] [i_5] [i_5])))), ((+(((/* implicit */int) arr_13 [i_2] [i_5] [(short)20]))))));
                            }
                            /* vectorizable */
                            for (short i_7 = 0; i_7 < 25; i_7 += 4) 
                            {
                                arr_24 [i_4] [(short)18] [i_4] [i_3] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_3] [i_5] [i_7]))));
                                var_24 = arr_14 [i_7] [i_7] [i_4] [i_4] [i_3] [i_2];
                                var_25 = ((/* implicit */short) ((_Bool) arr_22 [i_2] [i_2] [i_5]));
                            }
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                var_26 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-15876)) + (2147483647))) << (((((((/* implicit */int) var_12)) + (13303))) - (18)))));
                                var_27 = (_Bool)1;
                                var_28 |= ((/* implicit */short) max((((((/* implicit */_Bool) arr_6 [i_5] [i_8])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_11 [(_Bool)1] [i_4] [i_4])))), (((/* implicit */int) ((((/* implicit */int) arr_11 [i_3] [i_3] [i_8])) >= (((/* implicit */int) arr_15 [i_2])))))));
                                var_29 = ((/* implicit */short) var_0);
                            }
                        }
                    } 
                } 
                var_30 = ((/* implicit */_Bool) min((((((/* implicit */int) min((((/* implicit */short) var_10)), (arr_10 [i_2] [i_3] [i_2])))) % ((~(((/* implicit */int) arr_16 [i_2] [i_2] [i_3] [i_3])))))), (((/* implicit */int) ((_Bool) (short)21708)))));
            }
        } 
    } 
}
