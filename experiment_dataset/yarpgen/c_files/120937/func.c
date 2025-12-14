/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120937
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
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned char) ((2161727821137838080LL) >> (((/* implicit */int) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_4))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [10])), (-7612947655989214540LL)))))))));
                arr_5 [i_0] [i_0] = ((((/* implicit */int) ((signed char) arr_2 [i_0 + 1]))) << (((((((/* implicit */_Bool) min((-2131566201), (var_10)))) ? (arr_0 [i_0 + 2]) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0])), (var_7)))))) - (12333087354056793269ULL))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((-2131566201) <= ((((_Bool)1) ? (631303665) : (2042150689)))))), (var_8)));
    var_13 = ((/* implicit */signed char) var_1);
    var_14 &= ((/* implicit */long long int) -2042150667);
}
