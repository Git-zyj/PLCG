/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151644
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_16 = -6078347562168721378LL;
                arr_4 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((arr_2 [1] [1] [i_0]) >> (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))))))) : (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((((arr_2 [1] [1] [i_0]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) 1743319646U);
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            {
                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)49465))));
                var_19 = ((/* implicit */_Bool) arr_5 [i_2]);
            }
        } 
    } 
}
