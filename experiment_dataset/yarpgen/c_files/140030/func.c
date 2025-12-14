/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140030
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_16 &= var_10;
                    var_17 = ((/* implicit */_Bool) min((var_17), (((((((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) 201326592U))))) ? (var_13) : (((/* implicit */long long int) min((4294967282U), (((/* implicit */unsigned int) arr_6 [i_2] [i_0] [i_0]))))))) != (((arr_1 [i_0] [i_2]) | (((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (arr_1 [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
                    arr_8 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1])), (((unsigned long long int) arr_1 [i_0] [i_2])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned short) var_0))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_15);
}
