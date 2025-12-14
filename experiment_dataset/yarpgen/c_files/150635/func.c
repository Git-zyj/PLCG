/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150635
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
    var_16 = var_15;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) ((short) 18446744073709551596ULL));
                    var_18 &= ((/* implicit */short) ((((((/* implicit */int) (unsigned short)65513)) * (((/* implicit */int) (short)-16384)))) / (((((((/* implicit */int) max((((/* implicit */short) var_0)), (var_14)))) + (2147483647))) >> (((arr_6 [(short)12] [i_2 + 3] [(short)12]) + (4785872061867905296LL)))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */signed char) var_11);
                    arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (~(4ULL)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) -378249525);
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((int) ((var_6) * (((/* implicit */long long int) ((((/* implicit */int) var_15)) / (var_2))))))))));
}
