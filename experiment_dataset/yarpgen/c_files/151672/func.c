/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151672
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
    var_15 = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 616986376)) : (14606231394532846373ULL)))))));
    var_16 = ((short) max((((/* implicit */unsigned long long int) (short)15031)), (2483921218332070265ULL)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_17 = (short)32767;
                var_18 = (+(((((/* implicit */_Bool) (short)-18737)) ? (arr_2 [i_0 + 2] [i_0 + 3] [i_0 - 1]) : (((/* implicit */unsigned long long int) arr_3 [i_0 + 2])))));
                arr_4 [i_1] = ((/* implicit */int) max(((short)-8456), ((short)20448)));
            }
        } 
    } 
}
