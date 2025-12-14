/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187381
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_0] &= ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0]);
                    var_11 = ((/* implicit */signed char) (unsigned char)255);
                }
            } 
        } 
    } 
    var_12 = ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)3)), ((unsigned short)47388))))) / (431640495U));
}
