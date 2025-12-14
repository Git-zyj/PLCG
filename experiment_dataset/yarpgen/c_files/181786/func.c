/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181786
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
    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (unsigned char)76)), ((unsigned short)58244)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) var_9);
                    var_18 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) (unsigned short)46169)), (1128456583U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_1])) ? (arr_3 [i_1 - 1]) : (arr_2 [i_0 - 1] [i_1 + 1]))))));
                    arr_8 [i_2] [i_0] = (-(((/* implicit */int) (unsigned short)19367)));
                }
            } 
        } 
    } 
}
