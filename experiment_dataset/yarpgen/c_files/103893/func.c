/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103893
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
    var_19 = var_16;
    var_20 = max((((/* implicit */unsigned short) var_9)), ((unsigned short)8191));
    var_21 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) min(((unsigned short)57361), ((unsigned short)8205)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_22 -= ((/* implicit */unsigned short) min((((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) > (((/* implicit */int) (unsigned short)8194)))))));
                var_23 = ((unsigned char) ((unsigned char) min((var_0), (((/* implicit */unsigned short) var_3)))));
            }
        } 
    } 
}
