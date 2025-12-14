/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172711
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (unsigned short)62444);
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) (_Bool)0);
                }
            } 
        } 
    } 
    var_10 = ((max((((((/* implicit */int) (unsigned char)195)) ^ (var_6))), (min((((/* implicit */int) var_9)), (1028023986))))) > (((/* implicit */int) ((-2021095162) > (((/* implicit */int) var_5))))));
    var_11 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) min(((unsigned short)15852), ((unsigned short)49430)))))), (var_1)));
}
