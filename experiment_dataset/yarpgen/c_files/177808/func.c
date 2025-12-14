/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177808
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 -= ((/* implicit */unsigned short) min((((int) arr_2 [i_1] [i_0] [i_0])), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49843)) ? (((/* implicit */unsigned int) arr_3 [i_1 + 2])) : (var_14)))))))));
                var_19 = ((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) arr_0 [i_0])))));
                var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_1 + 2] [i_0] [i_0 - 1]))))), (((arr_2 [i_1] [18ULL] [i_0 - 1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        arr_6 [i_2] = ((/* implicit */short) ((signed char) var_13));
        arr_7 [0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15677)) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (var_2)))) ? (((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-17452))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))));
    }
    var_21 = ((/* implicit */signed char) ((int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */int) var_6))))) % (var_11))));
    var_22 = ((/* implicit */int) var_11);
}
