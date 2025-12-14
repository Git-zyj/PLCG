/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123661
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((+(1780251311259017961LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (var_4)))) ? (((((/* implicit */int) var_6)) & (var_3))) : (((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_15 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */int) arr_3 [i_1])) : ((+(1682235462)))))) && (((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */int) var_6)) != (var_3)))), (arr_3 [i_1]))))));
        arr_5 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_3 [i_1])) * (((/* implicit */int) arr_3 [i_1])))), ((+(((/* implicit */int) ((short) var_12)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] = ((((/* implicit */_Bool) (+(arr_6 [i_2])))) && (((/* implicit */_Bool) max((var_8), (((/* implicit */signed char) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_11)))))))));
        var_16 = ((min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) && (((/* implicit */_Bool) var_12))))))) & (((((/* implicit */int) (signed char)18)) / (((/* implicit */int) (unsigned short)3)))));
    }
    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    {
                        arr_22 [i_3] [i_3] [i_3] [i_3] = arr_17 [i_6];
                        arr_23 [i_3] [14] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) -2147483647)) || (((/* implicit */_Bool) 6286720122400077423LL))))));
                    }
                } 
            } 
        } 
        arr_24 [i_3] = ((/* implicit */short) (+(((16777215U) - (29U)))));
    }
    var_17 |= ((/* implicit */unsigned int) var_9);
    var_18 = ((/* implicit */signed char) min(((+((-(((/* implicit */int) var_6)))))), (((/* implicit */int) var_1))));
}
