/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104934
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
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) min((((/* implicit */int) var_4)), ((~(var_1))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(max(((+(arr_3 [i_0]))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)228))))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */short) (~((-(arr_1 [i_0])))));
                }
            } 
        } 
    } 
}
