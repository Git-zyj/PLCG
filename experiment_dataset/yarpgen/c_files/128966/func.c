/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128966
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
    var_12 |= ((/* implicit */short) max((((/* implicit */long long int) ((((int) var_4)) / (((/* implicit */int) ((signed char) var_2)))))), (max((((/* implicit */long long int) (unsigned short)16)), (var_1)))));
    var_13 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) <= (((/* implicit */int) var_11)))) || (((/* implicit */_Bool) var_9))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned int) arr_3 [i_0] [i_2]);
                    arr_8 [13U] [(signed char)0] [i_2] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned short)56384))))));
                    arr_9 [i_0] [14LL] [9U] [i_0] = ((/* implicit */unsigned short) var_4);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) var_7);
}
