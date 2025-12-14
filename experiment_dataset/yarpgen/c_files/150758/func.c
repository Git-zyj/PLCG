/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150758
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
    for (int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) / ((+(((/* implicit */int) arr_1 [i_0]))))))) : (var_11)));
        var_21 = ((/* implicit */signed char) (+(2470114586U)));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned int) 1824852709U))) ? (((/* implicit */int) min((((/* implicit */short) arr_11 [i_1] [i_2] [14] [14] [14] [i_1])), (arr_7 [i_3] [i_2] [i_1])))) : ((-(((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_4] [i_4])))))) % (((/* implicit */int) arr_9 [2U] [(unsigned short)9] [i_2] [i_4]))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min((((/* implicit */short) (((+(1465964522U))) != (((((/* implicit */_Bool) var_5)) ? (arr_8 [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))))))), (((short) arr_10 [i_2] [i_4])))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2470114587U)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))));
    }
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) + (var_1)))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) & ((-2147483647 - 1))))))))));
    var_26 = ((/* implicit */_Bool) var_14);
}
