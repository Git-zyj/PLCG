/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174283
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2])) ? (((/* implicit */int) max((arr_9 [i_1] [i_1] [i_0]), (arr_9 [i_0] [i_0] [i_2])))) : (((((/* implicit */_Bool) ((unsigned short) (unsigned short)36266))) ? (((((/* implicit */int) arr_5 [i_0])) ^ (((/* implicit */int) var_2)))) : (((/* implicit */int) max((arr_0 [i_2]), ((unsigned short)53621))))))));
                    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_0 [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_6 [i_0] [i_1]), (arr_2 [(unsigned short)13])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_15 [i_2] [i_0] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)17129)) ? (((((/* implicit */_Bool) (unsigned short)11915)) ? (((/* implicit */int) (unsigned short)44477)) : (((/* implicit */int) (unsigned short)17129)))) : ((+(((/* implicit */int) (unsigned short)65535)))))), (((/* implicit */int) max((var_2), (arr_14 [i_4 + 1] [i_4] [i_4 - 1] [i_4] [i_4]))))));
                                arr_16 [i_0] [i_4] [i_2] [i_3 + 3] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_2] [i_4])) != (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) & (max(((-(((/* implicit */int) arr_6 [i_0] [i_1])))), (((((/* implicit */int) (unsigned short)32033)) - (((/* implicit */int) (unsigned short)53621))))))));
                                arr_17 [i_0] [i_1] [i_0] [i_2] [(unsigned short)10] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)17129)) - (((/* implicit */int) (unsigned short)18871))));
                                var_22 = arr_3 [i_0];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) >= (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_19)))))))));
    var_24 = var_12;
    var_25 = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_8)) >= (((/* implicit */int) var_12)))) ? ((-(((/* implicit */int) var_17)))) : (((/* implicit */int) var_18)))) - (max(((+(((/* implicit */int) var_16)))), (((/* implicit */int) max(((unsigned short)43221), (var_7))))))));
}
