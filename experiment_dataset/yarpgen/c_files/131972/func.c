/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131972
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) (unsigned short)65534)), (140737488355327ULL)))))) ? (((/* implicit */int) (unsigned short)56899)) : (((/* implicit */int) (unsigned short)8652))));
                    var_20 -= ((/* implicit */short) (!(((/* implicit */_Bool) min((761767885), (((/* implicit */int) arr_5 [i_2 - 4] [i_2 + 2] [i_2 - 2])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_10);
}
