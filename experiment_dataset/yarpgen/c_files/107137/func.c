/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107137
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
    var_17 += ((/* implicit */_Bool) var_13);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_1 + 4] [i_1 + 4] [i_2] [i_2 + 1])), (arr_9 [i_1 + 4] [i_0] [(unsigned char)19])))), (((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) arr_2 [i_1 - 3]))))));
                    var_18 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) arr_7 [i_1 + 4] [i_1] [i_2 - 3] [i_0])) : (((/* implicit */int) (signed char)-32)))));
                }
            } 
        } 
    } 
}
