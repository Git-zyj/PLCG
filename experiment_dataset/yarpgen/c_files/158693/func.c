/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158693
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
    var_10 = ((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) var_5))) - ((~(-5852302887655185756LL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [10LL] [(signed char)8] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (3235096293489829934ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_2 [i_0]))) ? (((/* implicit */int) ((signed char) (signed char)-70))) : ((+(((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (((+(var_6))) >= (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23364)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1604547883)))) + (min((1ULL), (((/* implicit */unsigned long long int) -5852302887655185756LL)))))))))));
            }
        } 
    } 
}
