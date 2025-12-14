/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122843
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 += ((/* implicit */int) var_7);
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(-908199211118016973LL))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */int) arr_6 [i_0] [i_0]);
    }
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        var_22 = arr_13 [i_4];
        var_23 = ((/* implicit */unsigned int) ((_Bool) ((short) arr_13 [i_4])));
        var_24 = ((/* implicit */unsigned short) var_4);
        var_25 |= ((/* implicit */unsigned char) arr_14 [0ULL]);
    }
    for (signed char i_5 = 2; i_5 < 15; i_5 += 3) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((((/* implicit */int) (short)-32757)) & (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) arr_15 [i_5]))))))) : (min((max((((/* implicit */int) arr_15 [i_5])), (var_1))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_15 [i_5 + 1])) : (((/* implicit */int) arr_15 [i_5]))))))));
        arr_18 [i_5] &= ((/* implicit */signed char) ((((/* implicit */int) min((arr_16 [i_5 + 1]), (arr_16 [i_5 - 1])))) >> (((((((var_1) + (2147483647))) >> (((((/* implicit */int) var_13)) - (24389))))) - (445)))));
        arr_19 [i_5] = ((/* implicit */unsigned short) max((var_3), (((/* implicit */int) (unsigned short)21958))));
        arr_20 [i_5] [i_5] = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5 + 1]))) - (-5674827714556505179LL))), (((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned short) arr_15 [i_5])), (arr_16 [i_5])))))));
    }
    var_26 = ((/* implicit */short) var_17);
}
