/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119440
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1])))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) var_10)))), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_3)) : (max((((/* implicit */int) ((((/* implicit */int) (unsigned char)198)) == (((/* implicit */int) (_Bool)1))))), ((+(var_2)))))));
                var_14 = ((/* implicit */unsigned int) var_6);
            }
        } 
    } 
    var_15 *= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)68))));
    var_16 |= ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned short)353)), (8229690301695723742LL)));
}
