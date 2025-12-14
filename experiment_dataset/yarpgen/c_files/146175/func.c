/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146175
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
    var_17 = ((/* implicit */long long int) max((((/* implicit */int) var_5)), ((~(((/* implicit */int) var_12))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (var_0)))) >> (((((/* implicit */int) (short)-13599)) + (13623)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((0U), (352407492U))) != (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) : (18446744073709551615ULL)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) var_4);
                    arr_10 [i_0] [i_1] [i_0] [i_2 - 1] = ((/* implicit */unsigned int) (unsigned short)13403);
                }
            } 
        } 
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) (-((+(var_10)))))) ? ((+(max((((/* implicit */unsigned long long int) 2547153309U)), (14ULL))))) : (((unsigned long long int) 30ULL)))))));
        var_21 = ((/* implicit */short) max((max((arr_0 [i_0] [i_0 + 3]), (((/* implicit */unsigned int) arr_2 [i_0 + 2])))), (((((/* implicit */_Bool) 1768294554)) ? (arr_0 [i_0] [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 2])))))));
    }
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (var_14)));
    var_23 = ((/* implicit */long long int) var_4);
}
