/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119332
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
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) != (((/* implicit */int) var_8))));
                    var_15 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_3)) ? (4192126098922574488LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2 - 1] [i_0 - 1]))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_2 - 2] [i_0 + 1])))))));
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_2 + 1] [i_1]))) / (arr_5 [i_1] [i_0 + 1] [i_0 - 2] [i_2 - 2]))), (arr_5 [i_1] [i_1] [i_1] [i_2 + 1]))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) & (((((/* implicit */int) (unsigned char)172)) >> (((((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))) - (4933490987395002201LL)))))));
    var_18 = ((/* implicit */signed char) (-2147483647 - 1));
}
