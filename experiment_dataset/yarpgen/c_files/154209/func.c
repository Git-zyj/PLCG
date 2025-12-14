/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154209
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) var_8);
                arr_5 [i_1] = ((/* implicit */unsigned char) var_4);
                arr_6 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_4)), (((arr_1 [i_0] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                var_12 -= ((/* implicit */signed char) ((short) -5182705448640407536LL));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_14 [i_3] = ((/* implicit */unsigned long long int) max((((long long int) (short)22960)), (((/* implicit */long long int) (~(-589311561))))));
                var_13 = ((/* implicit */short) (unsigned short)11377);
                var_14 = ((/* implicit */long long int) min((((unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_0))))), (((/* implicit */unsigned long long int) var_6))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((long long int) ((_Bool) var_3)));
}
