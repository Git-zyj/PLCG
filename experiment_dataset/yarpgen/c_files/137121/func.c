/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137121
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
    for (short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [i_0 - 3] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) ((_Bool) (-(arr_0 [i_1])))))));
                var_16 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) arr_0 [i_1 - 3]))), ((~(((/* implicit */int) (short)0))))))) * (min((((arr_1 [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                var_17 &= var_3;
                arr_7 [i_0] [i_1 + 1] [(signed char)23] = ((/* implicit */unsigned long long int) ((short) var_10));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned char) var_15);
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_12))) || ((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_2)))))))))));
    var_20 *= ((/* implicit */long long int) ((((/* implicit */int) (short)0)) != (-1335152814)));
}
