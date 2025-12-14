/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135555
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) ((unsigned char) arr_0 [i_0] [i_1]))), (var_3)))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) ((unsigned int) (short)-1))), (((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16))))))), (((/* implicit */unsigned long long int) min((((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) (short)13468))))), (((((/* implicit */_Bool) var_2)) ? (433195767U) : (var_8))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) 5111472810364711649LL)))));
                var_11 = min(((~(max((((/* implicit */unsigned long long int) var_8)), (13014313331215372143ULL))))), (((/* implicit */unsigned long long int) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
            }
        } 
    } 
}
