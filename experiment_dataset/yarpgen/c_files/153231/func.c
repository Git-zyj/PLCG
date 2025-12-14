/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153231
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) max((arr_1 [i_0]), (arr_2 [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
        arr_4 [i_0] [i_0] = ((unsigned short) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_19 = arr_5 [i_1] [i_1];
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_1] [i_1])) & (((/* implicit */int) var_15))));
    }
    var_20 = ((unsigned short) var_7);
    var_21 = var_18;
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (unsigned short i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) max(((unsigned short)65535), ((unsigned short)65521))))) ? ((~(((((/* implicit */int) (unsigned short)24576)) ^ (((/* implicit */int) arr_16 [i_2] [i_2] [i_2])))))) : (((((/* implicit */_Bool) arr_16 [i_3] [i_3 - 1] [(unsigned short)8])) ? ((~(((/* implicit */int) arr_10 [(unsigned short)4] [(unsigned short)4])))) : (((/* implicit */int) arr_15 [i_2] [i_3] [(unsigned short)13] [i_2]))))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) (unsigned short)65534))))) ? (((/* implicit */int) (unsigned short)3)) : ((+(((/* implicit */int) var_15))))))) ? (((/* implicit */int) ((unsigned short) ((unsigned short) (unsigned short)65530)))) : (min((((((/* implicit */_Bool) (unsigned short)65516)) ? (((/* implicit */int) arr_10 [i_2] [i_3])) : (((/* implicit */int) arr_10 [i_2] [i_2])))), (((/* implicit */int) var_12))))));
                    var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) arr_13 [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) var_5)))) + ((-(((/* implicit */int) (unsigned short)65535))))));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) + (((((/* implicit */_Bool) (unsigned short)2047)) ? (((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((unsigned short) (unsigned short)28672)))))));
                    arr_17 [i_3] = ((unsigned short) arr_9 [i_4] [i_2]);
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) max(((unsigned short)36858), ((unsigned short)1)))))));
}
