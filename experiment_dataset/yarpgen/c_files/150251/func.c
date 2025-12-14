/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150251
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
    var_11 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_1] = ((_Bool) var_4);
                    arr_10 [(_Bool)1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)96)) | (((/* implicit */int) (unsigned char)32))));
                }
            } 
        } 
    } 
    var_12 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))));
}
