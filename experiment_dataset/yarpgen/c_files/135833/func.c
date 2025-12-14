/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135833
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
    var_11 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_2))));
    var_12 ^= ((/* implicit */unsigned short) ((unsigned char) var_7));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_3))));
    var_14 ^= ((/* implicit */unsigned short) (((+(((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_7)))))) * (((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_0))))) - (((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_0 [(unsigned short)16] [(unsigned short)16])) ^ (((/* implicit */int) arr_3 [i_0 - 3] [i_0] [i_0 - 3])))), (((((((/* implicit */int) var_1)) * (((/* implicit */int) arr_4 [i_1] [i_0] [i_0])))) / (((((/* implicit */int) arr_4 [i_0] [(unsigned short)5] [i_0])) / (((/* implicit */int) arr_2 [i_0]))))))));
                arr_6 [i_0] = ((unsigned char) (unsigned char)8);
            }
        } 
    } 
}
