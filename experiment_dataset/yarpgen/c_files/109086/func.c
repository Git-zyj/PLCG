/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109086
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) 3004825942U);
        var_20 = ((/* implicit */int) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), (var_5)))), (min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            arr_5 [i_1 + 1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0 + 1])) - (((/* implicit */int) arr_0 [i_0]))));
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_1 - 1])))) ? (((/* implicit */int) arr_1 [9] [12U])) : (((/* implicit */int) var_19))));
            var_21 &= ((int) var_9);
        }
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((((((/* implicit */int) arr_0 [i_0 + 1])) + (((/* implicit */int) var_5)))), (((/* implicit */int) arr_3 [i_0 + 1])))))));
    }
    for (short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_8 [i_2] [(_Bool)1]))))) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) arr_8 [i_2] [(unsigned short)1]))));
        var_23 = ((/* implicit */_Bool) max((var_23), ((_Bool)1)));
    }
    var_24 = max((((/* implicit */unsigned char) var_16)), (var_5));
    var_25 = ((/* implicit */unsigned char) ((int) var_17));
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                {
                    arr_18 [i_4] [i_4] [(unsigned short)18] = ((/* implicit */unsigned char) ((unsigned short) (_Bool)1));
                    arr_19 [i_4] = ((/* implicit */short) max((((/* implicit */unsigned int) (-((((_Bool)1) ? (((/* implicit */int) (unsigned short)18110)) : (arr_16 [(short)20] [(_Bool)1] [i_5])))))), (arr_10 [i_5])));
                    var_26 = ((/* implicit */short) var_0);
                    arr_20 [18] [i_4] [i_4] [0] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_17 [i_4] [i_4])))), (((/* implicit */int) max((arr_17 [i_4] [i_5]), (arr_14 [i_3] [i_4] [i_4]))))));
                }
            } 
        } 
    } 
    var_27 = var_10;
}
