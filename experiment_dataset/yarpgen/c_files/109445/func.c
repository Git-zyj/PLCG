/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109445
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (7190439546348433384ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [5U])))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [3LL] [i_0 - 1] [i_0])) < (((/* implicit */int) (signed char)0))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3)))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) min((var_5), (((/* implicit */unsigned short) arr_3 [i_0 - 1] [i_0 - 1] [i_0])))))));
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65532)) ? (((((/* implicit */_Bool) (unsigned short)65532)) ? (var_0) : (((/* implicit */unsigned long long int) 5992713193604751431LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3)) ? (-8298589410203055523LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54041))))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned int) ((arr_1 [i_0 - 1] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) 1999981541);
    var_14 = ((/* implicit */_Bool) var_2);
    var_15 ^= ((/* implicit */unsigned int) ((unsigned char) var_0));
    var_16 = ((/* implicit */signed char) (-(var_0)));
}
