/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130221
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
    var_10 = ((/* implicit */int) -2608536494100229769LL);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_11 = (-(((/* implicit */int) var_7)));
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) var_8))))) ? (min((arr_1 [i_1]), (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [14LL])))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_1);
    var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+((+(((/* implicit */int) var_3))))))), ((-(var_6)))));
    var_15 = var_2;
}
