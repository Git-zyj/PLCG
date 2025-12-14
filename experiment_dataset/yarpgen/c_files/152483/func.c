/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152483
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
    var_15 -= ((/* implicit */unsigned long long int) var_12);
    var_16 &= ((/* implicit */short) min(((-(max((((/* implicit */unsigned long long int) var_0)), (18446744073709551603ULL))))), (var_11)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (3878403969341849558LL) : (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)0), (var_1)))))))) ? (((/* implicit */int) min(((signed char)-1), (((/* implicit */signed char) max((var_5), (var_5))))))) : (max((max((((/* implicit */int) (signed char)-1)), (var_0))), (((/* implicit */int) arr_3 [i_0] [i_0]))))));
                    arr_6 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) * (((/* implicit */int) min((((/* implicit */short) (signed char)77)), (arr_3 [i_0] [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_0]))))))))) : (arr_4 [i_0])));
                }
            } 
        } 
    } 
}
