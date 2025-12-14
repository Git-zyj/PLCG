/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102724
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
    var_17 = ((/* implicit */int) (unsigned char)85);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_18 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) (unsigned short)39936)) : (1021842448)))), (4U)))) || (((/* implicit */_Bool) (unsigned short)48957)));
                    arr_9 [i_0] = ((/* implicit */short) ((max((arr_7 [i_2] [i_1 - 1] [18ULL]), (((/* implicit */int) arr_6 [i_1 - 3] [i_2 + 1] [i_0])))) << (((((((/* implicit */_Bool) -17187973)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (var_5))))) : (((unsigned long long int) arr_2 [i_1])))) - (18446744073709551608ULL)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) var_14);
}
