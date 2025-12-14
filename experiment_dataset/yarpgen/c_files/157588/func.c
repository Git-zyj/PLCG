/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157588
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)56), ((unsigned char)60)))) ? (((/* implicit */int) max((var_7), (var_1)))) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_1)) : (min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) (unsigned char)200)))), (((/* implicit */int) (unsigned char)31))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [(unsigned char)8] [(unsigned char)21] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) min((var_3), ((unsigned char)199)))), (((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (unsigned char)239)))))))));
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((unsigned char) (-(((/* implicit */int) arr_2 [i_1 - 1] [i_2])))))));
                }
            } 
        } 
    } 
}
