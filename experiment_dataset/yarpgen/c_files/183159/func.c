/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183159
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
    var_12 = min((var_1), (((/* implicit */unsigned long long int) var_10)));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_13 &= ((/* implicit */_Bool) min((min((((/* implicit */long long int) var_11)), (arr_2 [i_2]))), (((/* implicit */long long int) (unsigned short)17012))));
                    var_14 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_2])) != (((/* implicit */int) (signed char)63)))), ((!(((/* implicit */_Bool) 0))))));
                    var_15 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (18446744073709551612ULL)));
                }
            } 
        } 
    } 
}
