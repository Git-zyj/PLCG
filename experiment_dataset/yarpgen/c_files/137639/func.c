/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137639
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
    var_12 ^= ((/* implicit */unsigned short) ((unsigned int) (((~(var_6))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1711500206)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */int) -4911158212525799522LL);
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3983347773866083269LL)) ? (1711500225) : (((/* implicit */int) (unsigned char)59))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) (+(var_2)));
}
