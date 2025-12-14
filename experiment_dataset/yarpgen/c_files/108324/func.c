/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108324
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [(signed char)6] = ((/* implicit */unsigned char) 8942670250594473640LL);
                    arr_9 [i_0] = ((/* implicit */long long int) ((unsigned long long int) -8942670250594473640LL));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) min((arr_6 [i_2] [i_2] [(signed char)7] [(signed char)7]), (((/* implicit */unsigned int) var_4))))), (7502726243330066740LL))), (((8942670250594473668LL) & (-7502726243330066741LL)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_15);
}
