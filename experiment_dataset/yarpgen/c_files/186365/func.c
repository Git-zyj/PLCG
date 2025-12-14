/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186365
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (33554432U)))))))));
    var_11 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_9), (2962056887U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3))) / (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 2962056882U)))) ? (((/* implicit */int) ((1332910414U) < (var_3)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-21402)) && (((/* implicit */_Bool) 1332910414U)))))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) max((((/* implicit */unsigned int) var_2)), (var_3))))) + (((/* implicit */int) arr_2 [i_0]))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                var_14 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 2])) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1]))))));
                arr_7 [i_1] = ((/* implicit */_Bool) ((max((arr_4 [i_1 + 1] [i_1] [i_1]), (var_6))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) && (((/* implicit */_Bool) ((short) 3676860462U)))))))));
                arr_8 [i_1] = ((/* implicit */signed char) var_1);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 2; i_2 < 7; i_2 += 1) 
    {
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (~(((((/* implicit */int) var_0)) << (((/* implicit */int) ((_Bool) arr_10 [i_2]))))))))));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(((((/* implicit */int) arr_2 [i_2 - 1])) ^ (((/* implicit */int) arr_2 [i_2 + 1])))))))));
        var_17 = ((/* implicit */_Bool) var_0);
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    var_18 -= ((/* implicit */short) var_2);
                    var_19 ^= ((/* implicit */unsigned short) arr_4 [i_3] [i_3] [i_3]);
                }
            } 
        } 
        var_20 = ((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2]);
    }
}
