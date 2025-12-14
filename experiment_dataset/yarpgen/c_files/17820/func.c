/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17820
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) 9223372036854775801LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (9223372036854775798LL))) - (((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) arr_0 [i_0]))))) ? ((+(9223372036854775786LL))) : (((/* implicit */long long int) min((arr_0 [i_2 - 2]), (((/* implicit */int) arr_4 [i_2] [i_1] [i_0])))))))));
                    arr_10 [19ULL] [i_1] [i_2 + 1] = ((/* implicit */int) (-(-9223372036854775802LL)));
                    arr_11 [i_0] = ((/* implicit */int) ((((/* implicit */int) ((min((((/* implicit */long long int) 1U)), (var_15))) >= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2 + 1])))))) == (((/* implicit */int) (!(var_11))))));
                    var_17 = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_2 - 2] [i_2] [i_2 + 1]))))) ^ (arr_8 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2]));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) (signed char)25);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 9223372036854775801LL)) ? (((/* implicit */unsigned long long int) -9223372036854775781LL)) : (17716801782975927060ULL))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
}
