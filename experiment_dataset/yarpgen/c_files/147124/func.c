/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147124
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
    var_19 = (+(15788398065028384580ULL));
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)14336)) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) ((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14336)))))) ? (12569119670544059730ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51184)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((max((((/* implicit */int) var_3)), (arr_5 [(signed char)2] [4]))) <= (((/* implicit */int) arr_0 [i_1])))) ? ((+((-2147483647 - 1)))) : (var_11))))));
                arr_7 [i_1] [i_1] [15] = ((/* implicit */short) max((arr_6 [i_0] [i_1] [i_0]), (((arr_3 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                var_22 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) arr_0 [(unsigned short)12])))) : (arr_5 [i_0] [i_1]))) < (((((/* implicit */_Bool) (unsigned short)51210)) ? (((/* implicit */int) (unsigned short)18949)) : (((/* implicit */int) (unsigned short)51200))))));
            }
        } 
    } 
}
