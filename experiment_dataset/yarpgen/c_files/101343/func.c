/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101343
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
    var_17 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) (((((-9223372036854775807LL - 1LL)) ^ ((~((-9223372036854775807LL - 1LL)))))) > (-9223372036854775801LL)));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_1 - 1])) * (9412924371589614262ULL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) -9223372036854775801LL);
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_11 [i_2] [i_2] [i_2]))));
                arr_14 [i_3] = (unsigned char)185;
            }
        } 
    } 
}
