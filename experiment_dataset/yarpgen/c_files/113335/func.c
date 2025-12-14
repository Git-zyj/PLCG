/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113335
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (arr_7 [i_0] [i_1 - 1] [i_1 + 1] [i_2]))))));
                    arr_9 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */signed char) arr_7 [i_1 - 1] [i_1] [i_1 + 1] [i_1]);
                    arr_10 [i_2] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_2])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9179395046436684593ULL)) ? (var_4) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_2] [i_1]))))) ? ((-(9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))))));
                    arr_11 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) == (((long long int) arr_6 [i_0] [i_1 - 1] [i_2]))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)155)) ? ((-9223372036854775807LL - 1LL)) : (-144115188075855872LL)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61483))) : (((var_15) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))) : (max((((((/* implicit */_Bool) var_5)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) -895474568258211576LL)) ? (9223372036854775807LL) : (9223372036854775807LL)))))));
    var_22 = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) (~(-604380058)))) : (4396972769280LL));
}
