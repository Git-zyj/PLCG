/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130427
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
    var_12 *= ((/* implicit */unsigned short) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)35124)) : (((/* implicit */int) var_5))))), ((~(198594110837378039LL))))), (var_10)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) min(((unsigned short)41027), ((unsigned short)40997)))), (-9223372036854775802LL))))));
                    arr_12 [i_2] [i_1] [i_2] = ((/* implicit */long long int) ((unsigned short) (+((-(arr_0 [i_0] [i_0]))))));
                }
            } 
        } 
    } 
}
