/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135207
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [3LL] [(short)0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4917430)) ? ((+(((/* implicit */int) ((short) var_5))))) : (((/* implicit */int) arr_0 [i_0] [i_1]))));
                var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) < (var_9))))));
                var_18 = ((/* implicit */unsigned long long int) min((var_18), ((~(((unsigned long long int) 2104016184938088084ULL))))));
            }
        } 
    } 
    var_19 = var_15;
    var_20 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? ((~(18446744073709551613ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) < (var_2))))))));
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (long long int i_4 = 1; i_4 < 15; i_4 += 2) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((int) (-(((/* implicit */int) arr_6 [i_4 + 2])))));
                    arr_13 [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 3ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1154775820)))))))) < (((/* implicit */long long int) (+(((/* implicit */int) (short)-32489)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))) < (18446744073709551592ULL))))) | ((-(var_7)))))));
}
