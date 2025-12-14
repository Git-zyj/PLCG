/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126908
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
    var_10 = (+(0LL));
    var_11 = var_8;
    var_12 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_5)), (var_6)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)138))));
                arr_9 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_0])) ? (((((/* implicit */_Bool) 144115188073758720LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1]))) : (5168862762577552842LL))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && ((!(((/* implicit */_Bool) (short)-1315))))))))));
            }
        } 
    } 
    var_13 += ((/* implicit */long long int) ((var_2) ? (max((max((var_9), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) var_3)))) : (((unsigned long long int) ((long long int) 18446744073709551607ULL)))));
}
