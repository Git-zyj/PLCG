/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18079
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                arr_4 [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1))))) ? (((/* implicit */int) (signed char)-33)) : ((~(((/* implicit */int) (_Bool)1))))));
                arr_5 [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) min((((min((arr_1 [i_0]), (((/* implicit */int) var_4)))) ^ (((/* implicit */int) ((unsigned short) -605838041))))), (((var_2) | (((/* implicit */int) var_0))))));
                var_10 = arr_2 [i_1 + 1] [i_0 + 1] [i_0 + 1];
                arr_6 [i_0] [i_0] [(short)0] &= ((/* implicit */_Bool) max((var_2), (((((/* implicit */int) var_6)) % (((/* implicit */int) arr_3 [i_0 + 1]))))));
                arr_7 [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((_Bool) arr_2 [i_0 + 1] [i_0 + 1] [i_1 - 1]));
            }
        } 
    } 
    var_11 &= ((/* implicit */long long int) ((((/* implicit */long long int) ((var_4) ? (-2052043557) : (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)15118))))))) == (max((var_7), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (var_7)))))));
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (1900677975) : (((/* implicit */int) (short)30618))))) != (max((((/* implicit */long long int) (-2147483647 - 1))), (8571536194451736579LL)))))), (var_7))))));
    var_13 = ((/* implicit */_Bool) min((var_8), (var_8)));
}
