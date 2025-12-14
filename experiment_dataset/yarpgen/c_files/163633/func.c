/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163633
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
    var_20 = ((/* implicit */long long int) var_18);
    var_21 ^= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((var_8) + (9223372036854775807LL))) << (((((-3079915204092717158LL) + (3079915204092717207LL))) - (49LL)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))) <= ((~(((/* implicit */int) (unsigned short)13700))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_17);
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                {
                    arr_15 [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (-(var_1)));
                    arr_16 [i_2] [i_2] [i_4] [i_4] = min((-1LL), (4005002847795217844LL));
                    var_22 = ((/* implicit */unsigned short) (~(max((var_8), (arr_8 [i_3] [i_4])))));
                }
            } 
        } 
    } 
    var_23 = ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) var_7))))) ? (4005002847795217844LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))));
}
