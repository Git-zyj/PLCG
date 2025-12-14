/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105319
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((_Bool) 585051235)))));
    var_12 = ((/* implicit */int) ((_Bool) min((((/* implicit */int) var_9)), (((var_1) ? (var_10) : (var_5))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((arr_4 [i_0 + 2]) * (((/* implicit */int) var_1)))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_9 [11] [i_0] = ((/* implicit */_Bool) var_2);
                var_14 = ((/* implicit */int) max((var_14), (((int) var_1))));
                arr_10 [i_0] = ((/* implicit */_Bool) ((var_6) / (arr_5 [i_0] [i_1] [i_1])));
                var_15 |= ((/* implicit */_Bool) ((var_3) ? (arr_7 [i_0 - 1] [(_Bool)1]) : (((/* implicit */int) var_0))));
            }
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 12; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        arr_19 [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */_Bool) (((_Bool)0) ? ((((_Bool)0) ? (var_10) : (182734873))) : (((/* implicit */int) ((_Bool) var_1)))));
                        arr_20 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */int) var_9);
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? ((+(var_8))) : (((var_7) ? (var_6) : (((/* implicit */int) (_Bool)1))))));
                        var_17 = var_5;
                    }
                } 
            } 
            var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_0 + 1] [0] [(_Bool)1] [(_Bool)1])) : (((var_1) ? (-799319845) : (var_5)))))));
        }
        for (int i_5 = 2; i_5 < 14; i_5 += 2) 
        {
            var_19 = ((/* implicit */int) arr_6 [i_0] [i_0] [i_5] [i_0]);
            arr_24 [i_0] [i_0] = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0)))) % (((-806021159) & (((/* implicit */int) var_7))))));
            var_20 = var_3;
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))) || (((_Bool) var_2))));
        }
        var_22 = var_10;
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 20; i_6 += 2) 
    {
        var_23 += ((/* implicit */int) ((_Bool) arr_27 [i_6 + 1]));
        var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (806021159)))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (1820340663))) : (-1561957207)));
        arr_28 [i_6 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (var_4)))) ? (arr_26 [i_6]) : (var_10)));
    }
}
