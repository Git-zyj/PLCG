/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168650
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
    var_19 = ((/* implicit */long long int) ((short) ((unsigned int) max((var_0), (((/* implicit */unsigned char) var_15))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_1] &= ((/* implicit */long long int) min((((/* implicit */int) arr_4 [i_0])), (((((/* implicit */int) max((((/* implicit */unsigned short) (short)-271)), (var_13)))) | (((((/* implicit */int) (signed char)32)) * (((/* implicit */int) (unsigned short)44683))))))));
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((var_6) != (((/* implicit */long long int) (-((+(((/* implicit */int) (short)9603))))))))))));
                var_21 ^= ((/* implicit */int) ((long long int) (~(var_12))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            {
                var_22 = ((/* implicit */_Bool) arr_7 [i_2] [i_3]);
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_3])) ? (arr_7 [4LL] [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_12)) / (arr_8 [i_2] [i_3]))))));
            }
        } 
    } 
}
