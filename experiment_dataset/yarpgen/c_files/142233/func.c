/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142233
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
    var_19 = ((/* implicit */unsigned char) max(((-(min((1444347173U), (((/* implicit */unsigned int) var_10)))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_11))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_0);
        arr_4 [(unsigned char)20] |= ((/* implicit */unsigned char) var_8);
    }
    for (unsigned char i_1 = 4; i_1 < 16; i_1 += 1) 
    {
        arr_9 [i_1] [i_1] = max((((unsigned int) arr_8 [i_1 - 4])), (min((((/* implicit */unsigned int) var_15)), (var_8))));
        arr_10 [10U] |= min((min((max((((/* implicit */unsigned int) var_12)), (1144291050U))), (((/* implicit */unsigned int) var_15)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (short i_3 = 2; i_3 < 15; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    {
                        arr_19 [i_1] [i_3 - 2] [i_2] [(short)13] [i_1] = ((((/* implicit */_Bool) min((arr_8 [i_1 - 1]), ((short)-11867)))) ? (((unsigned int) min((var_8), (794342702U)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))));
                        var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) max(((short)1885), (((/* implicit */short) (unsigned char)247))))), (((unsigned int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_13 [i_1] [i_1 - 4] [(short)5] [i_1 + 1])))))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((unsigned int) (short)12196))));
                    }
                } 
            } 
        } 
        var_22 -= ((/* implicit */short) var_7);
        arr_20 [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) var_13)), (((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)214)))))));
    }
    for (short i_5 = 3; i_5 < 16; i_5 += 3) 
    {
        var_23 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (short)-24110)))))) / (var_14)));
        arr_24 [i_5] = min((((short) var_5)), (((/* implicit */short) min((var_4), (arr_22 [i_5] [i_5 + 3])))));
    }
    var_24 = ((((/* implicit */_Bool) (unsigned char)15)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (short)-11850))))))));
    var_25 -= ((/* implicit */unsigned char) ((3150676256U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120)))));
}
