/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11468
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_6)) : (var_0))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((var_6) >= (var_6)))), (var_4))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [(unsigned short)3]);
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) ((666583091955682158LL) <= (-666583091955682158LL)))), (max((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1])))));
            }
        } 
    } 
    var_13 ^= ((/* implicit */short) 666583091955682158LL);
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_8))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 18; i_2 += 2) 
    {
        for (int i_3 = 3; i_3 < 18; i_3 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) (-(666583091955682143LL)));
                var_16 |= ((/* implicit */signed char) max((max((arr_9 [i_2 + 2]), (arr_9 [i_2 - 1]))), (arr_9 [i_2 + 2])));
                var_17 = var_5;
                var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 2019019402)) ? (((/* implicit */long long int) var_4)) : (arr_11 [i_2] [i_3]))), (((/* implicit */long long int) (~(arr_10 [i_2] [i_3 - 2] [i_2]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) -666583091955682144LL))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) * (((/* implicit */int) (signed char)0))))) : (arr_10 [(unsigned short)0] [i_2] [i_2 - 2])))) : ((+(-666583091955682143LL)))));
            }
        } 
    } 
}
