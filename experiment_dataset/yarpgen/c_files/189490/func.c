/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189490
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
    var_20 = var_18;
    var_21 = ((/* implicit */signed char) ((((var_18) < (((/* implicit */long long int) ((unsigned int) var_8))))) ? (((long long int) var_18)) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (-2053581088)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    var_22 = (-(min((((/* implicit */int) (signed char)88)), (arr_0 [i_1]))));
                    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((unsigned int) -14770885)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) (short)7);
}
