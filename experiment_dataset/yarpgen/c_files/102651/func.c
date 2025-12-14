/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102651
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
    var_16 = ((/* implicit */unsigned short) (-(((var_6) / (((/* implicit */int) var_14))))));
    var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) min((var_2), (var_5)))) ? (var_4) : ((-(((/* implicit */int) ((31) == (1037936437))))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_18 = arr_1 [9] [i_1];
                arr_5 [i_0] [i_0] [i_0] = ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (794925241) : (-1044453795))))) - (((/* implicit */int) (unsigned short)4497)));
                var_19 = var_12;
                var_20 = ((/* implicit */int) min((var_20), (((int) (+(1044453795))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        var_21 &= ((/* implicit */int) ((unsigned short) arr_6 [(unsigned short)0] [(unsigned short)0]));
        arr_8 [(unsigned short)7] [i_2] = ((/* implicit */int) ((unsigned short) (unsigned short)65535));
        arr_9 [i_2] = ((int) ((var_8) + (((/* implicit */int) (unsigned short)480))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            var_22 = ((/* implicit */unsigned short) arr_12 [i_4]);
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                arr_17 [i_3] [i_4] [i_5] |= ((/* implicit */int) var_14);
                var_23 = ((/* implicit */int) min((var_23), ((+(-1044453819)))));
            }
            var_24 = (+(794925234));
            arr_18 [i_3] = ((((/* implicit */_Bool) -1)) ? (-794925218) : (1658433287));
            arr_19 [i_4] [i_3] [i_3] = ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (var_7) : (var_11));
        }
        for (int i_6 = 1; i_6 < 15; i_6 += 4) 
        {
            arr_23 [i_6] = ((unsigned short) -16);
            var_25 = ((15) * (((/* implicit */int) arr_16 [i_6 + 2] [i_6 - 1] [i_6 + 4] [i_6 + 4])));
            arr_24 [i_3] [i_3] [i_6] = ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)65060)) || (((/* implicit */_Bool) var_3))))));
        }
        for (unsigned short i_7 = 3; i_7 < 17; i_7 += 4) 
        {
            arr_27 [i_3] = ((((/* implicit */_Bool) var_7)) ? (((-1044453812) - (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((unsigned short) var_13))));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_3])) != (863244946)));
        }
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (1044453814) : (((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_3])))))));
    }
}
