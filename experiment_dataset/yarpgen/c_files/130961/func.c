/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130961
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
    var_11 *= ((/* implicit */unsigned char) (~(((/* implicit */int) min((var_3), (((/* implicit */signed char) (_Bool)1)))))));
    var_12 = ((/* implicit */unsigned char) 18446744073709551591ULL);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((unsigned char) arr_1 [i_1 - 1]));
                    var_14 = ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((((unsigned long long int) -167201670554485521LL)), (((/* implicit */unsigned long long int) (+(3373267619U)))))))));
}
