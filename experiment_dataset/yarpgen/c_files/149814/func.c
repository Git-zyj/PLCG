/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149814
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_1 - 4]);
                var_12 = ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0] [i_1 - 4])) - ((~(-2147483623))))) % (((var_5) / (((/* implicit */int) arr_1 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                arr_12 [i_3 - 1] [i_2] [i_2] = ((/* implicit */unsigned short) var_6);
                arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_3 - 1] [i_2]);
            }
        } 
    } 
}
