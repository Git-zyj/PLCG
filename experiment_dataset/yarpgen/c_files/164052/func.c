/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164052
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
    var_10 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */int) (-((-(((arr_0 [i_0] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_1 [i_0])))))));
                    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((max((arr_3 [i_0] [i_0] [i_1]), (arr_3 [i_1 + 1] [i_0] [i_0]))) == (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_3 [i_1] [i_0] [i_1]) : (arr_3 [i_0] [i_0] [i_1 - 2]))))))));
                    var_12 += (~(min((((((/* implicit */_Bool) 4255026330980995595ULL)) ? (2916139979080815852LL) : (-8902298602186495814LL))), (((arr_0 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_2]))) : (arr_4 [i_0] [i_1 + 2] [i_2]))))));
                    var_13 = ((((/* implicit */_Bool) (+((-(arr_4 [i_0] [(short)11] [i_2])))))) ? (max(((-9223372036854775807LL - 1LL)), (-2916139979080815849LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_8))))));
                }
            } 
        } 
    } 
}
