/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119540
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
    var_16 = ((/* implicit */unsigned char) (short)24);
    var_17 = ((/* implicit */unsigned int) (~((~(min((((/* implicit */int) var_13)), (var_8)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) var_3);
                    var_19 = ((unsigned char) arr_6 [11U]);
                    var_20 = ((/* implicit */unsigned char) ((((arr_4 [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 2]))) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (838776940U))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_11), (0U)))) ? (((/* implicit */int) (short)-25966)) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)137)), (arr_2 [16U])))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) ((unsigned short) var_13)))));
    var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & ((~(((/* implicit */int) var_10))))))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) var_15))));
}
