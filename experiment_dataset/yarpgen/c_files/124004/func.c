/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124004
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) var_4)), (var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) var_13)))), (((((/* implicit */int) var_13)) <= (((/* implicit */int) (short)-21247)))))))) : (((((var_14) * (var_14))) * (((/* implicit */unsigned long long int) var_5))))));
    var_21 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((max((var_18), (arr_2 [i_0]))), (arr_2 [i_2 - 1]))))));
                    arr_8 [i_0] [i_0] [i_0] [(short)0] = ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0] [i_0]);
                    arr_9 [i_2 - 1] [i_1] [(short)1] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)27);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) -5316834321430931993LL);
}
