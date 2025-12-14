/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116550
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
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_2))))), (min((min((((/* implicit */long long int) var_7)), (var_0))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (6687557990146619338ULL))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_8 [(_Bool)1] = ((/* implicit */signed char) ((((18446744073709551605ULL) >= (6687557990146619338ULL))) ? (10ULL) : (min(((+(10810906335697970128ULL))), (5609852030156074031ULL)))));
                var_16 = ((/* implicit */long long int) var_12);
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_13))) > ((-9223372036854775807LL - 1LL))));
            }
        } 
    } 
}
