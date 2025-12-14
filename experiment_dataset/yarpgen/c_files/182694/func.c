/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182694
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_10)))))));
    var_13 = ((/* implicit */unsigned int) 562949953413120ULL);
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-2147483647 - 1))), (var_11)))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-62))) / (2910194937339410290LL))))))), (max((1023U), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)62)))))))));
    var_15 |= ((/* implicit */short) (+(2910194937339410290LL)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_16 -= ((/* implicit */long long int) (short)0);
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(min((var_1), (((/* implicit */unsigned int) var_10))))))) * (max((((/* implicit */unsigned long long int) -2910194937339410290LL)), (562949953413131ULL)))));
                var_17 = ((/* implicit */int) (+(((((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) var_10)))) ? ((~(35182224605184LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
            }
        } 
    } 
}
