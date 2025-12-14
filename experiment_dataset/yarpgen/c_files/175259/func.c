/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175259
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
    var_14 = max((((((/* implicit */_Bool) var_1)) ? (var_13) : (var_5))), (((/* implicit */long long int) var_4)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_10 [9LL] [9LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (arr_3 [i_1 - 2]) : (arr_3 [i_1 + 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (arr_3 [i_1 - 3]) : (arr_3 [i_1 - 3]))))));
                    var_15 *= ((((/* implicit */_Bool) max((-751066569459273067LL), (arr_1 [i_1 + 1] [i_1 - 2])))) ? (max((1LL), (-5276274234983023069LL))) : ((+(arr_1 [i_1 + 1] [i_1 - 3]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) (((-(341377662))) + (((((/* implicit */_Bool) (+(var_0)))) ? (((int) var_5)) : (var_11)))));
    var_17 = var_12;
}
