/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141112
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
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (+(var_15)))))) ? ((-(((/* implicit */int) max(((_Bool)0), ((_Bool)1)))))) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_0]) : (arr_3 [i_0])))) ? (((arr_3 [i_1]) - (arr_3 [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */signed char) var_6);
                }
            } 
        } 
    } 
    var_18 = (-((-(((/* implicit */int) var_2)))));
    var_19 &= ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) 1719054963U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), ((unsigned char)91))))))));
    var_20 = ((/* implicit */signed char) var_0);
}
