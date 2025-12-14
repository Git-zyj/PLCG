/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174082
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_1] [i_2] [i_2 - 1] [i_3] [(signed char)22] = ((/* implicit */unsigned short) 9223372036854775803LL);
                                arr_20 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) 9223372036854775803LL);
                                var_14 -= ((/* implicit */unsigned int) -5778075767153664928LL);
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                arr_21 [i_0] [i_1] = ((/* implicit */short) 1810595086);
            }
        } 
    } 
    var_16 |= ((/* implicit */short) var_2);
    var_17 = var_6;
    var_18 |= ((/* implicit */signed char) var_8);
    var_19 = ((/* implicit */unsigned short) var_8);
}
