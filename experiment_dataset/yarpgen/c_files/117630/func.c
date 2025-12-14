/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117630
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0])), ((unsigned short)13944))))));
                arr_6 [i_1] = ((/* implicit */signed char) (unsigned short)65060);
                arr_7 [i_0] = ((/* implicit */unsigned short) (unsigned char)215);
                arr_8 [i_0] [i_0] [(unsigned short)14] = var_10;
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_17)) | (((/* implicit */int) var_0)))) | (((/* implicit */int) ((((/* implicit */int) (unsigned short)65060)) >= (((/* implicit */int) (short)-26655)))))))) ? (((/* implicit */int) var_12)) : ((~(((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16))))))));
    var_21 = var_3;
}
