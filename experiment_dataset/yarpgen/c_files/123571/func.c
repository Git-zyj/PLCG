/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123571
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_7 [i_2 + 1] [i_1] [i_0 + 1] [(unsigned char)12])) * (((/* implicit */int) var_3))))))));
                    var_16 -= ((/* implicit */short) (((-(arr_6 [i_0] [i_0 - 1] [i_2 + 2]))) * (min(((-(arr_4 [i_0] [i_0]))), (((/* implicit */unsigned long long int) var_4))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(261120ULL)))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((18351039950470342237ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15640)))))))))))))));
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (signed char)(-127 - 1)))));
    var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((signed char)33), (var_14))))));
    var_20 &= ((/* implicit */signed char) ((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)492)) ? (1ULL) : (((/* implicit */unsigned long long int) -342303124)))))))));
}
