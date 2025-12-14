/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15037
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)9694)) < (((/* implicit */int) var_1))))) % (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))));
    var_11 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)14951)) > (var_2))))))));
    var_12 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_5))))))) ? (((((arr_1 [i_0]) << (((((/* implicit */int) (signed char)-37)) + (82))))) << (((-2527667125227629650LL) + (2527667125227629651LL))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117))) : (arr_1 [i_0])))));
                arr_5 [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12999)) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1]))))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */int) (+(18446744073709551615ULL)));
            }
        } 
    } 
}
