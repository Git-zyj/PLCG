/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136085
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
    for (long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_2] [i_1] [i_0] |= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 113409238U)) ? (((/* implicit */int) (short)13496)) : (((/* implicit */int) var_1)))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((1780492843634599415LL) | (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_2]))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((unsigned char) 9920754753714188976ULL));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 1) 
    {
        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
        {
            {
                var_21 = ((/* implicit */int) arr_15 [i_3 + 1] [i_3] [i_4]);
                arr_16 [i_4] = ((/* implicit */signed char) min((1445865316), (1130503534)));
            }
        } 
    } 
}
