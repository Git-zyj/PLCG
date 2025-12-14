/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13332
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (unsigned char)52))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)42))))) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 2])) < (((/* implicit */int) var_0)))))));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)44)) >= (((/* implicit */int) (unsigned char)128))));
                    arr_7 [i_0] [i_0 + 2] [i_0 + 2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned char)142)) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))), (((/* implicit */int) (unsigned char)123))));
    var_14 = (unsigned char)0;
}
