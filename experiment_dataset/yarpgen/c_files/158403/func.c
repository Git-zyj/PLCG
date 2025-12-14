/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158403
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
    var_13 -= ((/* implicit */signed char) var_4);
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 406938198U)) ? (2166166985U) : (4294967295U))))) : (((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = arr_2 [i_1] [i_0] [i_1];
                var_15 &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-36)), (2491014056U)));
                var_16 = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_1]);
                var_17 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (max(((((_Bool)1) ? (371912720U) : (3604273739U))), (((/* implicit */unsigned int) (_Bool)1))))));
                var_18 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (short)27838)), (5760526124222817477ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)-19716)) : (((/* implicit */int) arr_3 [i_1] [i_1])))))));
            }
        } 
    } 
}
