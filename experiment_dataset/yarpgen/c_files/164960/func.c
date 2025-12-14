/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164960
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
    var_11 = ((short) var_1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) & (((/* implicit */int) var_2)))) << (((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_1 + 1] [(short)16])))) + (79)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [(unsigned short)13]))));
                    var_13 -= ((/* implicit */signed char) arr_4 [i_1] [i_1]);
                    var_14 = ((/* implicit */short) (((~(((/* implicit */int) var_1)))) - (min((((var_2) ? (arr_1 [i_1]) : (((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) var_4)) < (((((/* implicit */int) var_1)) & (((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-4974))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))))));
    var_16 = ((/* implicit */short) var_10);
}
