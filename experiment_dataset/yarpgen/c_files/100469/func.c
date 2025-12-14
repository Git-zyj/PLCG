/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100469
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
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((-3007974113496003125LL), (-3007974113496003113LL))))));
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0])) ? (((((((((/* implicit */_Bool) arr_6 [6U] [i_1 - 1])) ? (arr_4 [i_0 - 3] [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) + (9223372036854775807LL))) << (((((-3007974113496003113LL) + (3007974113496003127LL))) - (13LL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (16252928LL) : (-3007974113496003113LL)))) ? (3007974113496003125LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_12 [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 3007974113496003125LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (max((((/* implicit */unsigned long long int) 3782025929250239018LL)), (var_10))))), (((/* implicit */unsigned long long int) arr_8 [i_3] [i_3]))));
                arr_13 [i_2] [i_3] = ((signed char) ((((/* implicit */_Bool) 5075845328595448855ULL)) ? (12718043540629033058ULL) : (((/* implicit */unsigned long long int) -1407328321))));
            }
        } 
    } 
}
