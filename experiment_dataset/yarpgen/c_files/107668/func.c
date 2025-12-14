/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107668
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) var_16))));
    var_20 |= ((/* implicit */unsigned int) (unsigned char)63);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? (max((var_1), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [(unsigned short)7])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)198))))) / (((/* implicit */unsigned int) (+(arr_3 [(unsigned short)12])))))))));
                var_22 = ((/* implicit */_Bool) (short)29885);
            }
        } 
    } 
    var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */int) var_2)) | (((/* implicit */int) min((((/* implicit */unsigned short) max(((short)-26632), (((/* implicit */short) (_Bool)1))))), (var_10))))))));
}
