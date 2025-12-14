/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143396
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) (-(min((((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_10)))), ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))))));
                    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (arr_4 [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_4 [(short)12] [10] [i_2]))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) max((var_13), (((var_4) + (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))) - (((/* implicit */int) var_6))))))));
    var_14 = ((/* implicit */unsigned long long int) (~(((max((((/* implicit */int) var_10)), (var_4))) - ((+(var_4)))))));
}
