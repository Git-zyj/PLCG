/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131401
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551609ULL))));
                var_12 = ((/* implicit */int) (+(var_2)));
                var_13 += ((/* implicit */short) ((((((/* implicit */_Bool) 834946379)) ? (((/* implicit */unsigned long long int) -834946373)) : (var_8))) >= (max((10974138625718261125ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) 834946366);
}
