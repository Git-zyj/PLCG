/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145255
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
    var_20 = var_9;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (((!(((_Bool) var_10)))) || (((/* implicit */_Bool) (+(((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) var_2)))))))));
                    arr_9 [i_2] [(unsigned char)15] [(_Bool)1] = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [(unsigned short)12])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)40796)))))), (((((/* implicit */int) var_3)) + (((/* implicit */int) var_0))))));
                }
            } 
        } 
    } 
}
