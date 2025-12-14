/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131766
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_2 [i_0])) * (((((/* implicit */unsigned int) 2147483642)) * (2127467499U)))))) : (var_0)));
        var_14 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)7)), (18446744073709551613ULL)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1])))))));
                        arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)-11);
                        var_16 = ((/* implicit */short) (~(min((min((((/* implicit */unsigned long long int) var_10)), (var_5))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-7)) + (2147483647))) << (((((var_10) + (8215315678345366750LL))) - (20LL))))))))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned long long int) (-(1211880547)));
        var_17 = ((/* implicit */int) ((arr_3 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1))))));
    }
    var_18 -= ((/* implicit */unsigned long long int) var_13);
}
