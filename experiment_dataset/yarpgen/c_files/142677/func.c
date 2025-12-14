/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142677
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((var_0) - (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1006632960))))) < (((var_0) + (var_12)))))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_15 [(_Bool)1] [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_13 [i_2 - 4] [i_3] [i_3] [i_3] [i_3 - 1] [i_3 + 2] [(unsigned char)13])))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)248)) >= (var_6))))));
                                arr_16 [i_0] [i_1] [i_2 + 1] [i_2] [i_3] [i_4] [i_4] = var_12;
                            }
                        } 
                    } 
                    var_18 += ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) (~(1006632966)))))) && (var_3)));
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned char)32)))), (((var_14) + (((/* implicit */int) arr_18 [i_5 + 1] [(_Bool)1]))))))) ? (((((/* implicit */_Bool) max((var_14), (var_14)))) ? ((-(var_5))) : (((/* implicit */int) var_16)))) : (var_7)));
        var_20 = ((/* implicit */int) max((var_20), (((int) ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_19 [i_5])))))));
    }
    for (int i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        var_21 = ((/* implicit */_Bool) var_7);
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((var_5) / (((/* implicit */int) arr_7 [i_6] [i_6] [i_6] [i_6]))))))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1377461451)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) (unsigned char)127))));
    }
}
