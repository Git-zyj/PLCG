/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12384
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
    var_14 = (~(var_10));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_1 [i_0])), ((-(arr_2 [i_0] [i_1])))));
                arr_7 [i_1] [i_1] [i_1] = ((((((((/* implicit */int) (short)-17372)) ^ (arr_0 [i_0]))) + (2147483647))) << ((((((+(((/* implicit */int) (short)-17372)))) + (17388))) - (15))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((76378171) ^ (1249187725)))) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) ((_Bool) -5451738001134182986LL))))) + ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)1871)) == (((/* implicit */int) arr_1 [i_0])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) (~((-(var_7))))))));
    var_16 = var_0;
}
