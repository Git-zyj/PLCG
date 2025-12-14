/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106017
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
    var_13 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 3962299598U))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)68))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)28672))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned int) 3962299596U))) ? (((/* implicit */int) arr_5 [i_0] [i_2 - 2] [i_2 - 2] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0])))) << (((((/* implicit */int) max((arr_1 [i_2 - 2] [i_2 - 2]), (arr_1 [i_2 + 1] [i_2 - 1])))) - (66)))));
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) max((max((min((((/* implicit */unsigned long long int) (unsigned char)123)), (arr_7 [i_0] [i_1] [i_0] [i_2]))), (((/* implicit */unsigned long long int) arr_5 [i_2 + 2] [i_1] [i_1] [i_2 + 2])))), (((/* implicit */unsigned long long int) var_6))));
                }
            } 
        } 
    } 
}
