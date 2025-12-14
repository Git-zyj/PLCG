/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18360
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
    var_14 = ((/* implicit */short) ((((/* implicit */long long int) (-2147483647 - 1))) / (var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) (unsigned char)7);
                arr_5 [i_0] [i_0] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((2530042577623895989ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))) ? (arr_2 [i_0] [i_0]) : (1074836529)));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (_Bool)1))));
                arr_6 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_11)) ? (arr_2 [(signed char)10] [i_1 + 1]) : (arr_2 [i_0] [i_1 + 2])))));
            }
        } 
    } 
}
