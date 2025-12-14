/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150659
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((unsigned short) (~(min((((/* implicit */long long int) 3117259699U)), (var_2)))))))));
                var_17 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (min((var_15), (((/* implicit */unsigned long long int) -1194364064023937760LL)))))) * (((/* implicit */unsigned long long int) arr_1 [(_Bool)1]))));
                arr_5 [i_0] [6] = ((/* implicit */unsigned short) max((((/* implicit */int) var_7)), (min(((~(1697181694))), (max((-1697181694), (((/* implicit */int) var_3))))))));
                var_18 = ((/* implicit */long long int) 1697181675);
                var_19 = ((/* implicit */unsigned char) min(((-((+(0ULL))))), (((/* implicit */unsigned long long int) (unsigned char)138))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 9; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((1697181694) & ((-(1697181677)))));
                arr_10 [i_2] [i_2 + 1] [i_2 + 1] |= ((/* implicit */unsigned short) 0);
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (((((/* implicit */long long int) ((((/* implicit */_Bool) 1697181694)) ? (arr_3 [i_3]) : (((/* implicit */int) arr_2 [10] [6ULL]))))) | ((-9223372036854775807LL - 1LL))))));
            }
        } 
    } 
}
