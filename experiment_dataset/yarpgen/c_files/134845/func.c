/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134845
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
    var_15 = ((/* implicit */unsigned short) min((((((/* implicit */int) var_10)) | (((/* implicit */int) max((var_12), (var_2)))))), (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                arr_4 [(unsigned short)10] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_12))));
                arr_5 [(unsigned short)4] [i_1 + 1] = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))) << (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_9))))))), (((/* implicit */int) var_7))));
                arr_6 [(unsigned short)4] = var_13;
            }
        } 
    } 
    var_16 = var_6;
    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_4))))) / (((/* implicit */int) max((var_12), (var_11)))))) ^ (((/* implicit */int) var_5))));
}
