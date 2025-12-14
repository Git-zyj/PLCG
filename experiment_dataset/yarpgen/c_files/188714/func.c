/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188714
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 2] [i_2]))) < (var_5)))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1])) ? (max((((/* implicit */int) arr_6 [i_1] [i_0])), (-569365619))) : (((/* implicit */int) ((unsigned short) 1476182887)))))));
                    var_10 = ((/* implicit */unsigned short) -1760869470);
                }
            } 
        } 
    } 
    var_11 |= ((/* implicit */int) ((unsigned short) max((var_6), (((unsigned short) var_8)))));
    var_12 = ((/* implicit */int) var_6);
    var_13 += ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_3))))), (((int) 651175047)))))));
    var_14 = ((/* implicit */unsigned short) ((unsigned int) min((((int) (unsigned short)207)), ((-(var_0))))));
}
