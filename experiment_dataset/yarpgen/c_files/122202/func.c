/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122202
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
    var_19 = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1))));
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)0)), ((unsigned short)25504))))));
    var_21 = ((/* implicit */_Bool) ((((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_13)))) * (((/* implicit */int) min((((_Bool) (short)3670)), (min(((_Bool)1), ((_Bool)1))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 7; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */_Bool) var_0);
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) max(((unsigned short)63026), (((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_0] [i_2]))))), ((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_14)))))));
                    var_24 -= ((/* implicit */long long int) (+(((/* implicit */int) (signed char)44))));
                }
            } 
        } 
    } 
}
