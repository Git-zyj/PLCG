/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148308
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
    var_15 = ((unsigned char) (-(((/* implicit */int) ((unsigned char) (unsigned char)13)))));
    var_16 = var_12;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), ((unsigned char)243)));
                    var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)246))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 1])))) : (((((/* implicit */int) arr_8 [i_2] [(unsigned char)6] [i_2 + 1])) % (((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 1]))))));
                }
                var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_0] [i_0]))));
            }
        } 
    } 
}
