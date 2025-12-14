/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136608
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
    var_20 = var_5;
    var_21 = ((((((/* implicit */_Bool) (-(var_3)))) ? (var_6) : (((520093696U) / (3352113795U))))) * (((((/* implicit */_Bool) var_12)) ? (((var_18) / (2147450880U))) : ((-(var_12))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) || (((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0] [i_0 - 2]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)13534)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) - (((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) << (((((2716942977U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)375))))) - (2716942601U)))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_7 [i_1] [(unsigned short)7] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) 3111481223U))) >> (((((unsigned int) ((((/* implicit */int) var_14)) * (((/* implicit */int) arr_4 [i_1] [3U]))))) - (529771237U)))));
        arr_8 [i_1] &= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)51416))));
        arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))) >> (((((((/* implicit */int) arr_0 [i_1] [i_1])) * (((/* implicit */int) arr_0 [i_1] [i_1])))) - (661004099)))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (unsigned short i_3 = 3; i_3 < 8; i_3 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) arr_5 [i_3]);
                    arr_16 [i_3] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1])) <= (((/* implicit */int) arr_14 [i_1] [i_1]))))), (var_9)))) * ((+(((/* implicit */int) arr_15 [i_3] [i_2] [3U] [(unsigned short)1]))))));
                    arr_17 [i_1] [i_2] |= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_12 [i_3 - 2] [i_2] [i_1]))))));
                    arr_18 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) * (arr_1 [i_1] [i_3]))))))) > ((+(((/* implicit */int) arr_5 [i_2]))))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) var_3)))));
}
