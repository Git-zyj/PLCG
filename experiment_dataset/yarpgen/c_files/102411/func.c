/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102411
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_19 += ((/* implicit */_Bool) ((short) max(((short)11460), ((short)-11460))));
        var_20 = ((/* implicit */short) max((var_20), (((short) ((short) var_7)))));
        var_21 *= (short)-11462;
        arr_4 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)11460))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_13 [i_1] = ((/* implicit */short) arr_1 [i_1] [i_3]);
                    var_22 = ((/* implicit */_Bool) min((var_22), (max((min((arr_2 [i_3]), (arr_2 [i_1]))), (arr_5 [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            {
                                var_23 = arr_7 [i_1];
                                var_24 = ((_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_14 [i_1] [i_2] [i_3] [i_5]))));
                                var_25 = ((/* implicit */short) min((((((/* implicit */int) arr_0 [(short)1] [i_2])) + (((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1])))), (((/* implicit */int) ((short) arr_0 [i_2] [i_2])))));
                                arr_19 [i_1] [i_2] [i_3] [i_4] [i_5] |= ((/* implicit */_Bool) ((((/* implicit */int) ((short) (short)-11454))) * (((arr_12 [i_3] [i_2] [i_2]) ? (((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_17 [i_1] [i_2] [(short)0] [i_3] [i_3] [(_Bool)1] [i_5])))) : (((arr_17 [i_1] [(_Bool)1] [i_3] [(_Bool)1] [i_4] [i_5] [i_5]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((arr_11 [(_Bool)1] [(_Bool)1] [(short)8]) ? (((/* implicit */int) ((arr_11 [i_1] [i_1] [(_Bool)1]) && (arr_11 [(_Bool)1] [i_1] [(_Bool)1])))) : (((arr_11 [(short)4] [i_1] [(_Bool)1]) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_11 [i_1] [i_1] [(short)6])))))))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_22 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2873)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_12)) : (((((((/* implicit */int) arr_6 [(_Bool)1])) + (2147483647))) >> (((/* implicit */int) var_18))))));
        var_27 -= (_Bool)0;
    }
    var_28 = min((var_18), ((!(((/* implicit */_Bool) (-(((/* implicit */int) var_11))))))));
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))));
}
