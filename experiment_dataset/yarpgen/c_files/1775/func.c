/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1775
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
    var_11 = ((/* implicit */unsigned short) min((-280222543), (280222544)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) ((var_2) ? ((-(((/* implicit */int) (!(var_2)))))) : (280222526)));
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) ^ ((~(arr_7 [i_1 - 1] [i_1] [i_2] [i_1])))));
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((((((/* implicit */int) var_1)) / (1487134909))) << (((((/* implicit */int) var_5)) - (30077))))) - (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32512))) > (13909926138944999161ULL))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) var_0);
}
