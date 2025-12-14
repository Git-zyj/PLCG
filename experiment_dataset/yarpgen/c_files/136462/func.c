/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136462
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
    for (unsigned short i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) arr_2 [i_0] [i_1] [i_2]);
                            var_16 |= ((/* implicit */int) (-(34359738367LL)));
                            var_17 = ((/* implicit */unsigned int) ((var_9) ? (((-34359738357LL) & (-2130377567097251096LL))) : (((((-34359738367LL) + (9223372036854775807LL))) >> (((1423338922) - (1423338921)))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) var_12);
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((643687187161231740LL), (min((((/* implicit */long long int) (unsigned short)40763)), (34359738379LL)))))) ? (max((((/* implicit */long long int) var_3)), (((var_1) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : (((min((((/* implicit */long long int) (unsigned short)10)), (var_10))) | (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
}
