/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166294
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
    var_11 = ((/* implicit */unsigned long long int) (unsigned short)0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) var_0)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_2 [i_0])))))))));
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((((/* implicit */_Bool) max((arr_1 [i_0] [i_1]), ((short)(-32767 - 1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65533)) + (((/* implicit */int) arr_3 [i_0] [i_0]))))) : (18446744073709551595ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_9)))))) & (var_7)))) ? (((/* implicit */int) min((var_5), (var_10)))) : ((+((+(((/* implicit */int) var_10)))))))))));
    var_15 ^= ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 1) 
    {
        for (short i_4 = 2; i_4 < 15; i_4 += 2) 
        {
            {
                arr_12 [i_4 + 2] [i_3 - 1] = ((/* implicit */unsigned short) 18446744073709551615ULL);
                var_16 = ((/* implicit */unsigned short) 0ULL);
            }
        } 
    } 
}
