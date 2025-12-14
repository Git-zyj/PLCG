/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138526
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 1599683952U)) < (9515941420177279893ULL)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)0)) << (((arr_0 [i_1]) + (1281486742)))))))) ? (var_0) : ((+((+(var_0)))))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -4305860824329574916LL)) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) (unsigned char)61)))))));
            }
        } 
    } 
    var_16 |= ((/* implicit */unsigned long long int) var_6);
    var_17 &= ((/* implicit */unsigned int) var_0);
}
