/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125748
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
    var_20 = var_3;
    var_21 = ((/* implicit */int) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2]))) : (arr_0 [i_0 - 1] [i_0 - 1])));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [(_Bool)1])) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0 - 3] [i_0 - 3] [i_0 - 3]))));
            arr_6 [(_Bool)1] [(short)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */unsigned int) var_18))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) arr_4 [0] [0])) ? (var_16) : (var_5)))));
        }
        /* LoopSeq 3 */
        for (unsigned int i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            arr_11 [i_2] [(short)12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) (short)8)) : (((/* implicit */int) var_6)))) != (((/* implicit */int) ((var_17) != (((/* implicit */int) arr_2 [12U])))))));
            arr_12 [i_0] [i_2] [i_2 + 2] = var_17;
        }
        for (unsigned int i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            var_24 = ((/* implicit */short) ((var_14) & (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
            var_25 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) 318104114U)) ? (((/* implicit */int) (short)-6)) : (((/* implicit */int) arr_8 [8] [i_0])))));
            arr_15 [i_3] = ((/* implicit */int) ((short) arr_3 [i_3] [i_3 + 1] [i_3]));
            arr_16 [i_3] = ((/* implicit */short) var_2);
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 10; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        {
                            var_26 = var_3;
                            var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (arr_18 [i_0 - 1] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_13 [i_5]))));
                            arr_23 [1U] [i_3] [i_3] [(unsigned char)11] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (var_19) : (((/* implicit */int) var_6))));
                        }
                    } 
                } 
            } 
        }
        for (short i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            arr_27 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)14)) ? (((/* implicit */int) (short)-13)) : (1677383105)));
            var_28 = (-(1177492781));
            var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_18))));
        }
        arr_28 [i_0 - 3] [i_0] = var_2;
    }
    var_30 = ((/* implicit */_Bool) ((unsigned char) -241044351));
    var_31 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_12))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (var_18))) : (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) 924297603)) ? (((((/* implicit */_Bool) 17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)109))) : (318104132U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-2712)) * (((/* implicit */int) (unsigned char)63)))))))));
}
