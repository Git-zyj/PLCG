/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148484
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
    for (short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) ((min((((((var_10) + (9223372036854775807LL))) >> (((6210231251157898149LL) - (6210231251157898147LL))))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)33))))))) * (((/* implicit */long long int) (~((~(((/* implicit */int) arr_3 [i_1])))))))));
                arr_4 [i_1] = ((signed char) ((((/* implicit */int) arr_1 [i_0 - 1])) + (((/* implicit */int) var_2))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) min((max((var_4), (((/* implicit */short) (signed char)(-127 - 1))))), (((/* implicit */short) var_8))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65528))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (short)21874))))))));
    var_14 = ((/* implicit */short) var_1);
}
