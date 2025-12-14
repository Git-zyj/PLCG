/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12437
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
    var_13 = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (14000366149227339415ULL))))))), (-9139941143068034421LL)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) (-(((arr_5 [i_0] [i_2 - 1] [i_2 - 1]) ? (((/* implicit */int) max((arr_3 [i_1] [i_0]), (arr_3 [i_1] [i_2])))) : (((/* implicit */int) var_7))))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2 - 1])) ? (6573717606412721762ULL) : (11379051273241721139ULL)))))) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) ((_Bool) 7136080092613919380ULL)))));
                }
            } 
        } 
    } 
}
