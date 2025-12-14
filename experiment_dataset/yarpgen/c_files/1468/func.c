/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1468
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1 + 2] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((short) (_Bool)0)), (max((arr_5 [i_0] [i_0] [i_1 + 3] [i_2]), (((/* implicit */short) arr_3 [i_0] [i_0] [i_0]))))))), (var_4)));
                    var_19 = ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)182)) < (((/* implicit */int) var_15))))), ((unsigned short)21348)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_7);
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1061038935)) ? (18256671412009336328ULL) : (max((((/* implicit */unsigned long long int) var_5)), (2106885557322436178ULL)))))) ? ((~(646548008259708768ULL))) : (((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)31808)), (var_14)))) ^ (var_6))));
    var_22 = ((/* implicit */unsigned char) (short)31818);
}
