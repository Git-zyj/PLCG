/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179668
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)251)))), (((1551098907) ^ (((/* implicit */int) (unsigned char)104))))))));
                    var_14 += ((/* implicit */unsigned short) var_9);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) min(((-(((/* implicit */int) var_8)))), ((((((_Bool)1) ? (((/* implicit */int) (short)20907)) : (((/* implicit */int) (unsigned char)223)))) * (((/* implicit */int) ((unsigned short) var_5)))))));
}
