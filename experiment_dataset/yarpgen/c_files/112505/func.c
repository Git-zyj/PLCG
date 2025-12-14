/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112505
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
    var_20 = ((/* implicit */unsigned char) var_1);
    var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((((/* implicit */_Bool) var_2)) || (var_5))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((((/* implicit */unsigned char) var_15)), (var_14)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) var_2))))));
    var_22 -= ((/* implicit */unsigned short) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */_Bool) var_0)) ? (var_4) : (((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_12))))))));
                    var_24 = ((/* implicit */unsigned short) arr_0 [i_0]);
                    arr_10 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_2]))));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (min((arr_7 [i_0] [i_1] [i_0]), (((/* implicit */int) arr_8 [i_0]))))))) / (((var_15) ? (((((/* implicit */_Bool) var_4)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) / (((/* implicit */int) arr_4 [5] [5] [5])))))))));
                    var_26 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_4 [(short)4] [(short)4] [i_2])))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1]))))), (arr_6 [i_0 + 1] [i_1] [(short)13])))) : (min((((/* implicit */int) var_5)), ((((_Bool)0) ? (((/* implicit */int) (unsigned short)63709)) : (((/* implicit */int) (unsigned short)19745))))))));
                }
            } 
        } 
    } 
}
